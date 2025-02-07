﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public SSMRequest
  {
  public:
    AWS_SSM_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the resource to which the policies are
     * attached.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A policy you want to associate with a resource.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The policy ID.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The policy ID.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The policy ID.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The policy ID.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The policy ID.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The policy ID.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The policy ID.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The policy ID.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline bool PolicyHashHasBeenSet() const { return m_policyHashHasBeenSet; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHashHasBeenSet = true; m_policyHash = value; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::move(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHashHasBeenSet = true; m_policyHash.assign(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
