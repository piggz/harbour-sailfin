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

#ifndef JELLYFIN_DTO_SENDCOMMAND_H
#define JELLYFIN_DTO_SENDCOMMAND_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/sendcommandtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SendCommand {
public:
	SendCommand();
	SendCommand(const SendCommand &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SendCommand &other);
	
	static SendCommand fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets the group identifier.
	 */
	QString groupId() const;
	/**
	* @brief Gets the group identifier.
	*/
	void setGroupId(QString newGroupId);

	/**
	 * @brief Gets the playlist identifier of the playing item.
	 */
	QString playlistItemId() const;
	/**
	* @brief Gets the playlist identifier of the playing item.
	*/
	void setPlaylistItemId(QString newPlaylistItemId);

	/**
	 * @brief Gets or sets the UTC time when to execute the command.
	 */
	QDateTime when() const;
	/**
	* @brief Gets or sets the UTC time when to execute the command.
	*/
	void setWhen(QDateTime newWhen);

	/**
	 * @brief Gets the position ticks.
	 */
	std::optional<qint64> positionTicks() const;
	/**
	* @brief Gets the position ticks.
	*/
	void setPositionTicks(std::optional<qint64> newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();


	SendCommandType command() const;

	void setCommand(SendCommandType newCommand);

	/**
	 * @brief Gets the UTC time when this command has been emitted.
	 */
	QDateTime emittedAt() const;
	/**
	* @brief Gets the UTC time when this command has been emitted.
	*/
	void setEmittedAt(QDateTime newEmittedAt);


protected:
	QString m_groupId;
	QString m_playlistItemId;
	QDateTime m_when;
	std::optional<qint64> m_positionTicks = std::nullopt;
	SendCommandType m_command;
	QDateTime m_emittedAt;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SENDCOMMAND_H
