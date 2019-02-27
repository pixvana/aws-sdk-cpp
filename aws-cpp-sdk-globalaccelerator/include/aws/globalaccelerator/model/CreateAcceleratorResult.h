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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Accelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AWS_GLOBALACCELERATOR_API CreateAcceleratorResult
  {
  public:
    CreateAcceleratorResult();
    CreateAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The accelerator that is created by specifying a listener and the supported IP
     * address types.</p>
     */
    inline const Accelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>The accelerator that is created by specifying a listener and the supported IP
     * address types.</p>
     */
    inline void SetAccelerator(const Accelerator& value) { m_accelerator = value; }

    /**
     * <p>The accelerator that is created by specifying a listener and the supported IP
     * address types.</p>
     */
    inline void SetAccelerator(Accelerator&& value) { m_accelerator = std::move(value); }

    /**
     * <p>The accelerator that is created by specifying a listener and the supported IP
     * address types.</p>
     */
    inline CreateAcceleratorResult& WithAccelerator(const Accelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>The accelerator that is created by specifying a listener and the supported IP
     * address types.</p>
     */
    inline CreateAcceleratorResult& WithAccelerator(Accelerator&& value) { SetAccelerator(std::move(value)); return *this;}

  private:

    Accelerator m_accelerator;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
