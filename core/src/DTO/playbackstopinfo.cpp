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

#include <JellyfinQt/DTO/playbackstopinfo.h>

namespace Jellyfin {
namespace DTO {

PlaybackStopInfo::PlaybackStopInfo(QObject *parent) {}

PlaybackStopInfo PlaybackStopInfo::fromJson(QJsonObject source) {PlaybackStopInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PlaybackStopInfo::setFromJson(QJsonObject source) {
	m_item = fromJsonValue<QSharedPointer<BaseItemDto>>(source["Item"]);
	m_itemId = fromJsonValue<QUuid>(source["ItemId"]);
	m_sessionId = fromJsonValue<QString>(source["SessionId"]);
	m_mediaSourceId = fromJsonValue<QString>(source["MediaSourceId"]);
	m_positionTicks = fromJsonValue<qint64>(source["PositionTicks"]);
	m_liveStreamId = fromJsonValue<QString>(source["LiveStreamId"]);
	m_playSessionId = fromJsonValue<QString>(source["PlaySessionId"]);
	m_failed = fromJsonValue<bool>(source["Failed"]);
	m_nextMediaType = fromJsonValue<QString>(source["NextMediaType"]);
	m_playlistItemId = fromJsonValue<QString>(source["PlaylistItemId"]);
	m_nowPlayingQueue = fromJsonValue<QList<QSharedPointer<QueueItem>>>(source["NowPlayingQueue"]);

}
	
QJsonObject PlaybackStopInfo::toJson() {
	QJsonObject result;
	result["Item"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_item);
	result["ItemId"] = toJsonValue<QUuid>(m_itemId);
	result["SessionId"] = toJsonValue<QString>(m_sessionId);
	result["MediaSourceId"] = toJsonValue<QString>(m_mediaSourceId);
	result["PositionTicks"] = toJsonValue<qint64>(m_positionTicks);
	result["LiveStreamId"] = toJsonValue<QString>(m_liveStreamId);
	result["PlaySessionId"] = toJsonValue<QString>(m_playSessionId);
	result["Failed"] = toJsonValue<bool>(m_failed);
	result["NextMediaType"] = toJsonValue<QString>(m_nextMediaType);
	result["PlaylistItemId"] = toJsonValue<QString>(m_playlistItemId);
	result["NowPlayingQueue"] = toJsonValue<QList<QSharedPointer<QueueItem>>>(m_nowPlayingQueue);

	return result;
}

QSharedPointer<BaseItemDto> PlaybackStopInfo::item() const { return m_item; }

void PlaybackStopInfo::setItem(QSharedPointer<BaseItemDto> newItem) {
	m_item = newItem;
}
QUuid PlaybackStopInfo::itemId() const { return m_itemId; }

void PlaybackStopInfo::setItemId(QUuid newItemId) {
	m_itemId = newItemId;
}
QString PlaybackStopInfo::sessionId() const { return m_sessionId; }

void PlaybackStopInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}
QString PlaybackStopInfo::mediaSourceId() const { return m_mediaSourceId; }

void PlaybackStopInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
qint64 PlaybackStopInfo::positionTicks() const { return m_positionTicks; }

void PlaybackStopInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
QString PlaybackStopInfo::liveStreamId() const { return m_liveStreamId; }

void PlaybackStopInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
QString PlaybackStopInfo::playSessionId() const { return m_playSessionId; }

void PlaybackStopInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
bool PlaybackStopInfo::failed() const { return m_failed; }

void PlaybackStopInfo::setFailed(bool newFailed) {
	m_failed = newFailed;
}
QString PlaybackStopInfo::nextMediaType() const { return m_nextMediaType; }

void PlaybackStopInfo::setNextMediaType(QString newNextMediaType) {
	m_nextMediaType = newNextMediaType;
}
QString PlaybackStopInfo::playlistItemId() const { return m_playlistItemId; }

void PlaybackStopInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
QList<QSharedPointer<QueueItem>> PlaybackStopInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }

void PlaybackStopInfo::setNowPlayingQueue(QList<QSharedPointer<QueueItem>> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}


} // NS Jellyfin
} // NS DTO
