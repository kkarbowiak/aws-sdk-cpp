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
#include <aws/s3/model/MetadataDirective.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int COPY_HASH = HashingUtils::HashString("COPY");
static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace MetadataDirectiveMapper
{


MetadataDirective GetMetadataDirectiveForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COPY_HASH)
  {
     return MetadataDirective::COPY;
  }
  else if (hashCode == REPLACE_HASH)
  {
     return MetadataDirective::REPLACE;
  }
  return MetadataDirective::NOT_SET;
}

Aws::String GetNameForMetadataDirective(MetadataDirective enumValue)
{
  switch(value)
  {
  case MetadataDirective::COPY:
    return "COPY";
  case MetadataDirective::REPLACE:
    return "REPLACE";
  default:
    return "";
  }
}

} // namespace MetadataDirectiveMapper
} // namespace Model
} // namespace S3
} // namespace Aws
