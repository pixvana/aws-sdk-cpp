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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class AWS_KAFKA_API ListNodesRequest : public KafkaRequest
  {
  public:
    ListNodesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNodes"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline ListNodesRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline ListNodesRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
     */
    inline ListNodesRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The maximum number of clusters to return in the response. If there are more
     * clusters, the response includes a NextToken parameter.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of clusters to return in the response. If there are more
     * clusters, the response includes a NextToken parameter.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of clusters to return in the response. If there are more
     * clusters, the response includes a NextToken parameter.</p>
     */
    inline ListNodesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline ListNodesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline ListNodesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The paginated results marker. When the result of a ListClusters operation is
     * truncated, the call returns NextToken in the response. 
 To get another batch of
     * clusters, provide this token in your next request.</p>
     */
    inline ListNodesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
