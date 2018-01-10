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

#include <alibabacloud/vpc/model/DescribeServerRelatedGlobalAccelerationInstancesRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeServerRelatedGlobalAccelerationInstancesRequest::DescribeServerRelatedGlobalAccelerationInstancesRequest() :
	VpcRequest("DescribeServerRelatedGlobalAccelerationInstances")
{}

DescribeServerRelatedGlobalAccelerationInstancesRequest::~DescribeServerRelatedGlobalAccelerationInstancesRequest()
{}

long DescribeServerRelatedGlobalAccelerationInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeServerRelatedGlobalAccelerationInstancesRequest::getServerType()const
{
	return serverType_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setServerType(const std::string& serverType)
{
	serverType_ = serverType;
	setParameter("ServerType", serverType);
}

std::string DescribeServerRelatedGlobalAccelerationInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeServerRelatedGlobalAccelerationInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeServerRelatedGlobalAccelerationInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeServerRelatedGlobalAccelerationInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeServerRelatedGlobalAccelerationInstancesRequest::getServerId()const
{
	return serverId_;
}

void DescribeServerRelatedGlobalAccelerationInstancesRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setParameter("ServerId", serverId);
}
