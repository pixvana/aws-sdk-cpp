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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable the Deliverability dashboard. When you enable
   * the Deliverability dashboard, you gain access to reputation metrics for the
   * domains that you use to send email using Amazon Pinpoint. You also gain the
   * ability to perform predictive inbox placement tests.</p> <p>When you use the
   * Deliverability dashboard, you pay a monthly charge of USD$1,250.00, in addition
   * to any other fees that you accrue by using Amazon Pinpoint. If you enable the
   * Deliverability dashboard after the first day of a calendar month, we prorate the
   * monthly charge based on how many days have elapsed in the current calendar
   * month.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDeliverabilityDashboardOptionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutDeliverabilityDashboardOptionRequest : public PinpointEmailRequest
  {
  public:
    PutDeliverabilityDashboardOptionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliverabilityDashboardOption"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline bool GetDashboardEnabled() const{ return m_dashboardEnabled; }

    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabledHasBeenSet = true; m_dashboardEnabled = value; }

    /**
     * <p>Indicates whether the Deliverability dashboard is enabled. If the value is
     * <code>true</code>, then the dashboard is enabled.</p>
     */
    inline PutDeliverabilityDashboardOptionRequest& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}

  private:

    bool m_dashboardEnabled;
    bool m_dashboardEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
