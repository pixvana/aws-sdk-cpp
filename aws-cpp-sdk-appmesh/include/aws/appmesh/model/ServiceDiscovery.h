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

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/DnsServiceDiscovery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the service discovery information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ServiceDiscovery
  {
  public:
    ServiceDiscovery();
    ServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    ServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the DNS service name for the virtual node.</p>
     */
    inline const DnsServiceDiscovery& GetDns() const{ return m_dns; }

    /**
     * <p>Specifies the DNS service name for the virtual node.</p>
     */
    inline void SetDns(const DnsServiceDiscovery& value) { m_dnsHasBeenSet = true; m_dns = value; }

    /**
     * <p>Specifies the DNS service name for the virtual node.</p>
     */
    inline void SetDns(DnsServiceDiscovery&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }

    /**
     * <p>Specifies the DNS service name for the virtual node.</p>
     */
    inline ServiceDiscovery& WithDns(const DnsServiceDiscovery& value) { SetDns(value); return *this;}

    /**
     * <p>Specifies the DNS service name for the virtual node.</p>
     */
    inline ServiceDiscovery& WithDns(DnsServiceDiscovery&& value) { SetDns(std::move(value)); return *this;}

  private:

    DnsServiceDiscovery m_dns;
    bool m_dnsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
