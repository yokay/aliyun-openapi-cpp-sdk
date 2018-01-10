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

#ifndef ALIBABACLOUD_SLB_MODEL_SETVSERVERGROUPATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_SETVSERVERGROUPATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT SetVServerGroupAttributeResult : public ServiceResult
			{
			public:
				struct BackendServer
				{
					std::string serverId;
					int port;
					int weight;
				};


				SetVServerGroupAttributeResult();
				explicit SetVServerGroupAttributeResult(const std::string &payload);
				~SetVServerGroupAttributeResult();
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				std::string getVServerGroupName()const;
				void setVServerGroupName(const std::string& vServerGroupName);
				std::vector<BackendServer> getBackendServers()const;
				void setBackendServers(const std::vector<BackendServer>& backendServers);

			protected:
				void parse(const std::string &payload);
			private:
				std::string vServerGroupId_;
				std::string vServerGroupName_;
				std::vector<BackendServer> backendServers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_SETVSERVERGROUPATTRIBUTERESULT_H_