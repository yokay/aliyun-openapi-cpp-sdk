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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATERULESREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATERULESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/slb/SlbRequest.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT CreateRulesRequest : public SlbRequest
			{

			public:
				CreateRulesRequest();
				~CreateRulesRequest();

				std::string getAccess_key_id()const;
				void setAccess_key_id(const std::string& access_key_id);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRuleList()const;
				void setRuleList(const std::string& ruleList);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTags()const;
				void setTags(const std::string& tags);

            private:
				std::string access_key_id_;
				long resourceOwnerId_;
				int listenerPort_;
				std::string loadBalancerId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ruleList_;
				std::string ownerAccount_;
				long ownerId_;
				std::string accessKeyId_;
				std::string tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_CREATERULESREQUEST_H_