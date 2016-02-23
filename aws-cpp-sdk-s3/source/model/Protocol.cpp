/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int http_HASH = HashingUtils::HashString("http");
static const int https_HASH = HashingUtils::HashString("https");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace ProtocolMapper
{


Protocol GetProtocolForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == http_HASH)
  {
     return Protocol::http;
  }
  else if (hashCode == https_HASH)
  {
     return Protocol::https;
  }
  return Protocol::NOT_SET;
}

Aws::String GetNameForProtocol(Protocol enumValue)
{
  switch(value)
  {
  case Protocol::http:
    return "http";
  case Protocol::https:
    return "https";
  default:
    return "";
  }
}

} // namespace ProtocolMapper
} // namespace Model
} // namespace S3
} // namespace Aws
