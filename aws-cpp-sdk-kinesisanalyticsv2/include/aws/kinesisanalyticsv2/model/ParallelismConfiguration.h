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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes parameters for how a Java-based Amazon Kinesis Data Analytics
   * application executes multiple tasks simultaneously. For more information about
   * parallelism, see <a
   * href="https://ci.apache.org/projects/flink/flink-docs-stable/dev/parallel.html">Parallel
   * Execution</a> in the <a
   * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
   * Documentation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ParallelismConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ParallelismConfiguration
  {
  public:
    ParallelismConfiguration();
    ParallelismConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ParallelismConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service.</p>
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service.</p>
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service.</p>
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service.</p>
     */
    inline ParallelismConfiguration& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether the application uses the default parallelism for the
     * Kinesis Data Analytics service.</p>
     */
    inline ParallelismConfiguration& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. The Kinesis Data Analytics service can
     * increase this number automatically if
     * <a>ParallelismConfiguration$AutoScalingEnabled</a> is set to
     * <code>true</code>.</p>
     */
    inline int GetParallelism() const{ return m_parallelism; }

    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. The Kinesis Data Analytics service can
     * increase this number automatically if
     * <a>ParallelismConfiguration$AutoScalingEnabled</a> is set to
     * <code>true</code>.</p>
     */
    inline void SetParallelism(int value) { m_parallelismHasBeenSet = true; m_parallelism = value; }

    /**
     * <p>Describes the initial number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform. The Kinesis Data Analytics service can
     * increase this number automatically if
     * <a>ParallelismConfiguration$AutoScalingEnabled</a> is set to
     * <code>true</code>.</p>
     */
    inline ParallelismConfiguration& WithParallelism(int value) { SetParallelism(value); return *this;}


    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline int GetParallelismPerKPU() const{ return m_parallelismPerKPU; }

    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline void SetParallelismPerKPU(int value) { m_parallelismPerKPUHasBeenSet = true; m_parallelismPerKPU = value; }

    /**
     * <p>Describes the number of parallel tasks that a Java-based Kinesis Data
     * Analytics application can perform per Kinesis Processing Unit (KPU) used by the
     * application. For more information about KPUs, see <a
     * href="http://aws.amazon.com/kinesis/data-analytics/pricing/">Amazon Kinesis Data
     * Analytics Pricing</a>.</p>
     */
    inline ParallelismConfiguration& WithParallelismPerKPU(int value) { SetParallelismPerKPU(value); return *this;}


    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline bool GetAutoScalingEnabled() const{ return m_autoScalingEnabled; }

    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline void SetAutoScalingEnabled(bool value) { m_autoScalingEnabledHasBeenSet = true; m_autoScalingEnabled = value; }

    /**
     * <p>Describes whether the Kinesis Data Analytics service can increase the
     * parallelism of the application in response to increased throughput.</p>
     */
    inline ParallelismConfiguration& WithAutoScalingEnabled(bool value) { SetAutoScalingEnabled(value); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    int m_parallelism;
    bool m_parallelismHasBeenSet;

    int m_parallelismPerKPU;
    bool m_parallelismPerKPUHasBeenSet;

    bool m_autoScalingEnabled;
    bool m_autoScalingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
