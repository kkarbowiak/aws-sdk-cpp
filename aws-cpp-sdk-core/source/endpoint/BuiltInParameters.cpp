/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/BuiltInParameters.h>

namespace Aws
{
namespace Endpoint
{
    static const BuiltInParameters::EndpointParameter BUILTIN_NOT_FOUND_PARAMETER("PARAMETER_NOT_SET", false, EndpointParameter::ParameterOrigin::CLIENT_CONTEXT);

    void BuiltInParameters::OverrideEndpoint(const Aws::String& endpoint, const Aws::Http::Scheme& scheme)
    {
        static const Aws::String SDK_ENDPOINT = "Endpoint";

        if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
        {
            SetStringParameter(SDK_ENDPOINT, endpoint);
        }
        else
        {
            SetStringParameter(SDK_ENDPOINT, Aws::String(Aws::Http::SchemeMapper::ToString(scheme)) + "://" + endpoint);
        }
    }

    bool StringEndsWith(const Aws::String& str, const Aws::String& suffix)
    {
        if (suffix.size() > str.size())
            return false;
        return std::equal(suffix.rbegin(), suffix.rend(), str.rbegin());
    }

    void BuiltInParameters::SetFromClientConfiguration(const Client::ClientConfiguration& config)
    {
        bool forceFIPS = false;
        static const Aws::String AWS_REGION = "Region";
        if (!config.region.empty()) {
            static const Aws::String FIPS_PREFIX = "fips-";
            static const Aws::String FIPS_SUFFIX = "-fips";
            if (config.region.rfind(FIPS_PREFIX, 0) == 0) {
                // Backward compatibility layer for code hacking previous SDK version
                Aws::String regionOverride = config.region.substr(FIPS_PREFIX.length());
                forceFIPS = true;
                SetStringParameter(AWS_REGION, regionOverride);
            } else if (StringEndsWith(config.region, FIPS_SUFFIX)) {
                Aws::String regionOverride = config.region.substr(0, config.region.size() - FIPS_SUFFIX.size());
                forceFIPS = true;
                SetStringParameter(AWS_REGION, regionOverride);
            } else {
                SetStringParameter(AWS_REGION, config.region);
            }
        }

        static const Aws::String AWS_USE_FIPS = "UseFIPS";
        SetBooleanParameter(AWS_USE_FIPS, config.useFIPS || forceFIPS);

        static const Aws::String AWS_USE_DUAL_STACK = "UseDualStack";
        SetBooleanParameter(AWS_USE_DUAL_STACK, config.useDualStack);

        if (!config.endpointOverride.empty()) {
            OverrideEndpoint(config.endpointOverride, config.scheme);
        }
    }

    void BuiltInParameters::SetFromClientConfiguration(const Client::GenericClientConfiguration<false>& config)
    {
        return SetFromClientConfiguration(static_cast<const Client::ClientConfiguration&>(config));
    }

    void BuiltInParameters::SetFromClientConfiguration(const Client::GenericClientConfiguration<true>& config)
    {
        SetFromClientConfiguration(static_cast<const Client::ClientConfiguration&>(config));
    }

    const BuiltInParameters::EndpointParameter& BuiltInParameters::GetParameter(const Aws::String& name) const
    {
        const auto foundIt = std::find_if(m_params.begin(), m_params.end(),
                                          [name](const BuiltInParameters::EndpointParameter& item)
                                          {
                                              return item.GetName() == name;
                                          });

        if (foundIt != m_params.end())
        {
            return *foundIt;
        }
        else
        {
            return BUILTIN_NOT_FOUND_PARAMETER;
        }
    }

    void BuiltInParameters::SetParameter(EndpointParameter param)
    {
        const auto foundIt = std::find_if(m_params.begin(), m_params.end(),
                                          [param](const BuiltInParameters::EndpointParameter& item)
                                          {
                                              return item.GetName() == param.GetName();
                                          });

        if (foundIt != m_params.end())
        {
            m_params.erase(foundIt);
        }
        m_params.emplace_back(std::move(param));
    }

    void BuiltInParameters::SetStringParameter(Aws::String name, Aws::String value)
    {
        return SetParameter(EndpointParameter(std::move(name), std::move(value), EndpointParameter::ParameterOrigin::BUILT_IN));
    }

    void BuiltInParameters::SetBooleanParameter(Aws::String name, bool value)
    {
        return SetParameter(EndpointParameter(std::move(name), value, EndpointParameter::ParameterOrigin::BUILT_IN));
    }

    const Aws::Vector<BuiltInParameters::EndpointParameter>& BuiltInParameters::GetAllParameters() const
    {
        return m_params;
    }
} // namespace Endpoint
} // namespace Aws