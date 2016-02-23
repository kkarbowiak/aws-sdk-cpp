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
#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Launching_HASH = HashingUtils::HashString("Launching");
static const int Updating_HASH = HashingUtils::HashString("Updating");
static const int Ready_HASH = HashingUtils::HashString("Ready");
static const int Terminating_HASH = HashingUtils::HashString("Terminating");
static const int Terminated_HASH = HashingUtils::HashString("Terminated");

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
namespace EnvironmentStatusMapper
{


EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Launching_HASH)
  {
     return EnvironmentStatus::Launching;
  }
  else if (hashCode == Updating_HASH)
  {
     return EnvironmentStatus::Updating;
  }
  else if (hashCode == Ready_HASH)
  {
     return EnvironmentStatus::Ready;
  }
  else if (hashCode == Terminating_HASH)
  {
     return EnvironmentStatus::Terminating;
  }
  else if (hashCode == Terminated_HASH)
  {
     return EnvironmentStatus::Terminated;
  }
  return EnvironmentStatus::NOT_SET;
}

Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
{
  switch(value)
  {
  case EnvironmentStatus::Launching:
    return "Launching";
  case EnvironmentStatus::Updating:
    return "Updating";
  case EnvironmentStatus::Ready:
    return "Ready";
  case EnvironmentStatus::Terminating:
    return "Terminating";
  case EnvironmentStatus::Terminated:
    return "Terminated";
  default:
    return "";
  }
}

} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
