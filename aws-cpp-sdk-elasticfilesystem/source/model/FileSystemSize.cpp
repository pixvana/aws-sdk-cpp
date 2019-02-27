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

#include <aws/elasticfilesystem/model/FileSystemSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

FileSystemSize::FileSystemSize() : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_valueInIA(0),
    m_valueInIAHasBeenSet(false),
    m_valueInStandard(0),
    m_valueInStandardHasBeenSet(false)
{
}

FileSystemSize::FileSystemSize(JsonView jsonValue) : 
    m_value(0),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_valueInIA(0),
    m_valueInIAHasBeenSet(false),
    m_valueInStandard(0),
    m_valueInStandardHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemSize& FileSystemSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInt64("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueInIA"))
  {
    m_valueInIA = jsonValue.GetInt64("ValueInIA");

    m_valueInIAHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueInStandard"))
  {
    m_valueInStandard = jsonValue.GetInt64("ValueInStandard");

    m_valueInStandardHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemSize::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInt64("Value", m_value);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_valueInIAHasBeenSet)
  {
   payload.WithInt64("ValueInIA", m_valueInIA);

  }

  if(m_valueInStandardHasBeenSet)
  {
   payload.WithInt64("ValueInStandard", m_valueInStandard);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
