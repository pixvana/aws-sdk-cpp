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

#include <aws/ec2/model/LaunchTemplateAndOverridesResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

LaunchTemplateAndOverridesResponse::LaunchTemplateAndOverridesResponse() : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

LaunchTemplateAndOverridesResponse::LaunchTemplateAndOverridesResponse(const XmlNode& xmlNode) : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateAndOverridesResponse& LaunchTemplateAndOverridesResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateSpecificationNode = resultNode.FirstChild("launchTemplateSpecification");
    if(!launchTemplateSpecificationNode.IsNull())
    {
      m_launchTemplateSpecification = launchTemplateSpecificationNode;
      m_launchTemplateSpecificationHasBeenSet = true;
    }
    XmlNode overridesNode = resultNode.FirstChild("overrides");
    if(!overridesNode.IsNull())
    {
      m_overrides = overridesNode;
      m_overridesHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateAndOverridesResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::StringStream launchTemplateSpecificationLocationAndMemberSs;
      launchTemplateSpecificationLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_overridesHasBeenSet)
  {
      Aws::StringStream overridesLocationAndMemberSs;
      overridesLocationAndMemberSs << location << index << locationValue << ".Overrides";
      m_overrides.OutputToStream(oStream, overridesLocationAndMemberSs.str().c_str());
  }

}

void LaunchTemplateAndOverridesResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::String launchTemplateSpecificationLocationAndMember(location);
      launchTemplateSpecificationLocationAndMember += ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMember.c_str());
  }
  if(m_overridesHasBeenSet)
  {
      Aws::String overridesLocationAndMember(location);
      overridesLocationAndMember += ".Overrides";
      m_overrides.OutputToStream(oStream, overridesLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
