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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ModelStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information for filtering a list of entity recognizers. You can only
   * specify one filtering parameter in a request. For more information, see the
   * operation./&gt;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerFilter">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API EntityRecognizerFilter
  {
  public:
    EntityRecognizerFilter();
    EntityRecognizerFilter(Aws::Utils::Json::JsonView jsonValue);
    EntityRecognizerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline EntityRecognizerFilter& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline EntityRecognizerFilter& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const{ return m_submitTimeBefore; }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeBefore(const Aws::Utils::DateTime& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = value; }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeBefore(Aws::Utils::DateTime&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::move(value); }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline EntityRecognizerFilter& WithSubmitTimeBefore(const Aws::Utils::DateTime& value) { SetSubmitTimeBefore(value); return *this;}

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline EntityRecognizerFilter& WithSubmitTimeBefore(Aws::Utils::DateTime&& value) { SetSubmitTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const{ return m_submitTimeAfter; }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmitTimeAfter(const Aws::Utils::DateTime& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = value; }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmitTimeAfter(Aws::Utils::DateTime&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::move(value); }

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline EntityRecognizerFilter& WithSubmitTimeAfter(const Aws::Utils::DateTime& value) { SetSubmitTimeAfter(value); return *this;}

    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline EntityRecognizerFilter& WithSubmitTimeAfter(Aws::Utils::DateTime&& value) { SetSubmitTimeAfter(std::move(value)); return *this;}

  private:

    ModelStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_submitTimeBefore;
    bool m_submitTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_submitTimeAfter;
    bool m_submitTimeAfterHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
