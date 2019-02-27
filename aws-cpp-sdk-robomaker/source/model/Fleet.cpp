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

#include <aws/robomaker/model/Fleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Fleet::Fleet() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastDeploymentStatus(DeploymentStatus::NOT_SET),
    m_lastDeploymentStatusHasBeenSet(false),
    m_lastDeploymentJobHasBeenSet(false),
    m_lastDeploymentTimeHasBeenSet(false)
{
}

Fleet::Fleet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastDeploymentStatus(DeploymentStatus::NOT_SET),
    m_lastDeploymentStatusHasBeenSet(false),
    m_lastDeploymentJobHasBeenSet(false),
    m_lastDeploymentTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Fleet& Fleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentStatus"))
  {
    m_lastDeploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("lastDeploymentStatus"));

    m_lastDeploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentJob"))
  {
    m_lastDeploymentJob = jsonValue.GetString("lastDeploymentJob");

    m_lastDeploymentJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentTime"))
  {
    m_lastDeploymentTime = jsonValue.GetDouble("lastDeploymentTime");

    m_lastDeploymentTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Fleet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastDeploymentStatusHasBeenSet)
  {
   payload.WithString("lastDeploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_lastDeploymentStatus));
  }

  if(m_lastDeploymentJobHasBeenSet)
  {
   payload.WithString("lastDeploymentJob", m_lastDeploymentJob);

  }

  if(m_lastDeploymentTimeHasBeenSet)
  {
   payload.WithDouble("lastDeploymentTime", m_lastDeploymentTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
