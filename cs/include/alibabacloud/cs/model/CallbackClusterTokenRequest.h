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

#ifndef ALIBABACLOUD_CS_MODEL_CALLBACKCLUSTERTOKENREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_CALLBACKCLUSTERTOKENREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT CallbackClusterTokenRequest : public RoaServiceRequest
			{

			public:
				CallbackClusterTokenRequest();
				~CallbackClusterTokenRequest();

				std::string getReqOnce()const;
				void setReqOnce(const std::string& reqOnce);
				std::string getToken()const;
				void setToken(const std::string& token);

            private:
				std::string reqOnce_;
				std::string token_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_CALLBACKCLUSTERTOKENREQUEST_H_