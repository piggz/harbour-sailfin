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

#include <JellyfinQt/DTO/groupinfodto.h>

namespace Jellyfin {
namespace DTO {

GroupInfoDto::GroupInfoDto(QObject *parent) {}

GroupInfoDto GroupInfoDto::fromJson(QJsonObject source) {GroupInfoDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void GroupInfoDto::setFromJson(QJsonObject source) {
	m_groupId = fromJsonValue<QUuid>(source["GroupId"]);
	m_groupName = fromJsonValue<QString>(source["GroupName"]);
	m_state = fromJsonValue<GroupStateType>(source["State"]);
	m_participants = fromJsonValue<QStringList>(source["Participants"]);
	m_lastUpdatedAt = fromJsonValue<QDateTime>(source["LastUpdatedAt"]);

}
	
QJsonObject GroupInfoDto::toJson() {
	QJsonObject result;
	result["GroupId"] = toJsonValue<QUuid>(m_groupId);
	result["GroupName"] = toJsonValue<QString>(m_groupName);
	result["State"] = toJsonValue<GroupStateType>(m_state);
	result["Participants"] = toJsonValue<QStringList>(m_participants);
	result["LastUpdatedAt"] = toJsonValue<QDateTime>(m_lastUpdatedAt);

	return result;
}

QUuid GroupInfoDto::groupId() const { return m_groupId; }

void GroupInfoDto::setGroupId(QUuid newGroupId) {
	m_groupId = newGroupId;
}
QString GroupInfoDto::groupName() const { return m_groupName; }

void GroupInfoDto::setGroupName(QString newGroupName) {
	m_groupName = newGroupName;
}
GroupStateType GroupInfoDto::state() const { return m_state; }

void GroupInfoDto::setState(GroupStateType newState) {
	m_state = newState;
}
QStringList GroupInfoDto::participants() const { return m_participants; }

void GroupInfoDto::setParticipants(QStringList newParticipants) {
	m_participants = newParticipants;
}
QDateTime GroupInfoDto::lastUpdatedAt() const { return m_lastUpdatedAt; }

void GroupInfoDto::setLastUpdatedAt(QDateTime newLastUpdatedAt) {
	m_lastUpdatedAt = newLastUpdatedAt;
}


} // NS Jellyfin
} // NS DTO
