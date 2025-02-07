﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/WebACLSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListWebACLsResult
  {
  public:
    AWS_WAFREGIONAL_API ListWebACLsResult();
    AWS_WAFREGIONAL_API ListWebACLsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListWebACLsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListWebACLsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListWebACLsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more <code>WebACL</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>WebACL</code> objects, submit
     * another <code>ListWebACLs</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListWebACLsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline const Aws::Vector<WebACLSummary>& GetWebACLs() const{ return m_webACLs; }

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline void SetWebACLs(const Aws::Vector<WebACLSummary>& value) { m_webACLs = value; }

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline void SetWebACLs(Aws::Vector<WebACLSummary>&& value) { m_webACLs = std::move(value); }

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline ListWebACLsResult& WithWebACLs(const Aws::Vector<WebACLSummary>& value) { SetWebACLs(value); return *this;}

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline ListWebACLsResult& WithWebACLs(Aws::Vector<WebACLSummary>&& value) { SetWebACLs(std::move(value)); return *this;}

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline ListWebACLsResult& AddWebACLs(const WebACLSummary& value) { m_webACLs.push_back(value); return *this; }

    /**
     * <p>An array of <a>WebACLSummary</a> objects.</p>
     */
    inline ListWebACLsResult& AddWebACLs(WebACLSummary&& value) { m_webACLs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<WebACLSummary> m_webACLs;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
