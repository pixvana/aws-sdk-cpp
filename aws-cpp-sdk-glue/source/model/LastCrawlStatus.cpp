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

#include <aws/glue/model/LastCrawlStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace LastCrawlStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LastCrawlStatus GetLastCrawlStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return LastCrawlStatus::SUCCEEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return LastCrawlStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LastCrawlStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastCrawlStatus>(hashCode);
          }

          return LastCrawlStatus::NOT_SET;
        }

        Aws::String GetNameForLastCrawlStatus(LastCrawlStatus enumValue)
        {
          switch(enumValue)
          {
          case LastCrawlStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LastCrawlStatus::CANCELLED:
            return "CANCELLED";
          case LastCrawlStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastCrawlStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
