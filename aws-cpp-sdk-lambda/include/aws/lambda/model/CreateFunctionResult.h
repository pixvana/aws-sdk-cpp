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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/VpcConfigResponse.h>
#include <aws/lambda/model/DeadLetterConfig.h>
#include <aws/lambda/model/EnvironmentResponse.h>
#include <aws/lambda/model/TracingConfigResponse.h>
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
namespace Lambda
{
namespace Model
{
  /**
   * <p>A Lambda function's configuration settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API CreateFunctionResult
  {
  public:
    CreateFunctionResult();
    CreateFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline CreateFunctionResult& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The function's Amazon Resource Name.</p>
     */
    inline CreateFunctionResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtime = std::move(value); }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline CreateFunctionResult& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline CreateFunctionResult& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}


    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline CreateFunctionResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline CreateFunctionResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline CreateFunctionResult& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handler = value; }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handler = std::move(value); }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const char* value) { m_handler.assign(value); }

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function Lambda calls to begin executing your function.</p>
     */
    inline CreateFunctionResult& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>The size of the function's deployment package in bytes.</p>
     */
    inline long long GetCodeSize() const{ return m_codeSize; }

    /**
     * <p>The size of the function's deployment package in bytes.</p>
     */
    inline void SetCodeSize(long long value) { m_codeSize = value; }

    /**
     * <p>The size of the function's deployment package in bytes.</p>
     */
    inline CreateFunctionResult& WithCodeSize(long long value) { SetCodeSize(value); return *this;}


    /**
     * <p>The function's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The function's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The function's description.</p>
     */
    inline CreateFunctionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline CreateFunctionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The function's description.</p>
     */
    inline CreateFunctionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it.</p>
     */
    inline void SetTimeout(int value) { m_timeout = value; }

    /**
     * <p>The amount of time that Lambda allows a function to run before terminating
     * it.</p>
     */
    inline CreateFunctionResult& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The memory allocated to the function</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory allocated to the function</p>
     */
    inline void SetMemorySize(int value) { m_memorySize = value; }

    /**
     * <p>The memory allocated to the function</p>
     */
    inline CreateFunctionResult& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModified = value; }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline void SetLastModified(const char* value) { m_lastModified.assign(value); }

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline CreateFunctionResult& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline CreateFunctionResult& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>The date and time that the function was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ssTZD).</p>
     */
    inline CreateFunctionResult& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256 = value; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256.assign(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline CreateFunctionResult& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline CreateFunctionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The function's networking configuration.</p>
     */
    inline const VpcConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(const VpcConfigResponse& value) { m_vpcConfig = value; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(VpcConfigResponse&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline CreateFunctionResult& WithVpcConfig(const VpcConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The function's networking configuration.</p>
     */
    inline CreateFunctionResult& WithVpcConfig(VpcConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfig = value; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfig = std::move(value); }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline CreateFunctionResult& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline CreateFunctionResult& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The function's environment variables.</p>
     */
    inline const EnvironmentResponse& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(const EnvironmentResponse& value) { m_environment = value; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(EnvironmentResponse&& value) { m_environment = std::move(value); }

    /**
     * <p>The function's environment variables.</p>
     */
    inline CreateFunctionResult& WithEnvironment(const EnvironmentResponse& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The function's environment variables.</p>
     */
    inline CreateFunctionResult& WithEnvironment(EnvironmentResponse&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArn = value; }

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArn = std::move(value); }

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArn.assign(value); }

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline CreateFunctionResult& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline CreateFunctionResult& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt the function's environment variables. Only
     * returned if you've configured a customer managed CMK.</p>
     */
    inline CreateFunctionResult& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}


    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline const TracingConfigResponse& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(const TracingConfigResponse& value) { m_tracingConfig = value; }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(TracingConfigResponse&& value) { m_tracingConfig = std::move(value); }

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline CreateFunctionResult& WithTracingConfig(const TracingConfigResponse& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>The function's AWS X-Ray tracing configuration.</p>
     */
    inline CreateFunctionResult& WithTracingConfig(TracingConfigResponse&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the master function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }

    /**
     * <p>The ARN of the master function.</p>
     */
    inline void SetMasterArn(const Aws::String& value) { m_masterArn = value; }

    /**
     * <p>The ARN of the master function.</p>
     */
    inline void SetMasterArn(Aws::String&& value) { m_masterArn = std::move(value); }

    /**
     * <p>The ARN of the master function.</p>
     */
    inline void SetMasterArn(const char* value) { m_masterArn.assign(value); }

    /**
     * <p>The ARN of the master function.</p>
     */
    inline CreateFunctionResult& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}

    /**
     * <p>The ARN of the master function.</p>
     */
    inline CreateFunctionResult& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the master function.</p>
     */
    inline CreateFunctionResult& WithMasterArn(const char* value) { SetMasterArn(value); return *this;}


    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline CreateFunctionResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline CreateFunctionResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>Represents the latest updated revision of the function or alias.</p>
     */
    inline CreateFunctionResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    Aws::String m_functionName;

    Aws::String m_functionArn;

    Runtime m_runtime;

    Aws::String m_role;

    Aws::String m_handler;

    long long m_codeSize;

    Aws::String m_description;

    int m_timeout;

    int m_memorySize;

    Aws::String m_lastModified;

    Aws::String m_codeSha256;

    Aws::String m_version;

    VpcConfigResponse m_vpcConfig;

    DeadLetterConfig m_deadLetterConfig;

    EnvironmentResponse m_environment;

    Aws::String m_kMSKeyArn;

    TracingConfigResponse m_tracingConfig;

    Aws::String m_masterArn;

    Aws::String m_revisionId;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
