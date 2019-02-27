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

#include <aws/globalaccelerator/model/EndpointDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

EndpointDescription::EndpointDescription() : 
    m_endpointIdHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_healthState(HealthState::NOT_SET),
    m_healthStateHasBeenSet(false),
    m_healthReasonHasBeenSet(false)
{
}

EndpointDescription::EndpointDescription(JsonView jsonValue) : 
    m_endpointIdHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false),
    m_healthState(HealthState::NOT_SET),
    m_healthStateHasBeenSet(false),
    m_healthReasonHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointDescription& EndpointDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInteger("Weight");

    m_weightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthState"))
  {
    m_healthState = HealthStateMapper::GetHealthStateForName(jsonValue.GetString("HealthState"));

    m_healthStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthReason"))
  {
    m_healthReason = jsonValue.GetString("HealthReason");

    m_healthReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointDescription::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("Weight", m_weight);

  }

  if(m_healthStateHasBeenSet)
  {
   payload.WithString("HealthState", HealthStateMapper::GetNameForHealthState(m_healthState));
  }

  if(m_healthReasonHasBeenSet)
  {
   payload.WithString("HealthReason", m_healthReason);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
