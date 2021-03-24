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

#include <JellyfinQt/dto/notificationlevel.h>

namespace Jellyfin {
namespace DTO {

NotificationLevelClass::NotificationLevelClass() {}


} // NS DTO

namespace Support {

using NotificationLevel = Jellyfin::DTO::NotificationLevel;

template <>
NotificationLevel fromJsonValue<NotificationLevel>(const QJsonValue &source) {
	if (!source.isString()) return NotificationLevel::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Normal")) {
		return NotificationLevel::Normal;
	}
	if (str == QStringLiteral("Warning")) {
		return NotificationLevel::Warning;
	}
	if (str == QStringLiteral("Error")) {
		return NotificationLevel::Error;
	}
	
	return NotificationLevel::EnumNotSet;
}

} // NS DTO
} // NS Jellyfin
