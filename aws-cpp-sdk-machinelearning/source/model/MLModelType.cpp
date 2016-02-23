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
#include <aws/machinelearning/model/MLModelType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int REGRESSION_HASH = HashingUtils::HashString("REGRESSION");
static const int BINARY_HASH = HashingUtils::HashString("BINARY");
static const int MULTICLASS_HASH = HashingUtils::HashString("MULTICLASS");

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
namespace MLModelTypeMapper
{


MLModelType GetMLModelTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REGRESSION_HASH)
  {
     return MLModelType::REGRESSION;
  }
  else if (hashCode == BINARY_HASH)
  {
     return MLModelType::BINARY;
  }
  else if (hashCode == MULTICLASS_HASH)
  {
     return MLModelType::MULTICLASS;
  }
  return MLModelType::NOT_SET;
}

Aws::String GetNameForMLModelType(MLModelType enumValue)
{
  switch(value)
  {
  case MLModelType::REGRESSION:
    return "REGRESSION";
  case MLModelType::BINARY:
    return "BINARY";
  case MLModelType::MULTICLASS:
    return "MULTICLASS";
  default:
    return "";
  }
}

} // namespace MLModelTypeMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
