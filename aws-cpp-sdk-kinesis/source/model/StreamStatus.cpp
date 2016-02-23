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
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");

namespace Aws
{
namespace Kinesis
{
namespace Model
{
namespace StreamStatusMapper
{


StreamStatus GetStreamStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH)
  {
     return StreamStatus::CREATING;
  }
  else if (hashCode == DELETING_HASH)
  {
     return StreamStatus::DELETING;
  }
  else if (hashCode == ACTIVE_HASH)
  {
     return StreamStatus::ACTIVE;
  }
  else if (hashCode == UPDATING_HASH)
  {
     return StreamStatus::UPDATING;
  }
  return StreamStatus::NOT_SET;
}

Aws::String GetNameForStreamStatus(StreamStatus enumValue)
{
  switch(value)
  {
  case StreamStatus::CREATING:
    return "CREATING";
  case StreamStatus::DELETING:
    return "DELETING";
  case StreamStatus::ACTIVE:
    return "ACTIVE";
  case StreamStatus::UPDATING:
    return "UPDATING";
  default:
    return "";
  }
}

} // namespace StreamStatusMapper
} // namespace Model
} // namespace Kinesis
} // namespace Aws
