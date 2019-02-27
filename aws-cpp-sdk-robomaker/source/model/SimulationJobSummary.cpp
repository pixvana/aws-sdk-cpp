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

#include <aws/robomaker/model/SimulationJobSummary.h>
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

SimulationJobSummary::SimulationJobSummary() : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_simulationApplicationNamesHasBeenSet(false),
    m_robotApplicationNamesHasBeenSet(false)
{
}

SimulationJobSummary::SimulationJobSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SimulationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_simulationApplicationNamesHasBeenSet(false),
    m_robotApplicationNamesHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationJobSummary& SimulationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobStatusMapper::GetSimulationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("simulationApplicationNames"))
  {
    Array<JsonView> simulationApplicationNamesJsonList = jsonValue.GetArray("simulationApplicationNames");
    for(unsigned simulationApplicationNamesIndex = 0; simulationApplicationNamesIndex < simulationApplicationNamesJsonList.GetLength(); ++simulationApplicationNamesIndex)
    {
      m_simulationApplicationNames.push_back(simulationApplicationNamesJsonList[simulationApplicationNamesIndex].AsString());
    }
    m_simulationApplicationNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("robotApplicationNames"))
  {
    Array<JsonView> robotApplicationNamesJsonList = jsonValue.GetArray("robotApplicationNames");
    for(unsigned robotApplicationNamesIndex = 0; robotApplicationNamesIndex < robotApplicationNamesJsonList.GetLength(); ++robotApplicationNamesIndex)
    {
      m_robotApplicationNames.push_back(robotApplicationNamesJsonList[robotApplicationNamesIndex].AsString());
    }
    m_robotApplicationNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SimulationJobStatusMapper::GetNameForSimulationJobStatus(m_status));
  }

  if(m_simulationApplicationNamesHasBeenSet)
  {
   Array<JsonValue> simulationApplicationNamesJsonList(m_simulationApplicationNames.size());
   for(unsigned simulationApplicationNamesIndex = 0; simulationApplicationNamesIndex < simulationApplicationNamesJsonList.GetLength(); ++simulationApplicationNamesIndex)
   {
     simulationApplicationNamesJsonList[simulationApplicationNamesIndex].AsString(m_simulationApplicationNames[simulationApplicationNamesIndex]);
   }
   payload.WithArray("simulationApplicationNames", std::move(simulationApplicationNamesJsonList));

  }

  if(m_robotApplicationNamesHasBeenSet)
  {
   Array<JsonValue> robotApplicationNamesJsonList(m_robotApplicationNames.size());
   for(unsigned robotApplicationNamesIndex = 0; robotApplicationNamesIndex < robotApplicationNamesJsonList.GetLength(); ++robotApplicationNamesIndex)
   {
     robotApplicationNamesJsonList[robotApplicationNamesIndex].AsString(m_robotApplicationNames[robotApplicationNamesIndex]);
   }
   payload.WithArray("robotApplicationNames", std::move(robotApplicationNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
