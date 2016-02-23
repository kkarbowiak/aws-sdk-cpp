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
#include <aws/es/model/VolumeType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int standard_HASH = HashingUtils::HashString("standard");
static const int gp2_HASH = HashingUtils::HashString("gp2");
static const int io1_HASH = HashingUtils::HashString("io1");

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
namespace VolumeTypeMapper
{


VolumeType GetVolumeTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == standard_HASH)
  {
     return VolumeType::standard;
  }
  else if (hashCode == gp2_HASH)
  {
     return VolumeType::gp2;
  }
  else if (hashCode == io1_HASH)
  {
     return VolumeType::io1;
  }
  return VolumeType::NOT_SET;
}

Aws::String GetNameForVolumeType(VolumeType enumValue)
{
  switch(value)
  {
  case VolumeType::standard:
    return "standard";
  case VolumeType::gp2:
    return "gp2";
  case VolumeType::io1:
    return "io1";
  default:
    return "";
  }
}

} // namespace VolumeTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
