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
#include <aws/config/model/ChronologicalOrder.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Reverse_HASH = HashingUtils::HashString("Reverse");
static const int Forward_HASH = HashingUtils::HashString("Forward");

namespace Aws
{
namespace ConfigService
{
namespace Model
{
namespace ChronologicalOrderMapper
{


ChronologicalOrder GetChronologicalOrderForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Reverse_HASH)
  {
     return ChronologicalOrder::Reverse;
  }
  else if (hashCode == Forward_HASH)
  {
     return ChronologicalOrder::Forward;
  }
  return ChronologicalOrder::NOT_SET;
}

Aws::String GetNameForChronologicalOrder(ChronologicalOrder enumValue)
{
  switch(value)
  {
  case ChronologicalOrder::Reverse:
    return "Reverse";
  case ChronologicalOrder::Forward:
    return "Forward";
  default:
    return "";
  }
}

} // namespace ChronologicalOrderMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
