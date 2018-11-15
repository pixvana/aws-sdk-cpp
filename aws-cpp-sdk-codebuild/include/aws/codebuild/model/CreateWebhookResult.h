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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Webhook.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API CreateWebhookResult
  {
  public:
    CreateWebhookResult();
    CreateWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline CreateWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline CreateWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    Webhook m_webhook;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
