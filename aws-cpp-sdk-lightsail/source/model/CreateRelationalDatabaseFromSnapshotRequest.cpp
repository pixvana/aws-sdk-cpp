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

#include <aws/lightsail/model/CreateRelationalDatabaseFromSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRelationalDatabaseFromSnapshotRequest::CreateRelationalDatabaseFromSnapshotRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_relationalDatabaseSnapshotNameHasBeenSet(false),
    m_relationalDatabaseBundleIdHasBeenSet(false),
    m_sourceRelationalDatabaseNameHasBeenSet(false),
    m_restoreTimeHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false)
{
}

Aws::String CreateRelationalDatabaseFromSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_relationalDatabaseSnapshotNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseSnapshotName", m_relationalDatabaseSnapshotName);

  }

  if(m_relationalDatabaseBundleIdHasBeenSet)
  {
   payload.WithString("relationalDatabaseBundleId", m_relationalDatabaseBundleId);

  }

  if(m_sourceRelationalDatabaseNameHasBeenSet)
  {
   payload.WithString("sourceRelationalDatabaseName", m_sourceRelationalDatabaseName);

  }

  if(m_restoreTimeHasBeenSet)
  {
   payload.WithDouble("restoreTime", m_restoreTime.SecondsWithMSPrecision());
  }

  if(m_useLatestRestorableTimeHasBeenSet)
  {
   payload.WithBool("useLatestRestorableTime", m_useLatestRestorableTime);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRelationalDatabaseFromSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateRelationalDatabaseFromSnapshot"));
  return headers;

}




