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

#ifndef JELLYFIN_DTO_PLAYSTATEREQUEST_H
#define JELLYFIN_DTO_PLAYSTATEREQUEST_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/playstatecommand.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlaystateRequest {
public:
	PlaystateRequest();
	PlaystateRequest(const PlaystateRequest &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlaystateRequest &other);
	
	static PlaystateRequest fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	PlaystateCommand command() const;

	void setCommand(PlaystateCommand newCommand);


	std::optional<qint64> seekPositionTicks() const;

	void setSeekPositionTicks(std::optional<qint64> newSeekPositionTicks);
	bool seekPositionTicksNull() const;
	void setSeekPositionTicksNull();

	/**
	 * @brief Gets or sets the controlling user identifier.
	 */
	QString controllingUserId() const;
	/**
	* @brief Gets or sets the controlling user identifier.
	*/
	void setControllingUserId(QString newControllingUserId);
	bool controllingUserIdNull() const;
	void setControllingUserIdNull();


protected:
	PlaystateCommand m_command;
	std::optional<qint64> m_seekPositionTicks = std::nullopt;
	QString m_controllingUserId;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYSTATEREQUEST_H
