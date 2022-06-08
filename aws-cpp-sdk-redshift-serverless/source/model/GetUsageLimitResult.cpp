﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/GetUsageLimitResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageLimitResult::GetUsageLimitResult()
{
}

GetUsageLimitResult::GetUsageLimitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUsageLimitResult& GetUsageLimitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("usageLimit"))
  {
    m_usageLimit = jsonValue.GetObject("usageLimit");

  }



  return *this;
}
