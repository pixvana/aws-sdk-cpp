﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/events/CloudWatchEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVENTS_API DeleteRuleRequest : public CloudWatchEventsRequest
  {
  public:
    DeleteRuleRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline DeleteRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline DeleteRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline DeleteRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, you must
     * specify <code>Force</code> as <code>True</code> to delete the rule. This
     * parameter is ignored for rules that are not managed rules. You can check whether
     * a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, you must
     * specify <code>Force</code> as <code>True</code> to delete the rule. This
     * parameter is ignored for rules that are not managed rules. You can check whether
     * a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>If this is a managed rule, created by an AWS service on your behalf, you must
     * specify <code>Force</code> as <code>True</code> to delete the rule. This
     * parameter is ignored for rules that are not managed rules. You can check whether
     * a rule is a managed rule by using <code>DescribeRule</code> or
     * <code>ListRules</code> and checking the <code>ManagedBy</code> field of the
     * response.</p>
     */
    inline DeleteRuleRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
