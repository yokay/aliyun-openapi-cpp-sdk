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

#ifndef ALIBABACLOUD_CORE_SERVICEREQUEST_H_
#define ALIBABACLOUD_CORE_SERVICEREQUEST_H_

#include <map>
#include "CoreExport.h"
#include "Url.h"

namespace AlibabaCloud
{
	class ALIBABACLOUD_CORE_EXPORT ServiceRequest
	{
	public:
		typedef std::string ParameterNameType;
		typedef std::string ParameterValueType;
		typedef std::map<ParameterNameType, ParameterValueType> ParameterCollection;

		virtual ~ServiceRequest();

		const char* content()const;
		size_t contentSize()const;
		bool hasContent()const;
		ParameterCollection parameters()const;
		std::string product()const;
		std::string resourcePath()const;
		std::string version()const;
	protected:
		ServiceRequest(const std::string &product, const std::string &version);
		ServiceRequest(const ServiceRequest &other);
		ServiceRequest(ServiceRequest &&other);
		ServiceRequest& operator=(const ServiceRequest &other);
		ServiceRequest& operator=(ServiceRequest &&other);

		void addParameter(const ParameterNameType &name, const ParameterValueType &value);
		ParameterValueType parameter(const ParameterNameType &name)const;
		void removeParameter(const ParameterNameType &name);
		void setContent(const char *data, size_t size);
		void setParameter(const ParameterNameType &name, const ParameterValueType &value);
		void setParameters(const ParameterCollection &params);
		void setResourcePath(const std::string &path);
		void setProduct(const std::string &product);
		void setVersion(const std::string &version);
	private:
		char *content_;
		size_t contentSize_;
		ParameterCollection params_;
		std::string product_;
		std::string resourcePath_;
		std::string version_;
	};
}

#endif // !ALIBABACLOUD_CORE_SERVICEREQUEST_H_