﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotRecommendationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBotRecommendationResult::DescribeBotRecommendationResult() : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET)
{
}

DescribeBotRecommendationResult::DescribeBotRecommendationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_botRecommendationStatus(BotRecommendationStatus::NOT_SET)
{
  *this = result;
}

DescribeBotRecommendationResult& DescribeBotRecommendationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }

  if(jsonValue.ValueExists("botRecommendationStatus"))
  {
    m_botRecommendationStatus = BotRecommendationStatusMapper::GetBotRecommendationStatusForName(jsonValue.GetString("botRecommendationStatus"));

  }

  if(jsonValue.ValueExists("botRecommendationId"))
  {
    m_botRecommendationId = jsonValue.GetString("botRecommendationId");

  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }

  if(jsonValue.ValueExists("transcriptSourceSetting"))
  {
    m_transcriptSourceSetting = jsonValue.GetObject("transcriptSourceSetting");

  }

  if(jsonValue.ValueExists("encryptionSetting"))
  {
    m_encryptionSetting = jsonValue.GetObject("encryptionSetting");

  }

  if(jsonValue.ValueExists("botRecommendationResults"))
  {
    m_botRecommendationResults = jsonValue.GetObject("botRecommendationResults");

  }



  return *this;
}
