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

#include <aws/awstransfer/model/DescribedUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedUser::DescribedUser() : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeysHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

DescribedUser::DescribedUser(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_homeDirectoryHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_sshPublicKeysHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedUser& DescribedUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HomeDirectory"))
  {
    m_homeDirectory = jsonValue.GetString("HomeDirectory");

    m_homeDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshPublicKeys"))
  {
    Array<JsonView> sshPublicKeysJsonList = jsonValue.GetArray("SshPublicKeys");
    for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
    {
      m_sshPublicKeys.push_back(sshPublicKeysJsonList[sshPublicKeysIndex].AsObject());
    }
    m_sshPublicKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedUser::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_homeDirectoryHasBeenSet)
  {
   payload.WithString("HomeDirectory", m_homeDirectory);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_sshPublicKeysHasBeenSet)
  {
   Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
   for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
   {
     sshPublicKeysJsonList[sshPublicKeysIndex].AsObject(m_sshPublicKeys[sshPublicKeysIndex].Jsonize());
   }
   payload.WithArray("SshPublicKeys", std::move(sshPublicKeysJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
