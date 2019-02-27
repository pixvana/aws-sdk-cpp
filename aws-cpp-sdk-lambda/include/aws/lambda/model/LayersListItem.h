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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/LayerVersionsListItem.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">AWS
   * Lambda layer</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayersListItem">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API LayersListItem
  {
  public:
    LayersListItem();
    LayersListItem(Aws::Utils::Json::JsonView jsonValue);
    LayersListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const{ return m_layerName; }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(const Aws::String& value) { m_layerNameHasBeenSet = true; m_layerName = value; }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(Aws::String&& value) { m_layerNameHasBeenSet = true; m_layerName = std::move(value); }

    /**
     * <p>The name of the layer.</p>
     */
    inline void SetLayerName(const char* value) { m_layerNameHasBeenSet = true; m_layerName.assign(value); }

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(const Aws::String& value) { SetLayerName(value); return *this;}

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(Aws::String&& value) { SetLayerName(std::move(value)); return *this;}

    /**
     * <p>The name of the layer.</p>
     */
    inline LayersListItem& WithLayerName(const char* value) { SetLayerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline const Aws::String& GetLayerArn() const{ return m_layerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(const Aws::String& value) { m_layerArnHasBeenSet = true; m_layerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(Aws::String&& value) { m_layerArnHasBeenSet = true; m_layerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline void SetLayerArn(const char* value) { m_layerArnHasBeenSet = true; m_layerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(const Aws::String& value) { SetLayerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(Aws::String&& value) { SetLayerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the function layer.</p>
     */
    inline LayersListItem& WithLayerArn(const char* value) { SetLayerArn(value); return *this;}


    /**
     * <p>The newest version of the layer.</p>
     */
    inline const LayerVersionsListItem& GetLatestMatchingVersion() const{ return m_latestMatchingVersion; }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline void SetLatestMatchingVersion(const LayerVersionsListItem& value) { m_latestMatchingVersionHasBeenSet = true; m_latestMatchingVersion = value; }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline void SetLatestMatchingVersion(LayerVersionsListItem&& value) { m_latestMatchingVersionHasBeenSet = true; m_latestMatchingVersion = std::move(value); }

    /**
     * <p>The newest version of the layer.</p>
     */
    inline LayersListItem& WithLatestMatchingVersion(const LayerVersionsListItem& value) { SetLatestMatchingVersion(value); return *this;}

    /**
     * <p>The newest version of the layer.</p>
     */
    inline LayersListItem& WithLatestMatchingVersion(LayerVersionsListItem&& value) { SetLatestMatchingVersion(std::move(value)); return *this;}

  private:

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet;

    Aws::String m_layerArn;
    bool m_layerArnHasBeenSet;

    LayerVersionsListItem m_latestMatchingVersion;
    bool m_latestMatchingVersionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
