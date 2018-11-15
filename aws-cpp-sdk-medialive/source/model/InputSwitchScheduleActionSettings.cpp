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

#include <aws/medialive/model/InputSwitchScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputSwitchScheduleActionSettings::InputSwitchScheduleActionSettings() : 
    m_inputAttachmentNameReferenceHasBeenSet(false)
{
}

InputSwitchScheduleActionSettings::InputSwitchScheduleActionSettings(JsonView jsonValue) : 
    m_inputAttachmentNameReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

InputSwitchScheduleActionSettings& InputSwitchScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputAttachmentNameReference"))
  {
    m_inputAttachmentNameReference = jsonValue.GetString("inputAttachmentNameReference");

    m_inputAttachmentNameReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSwitchScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputAttachmentNameReferenceHasBeenSet)
  {
   payload.WithString("inputAttachmentNameReference", m_inputAttachmentNameReference);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
