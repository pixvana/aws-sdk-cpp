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

#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace CapacityReservationInstancePlatformMapper
      {

        static const int Linux_UNIX_HASH = HashingUtils::HashString("Linux/UNIX");
        static const int Red_Hat_Enterprise_Linux_HASH = HashingUtils::HashString("Red Hat Enterprise Linux");
        static const int SUSE_Linux_HASH = HashingUtils::HashString("SUSE Linux");
        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int Windows_with_SQL_Server_HASH = HashingUtils::HashString("Windows with SQL Server");
        static const int Windows_with_SQL_Server_Enterprise_HASH = HashingUtils::HashString("Windows with SQL Server Enterprise");
        static const int Windows_with_SQL_Server_Standard_HASH = HashingUtils::HashString("Windows with SQL Server Standard");
        static const int Windows_with_SQL_Server_Web_HASH = HashingUtils::HashString("Windows with SQL Server Web");


        CapacityReservationInstancePlatform GetCapacityReservationInstancePlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Linux_UNIX_HASH)
          {
            return CapacityReservationInstancePlatform::Linux_UNIX;
          }
          else if (hashCode == Red_Hat_Enterprise_Linux_HASH)
          {
            return CapacityReservationInstancePlatform::Red_Hat_Enterprise_Linux;
          }
          else if (hashCode == SUSE_Linux_HASH)
          {
            return CapacityReservationInstancePlatform::SUSE_Linux;
          }
          else if (hashCode == Windows_HASH)
          {
            return CapacityReservationInstancePlatform::Windows;
          }
          else if (hashCode == Windows_with_SQL_Server_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server;
          }
          else if (hashCode == Windows_with_SQL_Server_Enterprise_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Enterprise;
          }
          else if (hashCode == Windows_with_SQL_Server_Standard_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Standard;
          }
          else if (hashCode == Windows_with_SQL_Server_Web_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Web;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationInstancePlatform>(hashCode);
          }

          return CapacityReservationInstancePlatform::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationInstancePlatform(CapacityReservationInstancePlatform enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationInstancePlatform::Linux_UNIX:
            return "Linux/UNIX";
          case CapacityReservationInstancePlatform::Red_Hat_Enterprise_Linux:
            return "Red Hat Enterprise Linux";
          case CapacityReservationInstancePlatform::SUSE_Linux:
            return "SUSE Linux";
          case CapacityReservationInstancePlatform::Windows:
            return "Windows";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server:
            return "Windows with SQL Server";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Enterprise:
            return "Windows with SQL Server Enterprise";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Standard:
            return "Windows with SQL Server Standard";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Web:
            return "Windows with SQL Server Web";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CapacityReservationInstancePlatformMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
