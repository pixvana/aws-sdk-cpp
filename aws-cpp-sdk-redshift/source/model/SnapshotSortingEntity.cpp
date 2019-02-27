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

#include <aws/redshift/model/SnapshotSortingEntity.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

SnapshotSortingEntity::SnapshotSortingEntity() : 
    m_attribute(SnapshotAttributeToSortBy::NOT_SET),
    m_attributeHasBeenSet(false),
    m_sortOrder(SortByOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

SnapshotSortingEntity::SnapshotSortingEntity(const XmlNode& xmlNode) : 
    m_attribute(SnapshotAttributeToSortBy::NOT_SET),
    m_attributeHasBeenSet(false),
    m_sortOrder(SortByOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotSortingEntity& SnapshotSortingEntity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    if(!attributeNode.IsNull())
    {
      m_attribute = SnapshotAttributeToSortByMapper::GetSnapshotAttributeToSortByForName(StringUtils::Trim(attributeNode.GetText().c_str()).c_str());
      m_attributeHasBeenSet = true;
    }
    XmlNode sortOrderNode = resultNode.FirstChild("SortOrder");
    if(!sortOrderNode.IsNull())
    {
      m_sortOrder = SortByOrderMapper::GetSortByOrderForName(StringUtils::Trim(sortOrderNode.GetText().c_str()).c_str());
      m_sortOrderHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotSortingEntity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Attribute=" << SnapshotAttributeToSortByMapper::GetNameForSnapshotAttributeToSortBy(m_attribute) << "&";
  }

  if(m_sortOrderHasBeenSet)
  {
      oStream << location << index << locationValue << ".SortOrder=" << SortByOrderMapper::GetNameForSortByOrder(m_sortOrder) << "&";
  }

}

void SnapshotSortingEntity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << ".Attribute=" << SnapshotAttributeToSortByMapper::GetNameForSnapshotAttributeToSortBy(m_attribute) << "&";
  }
  if(m_sortOrderHasBeenSet)
  {
      oStream << location << ".SortOrder=" << SortByOrderMapper::GetNameForSortByOrder(m_sortOrder) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
