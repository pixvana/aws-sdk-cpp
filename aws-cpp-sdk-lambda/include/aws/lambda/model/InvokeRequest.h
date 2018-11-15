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
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/InvocationType.h>
#include <aws/lambda/model/LogType.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API InvokeRequest : public StreamingLambdaRequest
  {
  public:
    InvokeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Invoke"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the lambda function.</p> <p class="title"> <b>Name formats</b>
     * </p> <ul> <li> <p> <b>Function name</b> - <code>MyFunction</code>.</p> </li>
     * <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it is limited to 64 characters in length.</p>
     */
    inline InvokeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out.</p>
     * </li> <li> <p> <code>Event</code> - Invoke the function asynchronously. Send
     * events that fail multiple times to the function's dead-letter queue (if
     * configured).</p> </li> <li> <p> <code>DryRun</code> - Validate parameter values
     * and verify that the user or role has permission to invoke the function.</p>
     * </li> </ul>
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out.</p>
     * </li> <li> <p> <code>Event</code> - Invoke the function asynchronously. Send
     * events that fail multiple times to the function's dead-letter queue (if
     * configured).</p> </li> <li> <p> <code>DryRun</code> - Validate parameter values
     * and verify that the user or role has permission to invoke the function.</p>
     * </li> </ul>
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out.</p>
     * </li> <li> <p> <code>Event</code> - Invoke the function asynchronously. Send
     * events that fail multiple times to the function's dead-letter queue (if
     * configured).</p> </li> <li> <p> <code>DryRun</code> - Validate parameter values
     * and verify that the user or role has permission to invoke the function.</p>
     * </li> </ul>
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out.</p>
     * </li> <li> <p> <code>Event</code> - Invoke the function asynchronously. Send
     * events that fail multiple times to the function's dead-letter queue (if
     * configured).</p> </li> <li> <p> <code>DryRun</code> - Validate parameter values
     * and verify that the user or role has permission to invoke the function.</p>
     * </li> </ul>
     */
    inline InvokeRequest& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Choose from the following options.</p> <ul> <li> <p>
     * <code>RequestResponse</code> (default) - Invoke the function synchronously. Keep
     * the connection open until the function returns a response or times out.</p>
     * </li> <li> <p> <code>Event</code> - Invoke the function asynchronously. Send
     * events that fail multiple times to the function's dead-letter queue (if
     * configured).</p> </li> <li> <p> <code>DryRun</code> - Validate parameter values
     * and verify that the user or role has permission to invoke the function.</p>
     * </li> </ul>
     */
    inline InvokeRequest& WithInvocationType(InvocationType&& value) { SetInvocationType(std::move(value)); return *this;}


    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline InvokeRequest& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>You can set this optional parameter to <code>Tail</code> in the request only
     * if you specify the <code>InvocationType</code> parameter with value
     * <code>RequestResponse</code>. In this case, AWS Lambda returns the
     * base64-encoded last 4 KB of log data produced by your Lambda function in the
     * <code>x-amz-log-result</code> header. </p>
     */
    inline InvokeRequest& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline const Aws::String& GetClientContext() const{ return m_clientContext; }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline void SetClientContext(const Aws::String& value) { m_clientContextHasBeenSet = true; m_clientContext = value; }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline void SetClientContext(Aws::String&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::move(value); }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline void SetClientContext(const char* value) { m_clientContextHasBeenSet = true; m_clientContext.assign(value); }

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline InvokeRequest& WithClientContext(const Aws::String& value) { SetClientContext(value); return *this;}

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline InvokeRequest& WithClientContext(Aws::String&& value) { SetClientContext(std::move(value)); return *this;}

    /**
     * <p>Using the <code>ClientContext</code> you can pass client-specific information
     * to the Lambda function you are invoking. You can then process the client
     * information in your Lambda function as you choose through the context variable.
     * For an example of a <code>ClientContext</code> JSON, see <a
     * href="http://docs.aws.amazon.com/mobileanalytics/latest/ug/PutEvents.html">PutEvents</a>
     * in the <i>Amazon Mobile Analytics API Reference and User Guide</i>.</p> <p>The
     * ClientContext JSON must be base64-encoded and has a maximum size of 3583
     * bytes.</p> <note> <p> <code>ClientContext</code> information is returned only if
     * you use the synchronous (<code>RequestResponse</code>) invocation type.</p>
     * </note>
     */
    inline InvokeRequest& WithClientContext(const char* value) { SetClientContext(value); return *this;}


    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline const Aws::String& GetQualifier() const{ return m_qualifier; }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(const Aws::String& value) { m_qualifierHasBeenSet = true; m_qualifier = value; }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(Aws::String&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::move(value); }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline void SetQualifier(const char* value) { m_qualifierHasBeenSet = true; m_qualifier.assign(value); }

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(const Aws::String& value) { SetQualifier(value); return *this;}

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(Aws::String&& value) { SetQualifier(std::move(value)); return *this;}

    /**
     * <p>Specify a version or alias to invoke a published version of the function.</p>
     */
    inline InvokeRequest& WithQualifier(const char* value) { SetQualifier(value); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet;

    LogType m_logType;
    bool m_logTypeHasBeenSet;

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet;


    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
