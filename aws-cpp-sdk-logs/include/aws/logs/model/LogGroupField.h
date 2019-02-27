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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>The fields contained in log events found by a <code>GetLogGroupFields</code>
   * operation, along with the percentage of queried log events in which each field
   * appears.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogGroupField">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API LogGroupField
  {
  public:
    LogGroupField();
    LogGroupField(Aws::Utils::Json::JsonView jsonValue);
    LogGroupField& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a log field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a log field.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a log field.</p>
     */
    inline LogGroupField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline int GetPercent() const{ return m_percent; }

    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline void SetPercent(int value) { m_percentHasBeenSet = true; m_percent = value; }

    /**
     * <p>The percentage of log events queried that contained the field.</p>
     */
    inline LogGroupField& WithPercent(int value) { SetPercent(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_percent;
    bool m_percentHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
