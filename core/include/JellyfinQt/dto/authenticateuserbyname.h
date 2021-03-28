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

#ifndef JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H
#define JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class AuthenticateUserByName {
public:
	AuthenticateUserByName();
	AuthenticateUserByName(const AuthenticateUserByName &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(AuthenticateUserByName &other);
	
	static AuthenticateUserByName fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the username.
	 */
	QString username() const;
	/**
	* @brief Gets or sets the username.
	*/
	void setUsername(QString newUsername);
	bool usernameNull() const;
	void setUsernameNull();

	/**
	 * @brief Gets or sets the plain text password.
	 */
	QString pw() const;
	/**
	* @brief Gets or sets the plain text password.
	*/
	void setPw(QString newPw);
	bool pwNull() const;
	void setPwNull();

	/**
	 * @brief Gets or sets the sha1-hashed password.
	 */
	QString password() const;
	/**
	* @brief Gets or sets the sha1-hashed password.
	*/
	void setPassword(QString newPassword);
	bool passwordNull() const;
	void setPasswordNull();


protected:
	QString m_username;
	QString m_pw;
	QString m_password;
};

} // NS DTO

namespace Support {

using AuthenticateUserByName = Jellyfin::DTO::AuthenticateUserByName;

template <>
AuthenticateUserByName fromJsonValue(const QJsonValue &source, convertType<AuthenticateUserByName>);

template<>
QJsonValue toJsonValue(const AuthenticateUserByName &source, convertType<AuthenticateUserByName>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H
