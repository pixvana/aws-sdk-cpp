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

#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifySnapshotScheduleRequest::ModifySnapshotScheduleRequest() : 
    m_scheduleIdentifierHasBeenSet(false),
    m_scheduleDefinitionsHasBeenSet(false)
{
}

Aws::String ModifySnapshotScheduleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotSchedule&";
  if(m_scheduleIdentifierHasBeenSet)
  {
    ss << "ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_scheduleDefinitionsHasBeenSet)
  {
    unsigned scheduleDefinitionsCount = 1;
    for(auto& item : m_scheduleDefinitions)
    {
      ss << "ScheduleDefinitions.member." << scheduleDefinitionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      scheduleDefinitionsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifySnapshotScheduleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
