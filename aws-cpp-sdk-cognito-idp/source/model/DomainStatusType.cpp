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

#include <aws/cognito-idp/model/DomainStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace DomainStatusTypeMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DomainStatusType GetDomainStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DomainStatusType::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DomainStatusType::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainStatusType::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DomainStatusType::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DomainStatusType::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatusType>(hashCode);
          }

          return DomainStatusType::NOT_SET;
        }

        Aws::String GetNameForDomainStatusType(DomainStatusType enumValue)
        {
          switch(enumValue)
          {
          case DomainStatusType::CREATING:
            return "CREATING";
          case DomainStatusType::DELETING:
            return "DELETING";
          case DomainStatusType::UPDATING:
            return "UPDATING";
          case DomainStatusType::ACTIVE:
            return "ACTIVE";
          case DomainStatusType::FAILED:
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

      } // namespace DomainStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
