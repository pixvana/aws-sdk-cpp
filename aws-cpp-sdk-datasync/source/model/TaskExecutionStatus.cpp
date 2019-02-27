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

#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace TaskExecutionStatusMapper
      {

        static const int LAUNCHING_HASH = HashingUtils::HashString("LAUNCHING");
        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int TRANSFERRING_HASH = HashingUtils::HashString("TRANSFERRING");
        static const int VERIFYING_HASH = HashingUtils::HashString("VERIFYING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        TaskExecutionStatus GetTaskExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAUNCHING_HASH)
          {
            return TaskExecutionStatus::LAUNCHING;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return TaskExecutionStatus::PREPARING;
          }
          else if (hashCode == TRANSFERRING_HASH)
          {
            return TaskExecutionStatus::TRANSFERRING;
          }
          else if (hashCode == VERIFYING_HASH)
          {
            return TaskExecutionStatus::VERIFYING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return TaskExecutionStatus::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TaskExecutionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskExecutionStatus>(hashCode);
          }

          return TaskExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForTaskExecutionStatus(TaskExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskExecutionStatus::LAUNCHING:
            return "LAUNCHING";
          case TaskExecutionStatus::PREPARING:
            return "PREPARING";
          case TaskExecutionStatus::TRANSFERRING:
            return "TRANSFERRING";
          case TaskExecutionStatus::VERIFYING:
            return "VERIFYING";
          case TaskExecutionStatus::SUCCESS:
            return "SUCCESS";
          case TaskExecutionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskExecutionStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
