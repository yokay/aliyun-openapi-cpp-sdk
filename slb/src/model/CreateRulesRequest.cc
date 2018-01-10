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

#include <alibabacloud/slb/model/CreateRulesRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateRulesRequest::CreateRulesRequest() :
	SlbRequest("CreateRules")
{}

CreateRulesRequest::~CreateRulesRequest()
{}

std::string CreateRulesRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateRulesRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long CreateRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateRulesRequest::getListenerPort()const
{
	return listenerPort_;
}

void CreateRulesRequest::setListenerPort(int listenerPort)
{
	listenerPort_ = listenerPort;
	setParameter("ListenerPort", std::to_string(listenerPort));
}

std::string CreateRulesRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateRulesRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateRulesRequest::getRegionId()const
{
	return regionId_;
}

void CreateRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateRulesRequest::getRuleList()const
{
	return ruleList_;
}

void CreateRulesRequest::setRuleList(const std::string& ruleList)
{
	ruleList_ = ruleList;
	setParameter("RuleList", ruleList);
}

std::string CreateRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateRulesRequest::getTags()const
{
	return tags_;
}

void CreateRulesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

