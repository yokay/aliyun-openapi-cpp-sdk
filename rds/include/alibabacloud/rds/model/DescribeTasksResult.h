/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeTasksResult : public ServiceResult
			{
			public:
				struct TaskProgressInfo
				{
					std::string expectedFinishTime;
					std::string status;
					std::string progress;
					std::string taskId;
					std::string finishTime;
					std::string taskAction;
					std::string progressInfo;
					std::string dBName;
					std::string beginTime;
					std::string taskErrorCode;
					std::string taskErrorMessage;
				};


				DescribeTasksResult();
				explicit DescribeTasksResult(const std::string &payload);
				~DescribeTasksResult();
				int getTotalRecordCount()const;
				void setTotalRecordCount(int totalRecordCount);
				int getPageRecordCount()const;
				void setPageRecordCount(int pageRecordCount);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<TaskProgressInfo> getItems()const;
				void setItems(const std::vector<TaskProgressInfo>& items);

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<TaskProgressInfo> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBETASKSRESULT_H_