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

#include <aws/core/client/CoreErrors.h>
#include <aws/docdb/DocDB_EXPORTS.h>

namespace Aws
{
namespace DocDB
{
enum class DocDBErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  AUTHORIZATION_NOT_FOUND_FAULT= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CERTIFICATE_NOT_FOUND_FAULT,
  D_B_CLUSTER_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_NOT_FOUND_FAULT,
  D_B_CLUSTER_PARAMETER_GROUP_NOT_FOUND_FAULT,
  D_B_CLUSTER_QUOTA_EXCEEDED_FAULT,
  D_B_CLUSTER_SNAPSHOT_ALREADY_EXISTS_FAULT,
  D_B_CLUSTER_SNAPSHOT_NOT_FOUND_FAULT,
  D_B_INSTANCE_ALREADY_EXISTS_FAULT,
  D_B_INSTANCE_NOT_FOUND_FAULT,
  D_B_PARAMETER_GROUP_ALREADY_EXISTS_FAULT,
  D_B_PARAMETER_GROUP_NOT_FOUND_FAULT,
  D_B_PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT,
  D_B_SECURITY_GROUP_NOT_FOUND_FAULT,
  D_B_SNAPSHOT_ALREADY_EXISTS_FAULT,
  D_B_SNAPSHOT_NOT_FOUND_FAULT,
  D_B_SUBNET_GROUP_ALREADY_EXISTS_FAULT,
  D_B_SUBNET_GROUP_DOES_NOT_COVER_ENOUGH_A_ZS,
  D_B_SUBNET_GROUP_NOT_FOUND_FAULT,
  D_B_SUBNET_GROUP_QUOTA_EXCEEDED_FAULT,
  D_B_SUBNET_QUOTA_EXCEEDED_FAULT,
  D_B_UPGRADE_DEPENDENCY_FAILURE_FAULT,
  INSTANCE_QUOTA_EXCEEDED_FAULT,
  INSUFFICIENT_D_B_CLUSTER_CAPACITY_FAULT,
  INSUFFICIENT_D_B_INSTANCE_CAPACITY_FAULT,
  INSUFFICIENT_STORAGE_CLUSTER_CAPACITY_FAULT,
  INVALID_D_B_CLUSTER_SNAPSHOT_STATE_FAULT,
  INVALID_D_B_CLUSTER_STATE_FAULT,
  INVALID_D_B_INSTANCE_STATE_FAULT,
  INVALID_D_B_PARAMETER_GROUP_STATE_FAULT,
  INVALID_D_B_SECURITY_GROUP_STATE_FAULT,
  INVALID_D_B_SNAPSHOT_STATE_FAULT,
  INVALID_D_B_SUBNET_GROUP_STATE_FAULT,
  INVALID_D_B_SUBNET_STATE_FAULT,
  INVALID_RESTORE_FAULT,
  INVALID_SUBNET,
  INVALID_V_P_C_NETWORK_STATE_FAULT,
  K_M_S_KEY_NOT_ACCESSIBLE_FAULT,
  RESOURCE_NOT_FOUND_FAULT,
  SHARED_SNAPSHOT_QUOTA_EXCEEDED_FAULT,
  SNAPSHOT_QUOTA_EXCEEDED_FAULT,
  STORAGE_QUOTA_EXCEEDED_FAULT,
  STORAGE_TYPE_NOT_SUPPORTED_FAULT,
  SUBNET_ALREADY_IN_USE
};
namespace DocDBErrorMapper
{
  AWS_DOCDB_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DocDB
} // namespace Aws
