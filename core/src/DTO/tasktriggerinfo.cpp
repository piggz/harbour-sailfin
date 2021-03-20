/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#include <JellyfinQt/DTO/tasktriggerinfo.h>

namespace Jellyfin {
namespace DTO {

TaskTriggerInfo::TaskTriggerInfo(QObject *parent) {}

TaskTriggerInfo TaskTriggerInfo::fromJson(QJsonObject source) {TaskTriggerInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void TaskTriggerInfo::setFromJson(QJsonObject source) {
	m_type = fromJsonValue<QString>(source["Type"]);
	m_timeOfDayTicks = fromJsonValue<qint64>(source["TimeOfDayTicks"]);
	m_intervalTicks = fromJsonValue<qint64>(source["IntervalTicks"]);
	m_dayOfWeek = fromJsonValue<DayOfWeek>(source["DayOfWeek"]);
	m_maxRuntimeTicks = fromJsonValue<qint64>(source["MaxRuntimeTicks"]);

}
	
QJsonObject TaskTriggerInfo::toJson() {
	QJsonObject result;
	result["Type"] = toJsonValue<QString>(m_type);
	result["TimeOfDayTicks"] = toJsonValue<qint64>(m_timeOfDayTicks);
	result["IntervalTicks"] = toJsonValue<qint64>(m_intervalTicks);
	result["DayOfWeek"] = toJsonValue<DayOfWeek>(m_dayOfWeek);
	result["MaxRuntimeTicks"] = toJsonValue<qint64>(m_maxRuntimeTicks);

	return result;
}

QString TaskTriggerInfo::type() const { return m_type; }

void TaskTriggerInfo::setType(QString newType) {
	m_type = newType;
}
qint64 TaskTriggerInfo::timeOfDayTicks() const { return m_timeOfDayTicks; }

void TaskTriggerInfo::setTimeOfDayTicks(qint64 newTimeOfDayTicks) {
	m_timeOfDayTicks = newTimeOfDayTicks;
}
qint64 TaskTriggerInfo::intervalTicks() const { return m_intervalTicks; }

void TaskTriggerInfo::setIntervalTicks(qint64 newIntervalTicks) {
	m_intervalTicks = newIntervalTicks;
}
DayOfWeek TaskTriggerInfo::dayOfWeek() const { return m_dayOfWeek; }

void TaskTriggerInfo::setDayOfWeek(DayOfWeek newDayOfWeek) {
	m_dayOfWeek = newDayOfWeek;
}
qint64 TaskTriggerInfo::maxRuntimeTicks() const { return m_maxRuntimeTicks; }

void TaskTriggerInfo::setMaxRuntimeTicks(qint64 newMaxRuntimeTicks) {
	m_maxRuntimeTicks = newMaxRuntimeTicks;
}


} // NS Jellyfin
} // NS DTO
