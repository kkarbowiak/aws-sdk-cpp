﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class AWS_MAINFRAMEMODERNIZATION_API StopApplicationRequest : public MainframeModernizationRequest
  {
  public:
    StopApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline StopApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>Stopping an application process can take a long time. Setting this parameter
     * to true lets you force stop the application so you don't need to wait until the
     * process finishes to apply another action on the application. The default value
     * is false.</p>
     */
    inline bool GetForceStop() const{ return m_forceStop; }

    /**
     * <p>Stopping an application process can take a long time. Setting this parameter
     * to true lets you force stop the application so you don't need to wait until the
     * process finishes to apply another action on the application. The default value
     * is false.</p>
     */
    inline bool ForceStopHasBeenSet() const { return m_forceStopHasBeenSet; }

    /**
     * <p>Stopping an application process can take a long time. Setting this parameter
     * to true lets you force stop the application so you don't need to wait until the
     * process finishes to apply another action on the application. The default value
     * is false.</p>
     */
    inline void SetForceStop(bool value) { m_forceStopHasBeenSet = true; m_forceStop = value; }

    /**
     * <p>Stopping an application process can take a long time. Setting this parameter
     * to true lets you force stop the application so you don't need to wait until the
     * process finishes to apply another action on the application. The default value
     * is false.</p>
     */
    inline StopApplicationRequest& WithForceStop(bool value) { SetForceStop(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    bool m_forceStop;
    bool m_forceStopHasBeenSet;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
