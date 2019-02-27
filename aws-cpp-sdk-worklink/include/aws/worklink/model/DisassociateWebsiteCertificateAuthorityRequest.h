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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API DisassociateWebsiteCertificateAuthorityRequest : public WorkLinkRequest
  {
  public:
    DisassociateWebsiteCertificateAuthorityRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateWebsiteCertificateAuthority"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline const Aws::String& GetWebsiteCaId() const{ return m_websiteCaId; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const Aws::String& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = value; }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(Aws::String&& value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId = std::move(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline void SetWebsiteCaId(const char* value) { m_websiteCaIdHasBeenSet = true; m_websiteCaId.assign(value); }

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithWebsiteCaId(const Aws::String& value) { SetWebsiteCaId(value); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithWebsiteCaId(Aws::String&& value) { SetWebsiteCaId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the CA.</p>
     */
    inline DisassociateWebsiteCertificateAuthorityRequest& WithWebsiteCaId(const char* value) { SetWebsiteCaId(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::String m_websiteCaId;
    bool m_websiteCaIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
