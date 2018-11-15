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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Contains information about whether the stack's actual configuration differs,
   * or has <i>drifted</i>, from its expected configuration, as defined in the stack
   * template and any values specified as template parameters. A stack is considered
   * to have drifted if one or more of its resources have drifted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackDriftInformationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackDriftInformationSummary
  {
  public:
    StackDriftInformationSummary();
    StackDriftInformationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackDriftInformationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if the stack
     * differs from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline const StackDriftStatus& GetStackDriftStatus() const{ return m_stackDriftStatus; }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if the stack
     * differs from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline void SetStackDriftStatus(const StackDriftStatus& value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = value; }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if the stack
     * differs from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline void SetStackDriftStatus(StackDriftStatus&& value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = std::move(value); }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if the stack
     * differs from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline StackDriftInformationSummary& WithStackDriftStatus(const StackDriftStatus& value) { SetStackDriftStatus(value); return *this;}

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if the stack
     * differs from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline StackDriftInformationSummary& WithStackDriftStatus(StackDriftStatus&& value) { SetStackDriftStatus(std::move(value)); return *this;}


    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckTimestamp() const{ return m_lastCheckTimestamp; }

    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline void SetLastCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = value; }

    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline void SetLastCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = std::move(value); }

    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline StackDriftInformationSummary& WithLastCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckTimestamp(value); return *this;}

    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline StackDriftInformationSummary& WithLastCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckTimestamp(std::move(value)); return *this;}

  private:

    StackDriftStatus m_stackDriftStatus;
    bool m_stackDriftStatusHasBeenSet;

    Aws::Utils::DateTime m_lastCheckTimestamp;
    bool m_lastCheckTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
