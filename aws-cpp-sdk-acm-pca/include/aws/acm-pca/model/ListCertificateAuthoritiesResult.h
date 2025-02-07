﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/CertificateAuthority.h>
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
namespace ACMPCA
{
namespace Model
{
  class ListCertificateAuthoritiesResult
  {
  public:
    AWS_ACMPCA_API ListCertificateAuthoritiesResult();
    AWS_ACMPCA_API ListCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API ListCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline const Aws::Vector<CertificateAuthority>& GetCertificateAuthorities() const{ return m_certificateAuthorities; }

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline void SetCertificateAuthorities(const Aws::Vector<CertificateAuthority>& value) { m_certificateAuthorities = value; }

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline void SetCertificateAuthorities(Aws::Vector<CertificateAuthority>&& value) { m_certificateAuthorities = std::move(value); }

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline ListCertificateAuthoritiesResult& WithCertificateAuthorities(const Aws::Vector<CertificateAuthority>& value) { SetCertificateAuthorities(value); return *this;}

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline ListCertificateAuthoritiesResult& WithCertificateAuthorities(Aws::Vector<CertificateAuthority>&& value) { SetCertificateAuthorities(std::move(value)); return *this;}

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline ListCertificateAuthoritiesResult& AddCertificateAuthorities(const CertificateAuthority& value) { m_certificateAuthorities.push_back(value); return *this; }

    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline ListCertificateAuthoritiesResult& AddCertificateAuthorities(CertificateAuthority&& value) { m_certificateAuthorities.push_back(std::move(value)); return *this; }


    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline ListCertificateAuthoritiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline ListCertificateAuthoritiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline ListCertificateAuthoritiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CertificateAuthority> m_certificateAuthorities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
