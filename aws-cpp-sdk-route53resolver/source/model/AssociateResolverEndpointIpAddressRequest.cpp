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

#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResolverEndpointIpAddressRequest::AssociateResolverEndpointIpAddressRequest() : 
    m_resolverEndpointIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

Aws::String AssociateResolverEndpointIpAddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resolverEndpointIdHasBeenSet)
  {
   payload.WithString("ResolverEndpointId", m_resolverEndpointId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithObject("IpAddress", m_ipAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateResolverEndpointIpAddressRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.AssociateResolverEndpointIpAddress"));
  return headers;

}




