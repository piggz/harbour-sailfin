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

#ifndef JELLYFIN_DTO_LOGLEVEL_H
#define JELLYFIN_DTO_LOGLEVEL_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class LogLevelClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Trace,
		Debug,
		Information,
		Warning,
		Error,
		Critical,
		None,
	};
	Q_ENUM(Value)
private:
	explicit LogLevelClass();
};

typedef LogLevelClass::Value LogLevel;

} // NS DTO

namespace Support {

using LogLevel = Jellyfin::DTO::LogLevel;
using LogLevelClass = Jellyfin::DTO::LogLevelClass;

template <>
LogLevel fromJsonValue<LogLevel>(const QJsonValue &source) {
	if (!source.isString()) return LogLevelClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Trace")) {
		return LogLevelClass::Trace;
	}
	if (str == QStringLiteral("Debug")) {
		return LogLevelClass::Debug;
	}
	if (str == QStringLiteral("Information")) {
		return LogLevelClass::Information;
	}
	if (str == QStringLiteral("Warning")) {
		return LogLevelClass::Warning;
	}
	if (str == QStringLiteral("Error")) {
		return LogLevelClass::Error;
	}
	if (str == QStringLiteral("Critical")) {
		return LogLevelClass::Critical;
	}
	if (str == QStringLiteral("None")) {
		return LogLevelClass::None;
	}
	
	return LogLevelClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LOGLEVEL_H
