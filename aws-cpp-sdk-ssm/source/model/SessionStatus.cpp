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

#include <aws/ssm/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static const int Connected_HASH = HashingUtils::HashString("Connected");
        static const int Connecting_HASH = HashingUtils::HashString("Connecting");
        static const int Disconnected_HASH = HashingUtils::HashString("Disconnected");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");
        static const int Terminating_HASH = HashingUtils::HashString("Terminating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Connected_HASH)
          {
            return SessionStatus::Connected;
          }
          else if (hashCode == Connecting_HASH)
          {
            return SessionStatus::Connecting;
          }
          else if (hashCode == Disconnected_HASH)
          {
            return SessionStatus::Disconnected;
          }
          else if (hashCode == Terminated_HASH)
          {
            return SessionStatus::Terminated;
          }
          else if (hashCode == Terminating_HASH)
          {
            return SessionStatus::Terminating;
          }
          else if (hashCode == Failed_HASH)
          {
            return SessionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionStatus>(hashCode);
          }

          return SessionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionStatus(SessionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionStatus::Connected:
            return "Connected";
          case SessionStatus::Connecting:
            return "Connecting";
          case SessionStatus::Disconnected:
            return "Disconnected";
          case SessionStatus::Terminated:
            return "Terminated";
          case SessionStatus::Terminating:
            return "Terminating";
          case SessionStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
