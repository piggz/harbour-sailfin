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

#ifndef JELLYFIN_DTO_FILESYSTEMENTRYINFO_H
#define JELLYFIN_DTO_FILESYSTEMENTRYINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/filesystementrytype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class FileSystemEntryInfo {
public:
	explicit FileSystemEntryInfo();
	static FileSystemEntryInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets the name.
	 */
	QString name() const;
	/**
	* @brief Gets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets the path.
	 */
	QString path() const;
	/**
	* @brief Gets the path.
	*/
	void setPath(QString newPath);

	FileSystemEntryType type() const;

	void setType(FileSystemEntryType newType);

protected:
	QString m_name;
	QString m_path;
	FileSystemEntryType m_type;
};

} // NS DTO

namespace Support {

using FileSystemEntryInfo = Jellyfin::DTO::FileSystemEntryInfo;

template <>
FileSystemEntryInfo fromJsonValue<FileSystemEntryInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return FileSystemEntryInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_FILESYSTEMENTRYINFO_H
