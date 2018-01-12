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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTTIMELINEPHOTOSREQUEST_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTTIMELINEPHOTOSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cloudphoto/CloudPhotoRequest.h>

namespace AlibabaCloud
{
	namespace CloudPhoto
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT ListTimeLinePhotosRequest : public CloudPhotoRequest
			{

			public:
				ListTimeLinePhotosRequest();
				~ListTimeLinePhotosRequest();

				int getSize()const;
				void setSize(int size);
				std::string getLibraryId()const;
				void setLibraryId(const std::string& libraryId);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);
				int getPage()const;
				void setPage(int page);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getFilterBy()const;
				void setFilterBy(const std::string& filterBy);
				std::string getDirection()const;
				void setDirection(const std::string& direction);
				std::string getOrder()const;
				void setOrder(const std::string& order);

            private:
				int size_;
				std::string libraryId_;
				long endTime_;
				std::string storeName_;
				int page_;
				long startTime_;
				std::string filterBy_;
				std::string direction_;
				std::string order_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTTIMELINEPHOTOSREQUEST_H_