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

#include <alibabacloud/ehpc/model/SetJobUserRequest.h>

using AlibabaCloud::EHPC::Model::SetJobUserRequest;

SetJobUserRequest::SetJobUserRequest() :
	RpcServiceRequest("ehpc", "2017-07-14", "SetJobUser")
{}

SetJobUserRequest::~SetJobUserRequest()
{}

std::string SetJobUserRequest::getRunasUserPassword()const
{
	return runasUserPassword_;
}

void SetJobUserRequest::setRunasUserPassword(const std::string& runasUserPassword)
{
	runasUserPassword_ = runasUserPassword;
	setParameter("RunasUserPassword", runasUserPassword);
}

std::string SetJobUserRequest::getRunasUser()const
{
	return runasUser_;
}

void SetJobUserRequest::setRunasUser(const std::string& runasUser)
{
	runasUser_ = runasUser;
	setParameter("RunasUser", runasUser);
}

std::string SetJobUserRequest::getClusterId()const
{
	return clusterId_;
}

void SetJobUserRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string SetJobUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetJobUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}
