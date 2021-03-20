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

#include <JellyfinQt/DTO/remoteimageresult.h>

namespace Jellyfin {
namespace DTO {

RemoteImageResult::RemoteImageResult(QObject *parent) {}

RemoteImageResult RemoteImageResult::fromJson(QJsonObject source) {RemoteImageResult instance;
	instance->setFromJson(source, false);
	return instance;
}


void RemoteImageResult::setFromJson(QJsonObject source) {
	m_images = fromJsonValue<QList<QSharedPointer<RemoteImageInfo>>>(source["Images"]);
	m_totalRecordCount = fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_providers = fromJsonValue<QStringList>(source["Providers"]);

}
	
QJsonObject RemoteImageResult::toJson() {
	QJsonObject result;
	result["Images"] = toJsonValue<QList<QSharedPointer<RemoteImageInfo>>>(m_images);
	result["TotalRecordCount"] = toJsonValue<qint32>(m_totalRecordCount);
	result["Providers"] = toJsonValue<QStringList>(m_providers);

	return result;
}

QList<QSharedPointer<RemoteImageInfo>> RemoteImageResult::images() const { return m_images; }

void RemoteImageResult::setImages(QList<QSharedPointer<RemoteImageInfo>> newImages) {
	m_images = newImages;
}
qint32 RemoteImageResult::totalRecordCount() const { return m_totalRecordCount; }

void RemoteImageResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}
QStringList RemoteImageResult::providers() const { return m_providers; }

void RemoteImageResult::setProviders(QStringList newProviders) {
	m_providers = newProviders;
}


} // NS Jellyfin
} // NS DTO
