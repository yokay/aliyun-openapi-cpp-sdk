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

#include <alibabacloud/slb/model/ModifyVServerGroupBackendServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

ModifyVServerGroupBackendServersResult::ModifyVServerGroupBackendServersResult() :
	ServiceResult()
{}

ModifyVServerGroupBackendServersResult::ModifyVServerGroupBackendServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyVServerGroupBackendServersResult::~ModifyVServerGroupBackendServersResult()
{}

void ModifyVServerGroupBackendServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServerObject;
		backendServerObject.serverId = value["ServerId"].asString();
		backendServerObject.port = std::stoi(value["Port"].asString());
		backendServerObject.weight = std::stoi(value["Weight"].asString());
		backendServers_.push_back(backendServerObject);
	}
	vServerGroupId_ = value["VServerGroupId"].asString();

}

std::string ModifyVServerGroupBackendServersResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

void ModifyVServerGroupBackendServersResult::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
}

