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

#include <JellyfinQt/DTO/imageinfo.h>

namespace Jellyfin {
namespace DTO {

ImageInfo::ImageInfo(QObject *parent) {}

ImageInfo ImageInfo::fromJson(QJsonObject source) {ImageInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void ImageInfo::setFromJson(QJsonObject source) {
	m_imageType = fromJsonValue<ImageType>(source["ImageType"]);
	m_imageIndex = fromJsonValue<qint32>(source["ImageIndex"]);
	m_imageTag = fromJsonValue<QString>(source["ImageTag"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_blurHash = fromJsonValue<QString>(source["BlurHash"]);
	m_height = fromJsonValue<qint32>(source["Height"]);
	m_width = fromJsonValue<qint32>(source["Width"]);
	m_size = fromJsonValue<qint64>(source["Size"]);

}
	
QJsonObject ImageInfo::toJson() {
	QJsonObject result;
	result["ImageType"] = toJsonValue<ImageType>(m_imageType);
	result["ImageIndex"] = toJsonValue<qint32>(m_imageIndex);
	result["ImageTag"] = toJsonValue<QString>(m_imageTag);
	result["Path"] = toJsonValue<QString>(m_path);
	result["BlurHash"] = toJsonValue<QString>(m_blurHash);
	result["Height"] = toJsonValue<qint32>(m_height);
	result["Width"] = toJsonValue<qint32>(m_width);
	result["Size"] = toJsonValue<qint64>(m_size);

	return result;
}

ImageType ImageInfo::imageType() const { return m_imageType; }

void ImageInfo::setImageType(ImageType newImageType) {
	m_imageType = newImageType;
}
qint32 ImageInfo::imageIndex() const { return m_imageIndex; }

void ImageInfo::setImageIndex(qint32 newImageIndex) {
	m_imageIndex = newImageIndex;
}
QString ImageInfo::imageTag() const { return m_imageTag; }

void ImageInfo::setImageTag(QString newImageTag) {
	m_imageTag = newImageTag;
}
QString ImageInfo::path() const { return m_path; }

void ImageInfo::setPath(QString newPath) {
	m_path = newPath;
}
QString ImageInfo::blurHash() const { return m_blurHash; }

void ImageInfo::setBlurHash(QString newBlurHash) {
	m_blurHash = newBlurHash;
}
qint32 ImageInfo::height() const { return m_height; }

void ImageInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
}
qint32 ImageInfo::width() const { return m_width; }

void ImageInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
}
qint64 ImageInfo::size() const { return m_size; }

void ImageInfo::setSize(qint64 newSize) {
	m_size = newSize;
}


} // NS Jellyfin
} // NS DTO
