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

#include <alibabacloud/slb/model/DescribeZonesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeZonesResult::DescribeZonesResult() :
	ServiceResult()
{}

DescribeZonesResult::DescribeZonesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZonesResult::~DescribeZonesResult()
{}

void DescribeZonesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allZones = value["Zones"]["Zone"];
	for (auto value : allZones)
	{
		Zone zoneObject;
		zoneObject.zoneId = value["ZoneId"].asString();
		zoneObject.localName = value["LocalName"].asString();
		auto allSlaveZones = value["SlaveZones"]["SlaveZone"];
		for (auto value : allSlaveZones)
		{
			Zone::SlaveZone slaveZoneObject;
			slaveZoneObject.zoneId = value["ZoneId"].asString();
			slaveZoneObject.localName = value["LocalName"].asString();
			zoneObject.slaveZones.push_back(slaveZoneObject);
		}
		zones_.push_back(zoneObject);
	}

}

