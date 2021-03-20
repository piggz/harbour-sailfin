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

#include <JellyfinQt/DTO/transcodingprofile.h>

namespace Jellyfin {
namespace DTO {

TranscodingProfile::TranscodingProfile(QObject *parent) {}

TranscodingProfile TranscodingProfile::fromJson(QJsonObject source) {TranscodingProfile instance;
	instance->setFromJson(source, false);
	return instance;
}


void TranscodingProfile::setFromJson(QJsonObject source) {
	m_container = fromJsonValue<QString>(source["Container"]);
	m_type = fromJsonValue<DlnaProfileType>(source["Type"]);
	m_videoCodec = fromJsonValue<QString>(source["VideoCodec"]);
	m_audioCodec = fromJsonValue<QString>(source["AudioCodec"]);
	m_protocol = fromJsonValue<QString>(source["Protocol"]);
	m_estimateContentLength = fromJsonValue<bool>(source["EstimateContentLength"]);
	m_enableMpegtsM2TsMode = fromJsonValue<bool>(source["EnableMpegtsM2TsMode"]);
	m_transcodeSeekInfo = fromJsonValue<TranscodeSeekInfo>(source["TranscodeSeekInfo"]);
	m_copyTimestamps = fromJsonValue<bool>(source["CopyTimestamps"]);
	m_context = fromJsonValue<EncodingContext>(source["Context"]);
	m_enableSubtitlesInManifest = fromJsonValue<bool>(source["EnableSubtitlesInManifest"]);
	m_maxAudioChannels = fromJsonValue<QString>(source["MaxAudioChannels"]);
	m_minSegments = fromJsonValue<qint32>(source["MinSegments"]);
	m_segmentLength = fromJsonValue<qint32>(source["SegmentLength"]);
	m_breakOnNonKeyFrames = fromJsonValue<bool>(source["BreakOnNonKeyFrames"]);

}
	
QJsonObject TranscodingProfile::toJson() {
	QJsonObject result;
	result["Container"] = toJsonValue<QString>(m_container);
	result["Type"] = toJsonValue<DlnaProfileType>(m_type);
	result["VideoCodec"] = toJsonValue<QString>(m_videoCodec);
	result["AudioCodec"] = toJsonValue<QString>(m_audioCodec);
	result["Protocol"] = toJsonValue<QString>(m_protocol);
	result["EstimateContentLength"] = toJsonValue<bool>(m_estimateContentLength);
	result["EnableMpegtsM2TsMode"] = toJsonValue<bool>(m_enableMpegtsM2TsMode);
	result["TranscodeSeekInfo"] = toJsonValue<TranscodeSeekInfo>(m_transcodeSeekInfo);
	result["CopyTimestamps"] = toJsonValue<bool>(m_copyTimestamps);
	result["Context"] = toJsonValue<EncodingContext>(m_context);
	result["EnableSubtitlesInManifest"] = toJsonValue<bool>(m_enableSubtitlesInManifest);
	result["MaxAudioChannels"] = toJsonValue<QString>(m_maxAudioChannels);
	result["MinSegments"] = toJsonValue<qint32>(m_minSegments);
	result["SegmentLength"] = toJsonValue<qint32>(m_segmentLength);
	result["BreakOnNonKeyFrames"] = toJsonValue<bool>(m_breakOnNonKeyFrames);

	return result;
}

QString TranscodingProfile::container() const { return m_container; }

void TranscodingProfile::setContainer(QString newContainer) {
	m_container = newContainer;
}
DlnaProfileType TranscodingProfile::type() const { return m_type; }

void TranscodingProfile::setType(DlnaProfileType newType) {
	m_type = newType;
}
QString TranscodingProfile::videoCodec() const { return m_videoCodec; }

void TranscodingProfile::setVideoCodec(QString newVideoCodec) {
	m_videoCodec = newVideoCodec;
}
QString TranscodingProfile::audioCodec() const { return m_audioCodec; }

void TranscodingProfile::setAudioCodec(QString newAudioCodec) {
	m_audioCodec = newAudioCodec;
}
QString TranscodingProfile::protocol() const { return m_protocol; }

void TranscodingProfile::setProtocol(QString newProtocol) {
	m_protocol = newProtocol;
}
bool TranscodingProfile::estimateContentLength() const { return m_estimateContentLength; }

void TranscodingProfile::setEstimateContentLength(bool newEstimateContentLength) {
	m_estimateContentLength = newEstimateContentLength;
}
bool TranscodingProfile::enableMpegtsM2TsMode() const { return m_enableMpegtsM2TsMode; }

void TranscodingProfile::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode) {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}
TranscodeSeekInfo TranscodingProfile::transcodeSeekInfo() const { return m_transcodeSeekInfo; }

void TranscodingProfile::setTranscodeSeekInfo(TranscodeSeekInfo newTranscodeSeekInfo) {
	m_transcodeSeekInfo = newTranscodeSeekInfo;
}
bool TranscodingProfile::copyTimestamps() const { return m_copyTimestamps; }

void TranscodingProfile::setCopyTimestamps(bool newCopyTimestamps) {
	m_copyTimestamps = newCopyTimestamps;
}
EncodingContext TranscodingProfile::context() const { return m_context; }

void TranscodingProfile::setContext(EncodingContext newContext) {
	m_context = newContext;
}
bool TranscodingProfile::enableSubtitlesInManifest() const { return m_enableSubtitlesInManifest; }

void TranscodingProfile::setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest) {
	m_enableSubtitlesInManifest = newEnableSubtitlesInManifest;
}
QString TranscodingProfile::maxAudioChannels() const { return m_maxAudioChannels; }

void TranscodingProfile::setMaxAudioChannels(QString newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
}
qint32 TranscodingProfile::minSegments() const { return m_minSegments; }

void TranscodingProfile::setMinSegments(qint32 newMinSegments) {
	m_minSegments = newMinSegments;
}
qint32 TranscodingProfile::segmentLength() const { return m_segmentLength; }

void TranscodingProfile::setSegmentLength(qint32 newSegmentLength) {
	m_segmentLength = newSegmentLength;
}
bool TranscodingProfile::breakOnNonKeyFrames() const { return m_breakOnNonKeyFrames; }

void TranscodingProfile::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames) {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}


} // NS Jellyfin
} // NS DTO
