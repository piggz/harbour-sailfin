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

#include <JellyfinQt/DTO/playbackprogressinfo.h>

namespace Jellyfin {
namespace DTO {

PlaybackProgressInfo::PlaybackProgressInfo(QObject *parent) {}

PlaybackProgressInfo PlaybackProgressInfo::fromJson(QJsonObject source) {PlaybackProgressInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void PlaybackProgressInfo::setFromJson(QJsonObject source) {
	m_canSeek = fromJsonValue<bool>(source["CanSeek"]);
	m_item = fromJsonValue<QSharedPointer<BaseItemDto>>(source["Item"]);
	m_itemId = fromJsonValue<QUuid>(source["ItemId"]);
	m_sessionId = fromJsonValue<QString>(source["SessionId"]);
	m_mediaSourceId = fromJsonValue<QString>(source["MediaSourceId"]);
	m_audioStreamIndex = fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_isPaused = fromJsonValue<bool>(source["IsPaused"]);
	m_isMuted = fromJsonValue<bool>(source["IsMuted"]);
	m_positionTicks = fromJsonValue<qint64>(source["PositionTicks"]);
	m_playbackStartTimeTicks = fromJsonValue<qint64>(source["PlaybackStartTimeTicks"]);
	m_volumeLevel = fromJsonValue<qint32>(source["VolumeLevel"]);
	m_brightness = fromJsonValue<qint32>(source["Brightness"]);
	m_aspectRatio = fromJsonValue<QString>(source["AspectRatio"]);
	m_playMethod = fromJsonValue<PlayMethod>(source["PlayMethod"]);
	m_liveStreamId = fromJsonValue<QString>(source["LiveStreamId"]);
	m_playSessionId = fromJsonValue<QString>(source["PlaySessionId"]);
	m_repeatMode = fromJsonValue<RepeatMode>(source["RepeatMode"]);
	m_nowPlayingQueue = fromJsonValue<QList<QSharedPointer<QueueItem>>>(source["NowPlayingQueue"]);
	m_playlistItemId = fromJsonValue<QString>(source["PlaylistItemId"]);

}
	
QJsonObject PlaybackProgressInfo::toJson() {
	QJsonObject result;
	result["CanSeek"] = toJsonValue<bool>(m_canSeek);
	result["Item"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_item);
	result["ItemId"] = toJsonValue<QUuid>(m_itemId);
	result["SessionId"] = toJsonValue<QString>(m_sessionId);
	result["MediaSourceId"] = toJsonValue<QString>(m_mediaSourceId);
	result["AudioStreamIndex"] = toJsonValue<qint32>(m_audioStreamIndex);
	result["SubtitleStreamIndex"] = toJsonValue<qint32>(m_subtitleStreamIndex);
	result["IsPaused"] = toJsonValue<bool>(m_isPaused);
	result["IsMuted"] = toJsonValue<bool>(m_isMuted);
	result["PositionTicks"] = toJsonValue<qint64>(m_positionTicks);
	result["PlaybackStartTimeTicks"] = toJsonValue<qint64>(m_playbackStartTimeTicks);
	result["VolumeLevel"] = toJsonValue<qint32>(m_volumeLevel);
	result["Brightness"] = toJsonValue<qint32>(m_brightness);
	result["AspectRatio"] = toJsonValue<QString>(m_aspectRatio);
	result["PlayMethod"] = toJsonValue<PlayMethod>(m_playMethod);
	result["LiveStreamId"] = toJsonValue<QString>(m_liveStreamId);
	result["PlaySessionId"] = toJsonValue<QString>(m_playSessionId);
	result["RepeatMode"] = toJsonValue<RepeatMode>(m_repeatMode);
	result["NowPlayingQueue"] = toJsonValue<QList<QSharedPointer<QueueItem>>>(m_nowPlayingQueue);
	result["PlaylistItemId"] = toJsonValue<QString>(m_playlistItemId);

	return result;
}

bool PlaybackProgressInfo::canSeek() const { return m_canSeek; }

void PlaybackProgressInfo::setCanSeek(bool newCanSeek) {
	m_canSeek = newCanSeek;
}
QSharedPointer<BaseItemDto> PlaybackProgressInfo::item() const { return m_item; }

void PlaybackProgressInfo::setItem(QSharedPointer<BaseItemDto> newItem) {
	m_item = newItem;
}
QUuid PlaybackProgressInfo::itemId() const { return m_itemId; }

void PlaybackProgressInfo::setItemId(QUuid newItemId) {
	m_itemId = newItemId;
}
QString PlaybackProgressInfo::sessionId() const { return m_sessionId; }

void PlaybackProgressInfo::setSessionId(QString newSessionId) {
	m_sessionId = newSessionId;
}
QString PlaybackProgressInfo::mediaSourceId() const { return m_mediaSourceId; }

void PlaybackProgressInfo::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
qint32 PlaybackProgressInfo::audioStreamIndex() const { return m_audioStreamIndex; }

void PlaybackProgressInfo::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
qint32 PlaybackProgressInfo::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlaybackProgressInfo::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
bool PlaybackProgressInfo::isPaused() const { return m_isPaused; }

void PlaybackProgressInfo::setIsPaused(bool newIsPaused) {
	m_isPaused = newIsPaused;
}
bool PlaybackProgressInfo::isMuted() const { return m_isMuted; }

void PlaybackProgressInfo::setIsMuted(bool newIsMuted) {
	m_isMuted = newIsMuted;
}
qint64 PlaybackProgressInfo::positionTicks() const { return m_positionTicks; }

void PlaybackProgressInfo::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
qint64 PlaybackProgressInfo::playbackStartTimeTicks() const { return m_playbackStartTimeTicks; }

void PlaybackProgressInfo::setPlaybackStartTimeTicks(qint64 newPlaybackStartTimeTicks) {
	m_playbackStartTimeTicks = newPlaybackStartTimeTicks;
}
qint32 PlaybackProgressInfo::volumeLevel() const { return m_volumeLevel; }

void PlaybackProgressInfo::setVolumeLevel(qint32 newVolumeLevel) {
	m_volumeLevel = newVolumeLevel;
}
qint32 PlaybackProgressInfo::brightness() const { return m_brightness; }

void PlaybackProgressInfo::setBrightness(qint32 newBrightness) {
	m_brightness = newBrightness;
}
QString PlaybackProgressInfo::aspectRatio() const { return m_aspectRatio; }

void PlaybackProgressInfo::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
PlayMethod PlaybackProgressInfo::playMethod() const { return m_playMethod; }

void PlaybackProgressInfo::setPlayMethod(PlayMethod newPlayMethod) {
	m_playMethod = newPlayMethod;
}
QString PlaybackProgressInfo::liveStreamId() const { return m_liveStreamId; }

void PlaybackProgressInfo::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
QString PlaybackProgressInfo::playSessionId() const { return m_playSessionId; }

void PlaybackProgressInfo::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
RepeatMode PlaybackProgressInfo::repeatMode() const { return m_repeatMode; }

void PlaybackProgressInfo::setRepeatMode(RepeatMode newRepeatMode) {
	m_repeatMode = newRepeatMode;
}
QList<QSharedPointer<QueueItem>> PlaybackProgressInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }

void PlaybackProgressInfo::setNowPlayingQueue(QList<QSharedPointer<QueueItem>> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}
QString PlaybackProgressInfo::playlistItemId() const { return m_playlistItemId; }

void PlaybackProgressInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}


} // NS Jellyfin
} // NS DTO
