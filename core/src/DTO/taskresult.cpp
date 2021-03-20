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

#include <JellyfinQt/DTO/taskresult.h>

namespace Jellyfin {
namespace DTO {

TaskResult::TaskResult(QObject *parent) {}

TaskResult TaskResult::fromJson(QJsonObject source) {TaskResult instance;
	instance->setFromJson(source, false);
	return instance;
}


void TaskResult::setFromJson(QJsonObject source) {
	m_startTimeUtc = fromJsonValue<QDateTime>(source["StartTimeUtc"]);
	m_endTimeUtc = fromJsonValue<QDateTime>(source["EndTimeUtc"]);
	m_status = fromJsonValue<TaskCompletionStatus>(source["Status"]);
	m_name = fromJsonValue<QString>(source["Name"]);
	m_key = fromJsonValue<QString>(source["Key"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_errorMessage = fromJsonValue<QString>(source["ErrorMessage"]);
	m_longErrorMessage = fromJsonValue<QString>(source["LongErrorMessage"]);

}
	
QJsonObject TaskResult::toJson() {
	QJsonObject result;
	result["StartTimeUtc"] = toJsonValue<QDateTime>(m_startTimeUtc);
	result["EndTimeUtc"] = toJsonValue<QDateTime>(m_endTimeUtc);
	result["Status"] = toJsonValue<TaskCompletionStatus>(m_status);
	result["Name"] = toJsonValue<QString>(m_name);
	result["Key"] = toJsonValue<QString>(m_key);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["ErrorMessage"] = toJsonValue<QString>(m_errorMessage);
	result["LongErrorMessage"] = toJsonValue<QString>(m_longErrorMessage);

	return result;
}

QDateTime TaskResult::startTimeUtc() const { return m_startTimeUtc; }

void TaskResult::setStartTimeUtc(QDateTime newStartTimeUtc) {
	m_startTimeUtc = newStartTimeUtc;
}
QDateTime TaskResult::endTimeUtc() const { return m_endTimeUtc; }

void TaskResult::setEndTimeUtc(QDateTime newEndTimeUtc) {
	m_endTimeUtc = newEndTimeUtc;
}
TaskCompletionStatus TaskResult::status() const { return m_status; }

void TaskResult::setStatus(TaskCompletionStatus newStatus) {
	m_status = newStatus;
}
QString TaskResult::name() const { return m_name; }

void TaskResult::setName(QString newName) {
	m_name = newName;
}
QString TaskResult::key() const { return m_key; }

void TaskResult::setKey(QString newKey) {
	m_key = newKey;
}
QString TaskResult::jellyfinId() const { return m_jellyfinId; }

void TaskResult::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString TaskResult::errorMessage() const { return m_errorMessage; }

void TaskResult::setErrorMessage(QString newErrorMessage) {
	m_errorMessage = newErrorMessage;
}
QString TaskResult::longErrorMessage() const { return m_longErrorMessage; }

void TaskResult::setLongErrorMessage(QString newLongErrorMessage) {
	m_longErrorMessage = newLongErrorMessage;
}


} // NS Jellyfin
} // NS DTO
