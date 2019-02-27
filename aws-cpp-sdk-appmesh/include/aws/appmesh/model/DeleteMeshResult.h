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
#include <aws/appmesh/model/MeshData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{
  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteMeshOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DeleteMeshResult
  {
  public:
    DeleteMeshResult();
    DeleteMeshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteMeshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline const MeshData& GetMesh() const{ return m_mesh; }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline void SetMesh(const MeshData& value) { m_mesh = value; }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline void SetMesh(MeshData&& value) { m_mesh = std::move(value); }

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline DeleteMeshResult& WithMesh(const MeshData& value) { SetMesh(value); return *this;}

    /**
     * <p>The service mesh that was deleted.</p>
     */
    inline DeleteMeshResult& WithMesh(MeshData&& value) { SetMesh(std::move(value)); return *this;}

  private:

    MeshData m_mesh;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
