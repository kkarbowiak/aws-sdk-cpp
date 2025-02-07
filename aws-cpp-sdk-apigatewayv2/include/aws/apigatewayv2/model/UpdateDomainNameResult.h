﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/MutualTlsAuthentication.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class UpdateDomainNameResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateDomainNameResult();
    AWS_APIGATEWAYV2_API UpdateDomainNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateDomainNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The API mapping selection expression.</p>
     */
    inline const Aws::String& GetApiMappingSelectionExpression() const{ return m_apiMappingSelectionExpression; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const Aws::String& value) { m_apiMappingSelectionExpression = value; }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(Aws::String&& value) { m_apiMappingSelectionExpression = std::move(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline void SetApiMappingSelectionExpression(const char* value) { m_apiMappingSelectionExpression.assign(value); }

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline UpdateDomainNameResult& WithApiMappingSelectionExpression(const Aws::String& value) { SetApiMappingSelectionExpression(value); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline UpdateDomainNameResult& WithApiMappingSelectionExpression(Aws::String&& value) { SetApiMappingSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The API mapping selection expression.</p>
     */
    inline UpdateDomainNameResult& WithApiMappingSelectionExpression(const char* value) { SetApiMappingSelectionExpression(value); return *this;}


    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline UpdateDomainNameResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The domain name configurations.</p>
     */
    inline const Aws::Vector<DomainNameConfiguration>& GetDomainNameConfigurations() const{ return m_domainNameConfigurations; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { m_domainNameConfigurations = value; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline void SetDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { m_domainNameConfigurations = std::move(value); }

    /**
     * <p>The domain name configurations.</p>
     */
    inline UpdateDomainNameResult& WithDomainNameConfigurations(const Aws::Vector<DomainNameConfiguration>& value) { SetDomainNameConfigurations(value); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline UpdateDomainNameResult& WithDomainNameConfigurations(Aws::Vector<DomainNameConfiguration>&& value) { SetDomainNameConfigurations(std::move(value)); return *this;}

    /**
     * <p>The domain name configurations.</p>
     */
    inline UpdateDomainNameResult& AddDomainNameConfigurations(const DomainNameConfiguration& value) { m_domainNameConfigurations.push_back(value); return *this; }

    /**
     * <p>The domain name configurations.</p>
     */
    inline UpdateDomainNameResult& AddDomainNameConfigurations(DomainNameConfiguration&& value) { m_domainNameConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline const MutualTlsAuthentication& GetMutualTlsAuthentication() const{ return m_mutualTlsAuthentication; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(const MutualTlsAuthentication& value) { m_mutualTlsAuthentication = value; }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline void SetMutualTlsAuthentication(MutualTlsAuthentication&& value) { m_mutualTlsAuthentication = std::move(value); }

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline UpdateDomainNameResult& WithMutualTlsAuthentication(const MutualTlsAuthentication& value) { SetMutualTlsAuthentication(value); return *this;}

    /**
     * <p>The mutual TLS authentication configuration for a custom domain name.</p>
     */
    inline UpdateDomainNameResult& WithMutualTlsAuthentication(MutualTlsAuthentication&& value) { SetMutualTlsAuthentication(std::move(value)); return *this;}


    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags associated with a domain name.</p>
     */
    inline UpdateDomainNameResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_apiMappingSelectionExpression;

    Aws::String m_domainName;

    Aws::Vector<DomainNameConfiguration> m_domainNameConfigurations;

    MutualTlsAuthentication m_mutualTlsAuthentication;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
