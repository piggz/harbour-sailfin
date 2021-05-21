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

#include "JellyfinQt/loader/gethlsvideosegmentparams.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;

// GetHlsVideoSegmentParams

const QString &GetHlsVideoSegmentParams::container() const {
	return m_container;
}

void GetHlsVideoSegmentParams::setContainer(QString newContainer) {
	m_container = newContainer;
}


const QString &GetHlsVideoSegmentParams::itemId() const {
	return m_itemId;
}

void GetHlsVideoSegmentParams::setItemId(QString newItemId) {
	m_itemId = newItemId;
}


const QString &GetHlsVideoSegmentParams::playlistId() const {
	return m_playlistId;
}

void GetHlsVideoSegmentParams::setPlaylistId(QString newPlaylistId) {
	m_playlistId = newPlaylistId;
}


const qint32 &GetHlsVideoSegmentParams::segmentId() const {
	return m_segmentId;
}

void GetHlsVideoSegmentParams::setSegmentId(qint32 newSegmentId) {
	m_segmentId = newSegmentId;
}


const bool &GetHlsVideoSegmentParams::allowAudioStreamCopy() const {
	return m_allowAudioStreamCopy.value();
}

void GetHlsVideoSegmentParams::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy)  {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}

bool GetHlsVideoSegmentParams::allowAudioStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowAudioStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setAllowAudioStreamCopyNull() {
	m_allowAudioStreamCopy = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::allowVideoStreamCopy() const {
	return m_allowVideoStreamCopy.value();
}

void GetHlsVideoSegmentParams::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy)  {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}

bool GetHlsVideoSegmentParams::allowVideoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_allowVideoStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setAllowVideoStreamCopyNull() {
	m_allowVideoStreamCopy = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioBitRate() const {
	return m_audioBitRate.value();
}

void GetHlsVideoSegmentParams::setAudioBitRate(qint32 newAudioBitRate)  {
	m_audioBitRate = newAudioBitRate;
}

bool GetHlsVideoSegmentParams::audioBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioBitRate.has_value();
}

void GetHlsVideoSegmentParams::setAudioBitRateNull() {
	m_audioBitRate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioChannels() const {
	return m_audioChannels.value();
}

void GetHlsVideoSegmentParams::setAudioChannels(qint32 newAudioChannels)  {
	m_audioChannels = newAudioChannels;
}

bool GetHlsVideoSegmentParams::audioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioChannels.has_value();
}

void GetHlsVideoSegmentParams::setAudioChannelsNull() {
	m_audioChannels = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::audioCodec() const {
	return m_audioCodec;
}

void GetHlsVideoSegmentParams::setAudioCodec(QString newAudioCodec)  {
	m_audioCodec = newAudioCodec;
}

bool GetHlsVideoSegmentParams::audioCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_audioCodec.isNull();
}

void GetHlsVideoSegmentParams::setAudioCodecNull() {
	m_audioCodec.clear();
}


const qint32 &GetHlsVideoSegmentParams::audioSampleRate() const {
	return m_audioSampleRate.value();
}

void GetHlsVideoSegmentParams::setAudioSampleRate(qint32 newAudioSampleRate)  {
	m_audioSampleRate = newAudioSampleRate;
}

bool GetHlsVideoSegmentParams::audioSampleRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioSampleRate.has_value();
}

void GetHlsVideoSegmentParams::setAudioSampleRateNull() {
	m_audioSampleRate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::audioStreamIndex() const {
	return m_audioStreamIndex.value();
}

void GetHlsVideoSegmentParams::setAudioStreamIndex(qint32 newAudioStreamIndex)  {
	m_audioStreamIndex = newAudioStreamIndex;
}

bool GetHlsVideoSegmentParams::audioStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_audioStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::breakOnNonKeyFrames() const {
	return m_breakOnNonKeyFrames.value();
}

void GetHlsVideoSegmentParams::setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames)  {
	m_breakOnNonKeyFrames = newBreakOnNonKeyFrames;
}

bool GetHlsVideoSegmentParams::breakOnNonKeyFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_breakOnNonKeyFrames.has_value();
}

void GetHlsVideoSegmentParams::setBreakOnNonKeyFramesNull() {
	m_breakOnNonKeyFrames = std::nullopt;
}


const EncodingContext &GetHlsVideoSegmentParams::context() const {
	return m_context;
}

void GetHlsVideoSegmentParams::setContext(EncodingContext newContext)  {
	m_context = newContext;
}

bool GetHlsVideoSegmentParams::contextNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_context== EncodingContext::EnumNotSet;
}

void GetHlsVideoSegmentParams::setContextNull() {
	m_context= EncodingContext::EnumNotSet;
}


const bool &GetHlsVideoSegmentParams::copyTimestamps() const {
	return m_copyTimestamps.value();
}

void GetHlsVideoSegmentParams::setCopyTimestamps(bool newCopyTimestamps)  {
	m_copyTimestamps = newCopyTimestamps;
}

bool GetHlsVideoSegmentParams::copyTimestampsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_copyTimestamps.has_value();
}

void GetHlsVideoSegmentParams::setCopyTimestampsNull() {
	m_copyTimestamps = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::cpuCoreLimit() const {
	return m_cpuCoreLimit.value();
}

void GetHlsVideoSegmentParams::setCpuCoreLimit(qint32 newCpuCoreLimit)  {
	m_cpuCoreLimit = newCpuCoreLimit;
}

bool GetHlsVideoSegmentParams::cpuCoreLimitNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_cpuCoreLimit.has_value();
}

void GetHlsVideoSegmentParams::setCpuCoreLimitNull() {
	m_cpuCoreLimit = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::deInterlace() const {
	return m_deInterlace.value();
}

void GetHlsVideoSegmentParams::setDeInterlace(bool newDeInterlace)  {
	m_deInterlace = newDeInterlace;
}

bool GetHlsVideoSegmentParams::deInterlaceNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_deInterlace.has_value();
}

void GetHlsVideoSegmentParams::setDeInterlaceNull() {
	m_deInterlace = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::deviceId() const {
	return m_deviceId;
}

void GetHlsVideoSegmentParams::setDeviceId(QString newDeviceId)  {
	m_deviceId = newDeviceId;
}

bool GetHlsVideoSegmentParams::deviceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceId.isNull();
}

void GetHlsVideoSegmentParams::setDeviceIdNull() {
	m_deviceId.clear();
}


const QString &GetHlsVideoSegmentParams::deviceProfileId() const {
	return m_deviceProfileId;
}

void GetHlsVideoSegmentParams::setDeviceProfileId(QString newDeviceProfileId)  {
	m_deviceProfileId = newDeviceProfileId;
}

bool GetHlsVideoSegmentParams::deviceProfileIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_deviceProfileId.isNull();
}

void GetHlsVideoSegmentParams::setDeviceProfileIdNull() {
	m_deviceProfileId.clear();
}


const bool &GetHlsVideoSegmentParams::enableAutoStreamCopy() const {
	return m_enableAutoStreamCopy.value();
}

void GetHlsVideoSegmentParams::setEnableAutoStreamCopy(bool newEnableAutoStreamCopy)  {
	m_enableAutoStreamCopy = newEnableAutoStreamCopy;
}

bool GetHlsVideoSegmentParams::enableAutoStreamCopyNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableAutoStreamCopy.has_value();
}

void GetHlsVideoSegmentParams::setEnableAutoStreamCopyNull() {
	m_enableAutoStreamCopy = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::enableMpegtsM2TsMode() const {
	return m_enableMpegtsM2TsMode.value();
}

void GetHlsVideoSegmentParams::setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode)  {
	m_enableMpegtsM2TsMode = newEnableMpegtsM2TsMode;
}

bool GetHlsVideoSegmentParams::enableMpegtsM2TsModeNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_enableMpegtsM2TsMode.has_value();
}

void GetHlsVideoSegmentParams::setEnableMpegtsM2TsModeNull() {
	m_enableMpegtsM2TsMode = std::nullopt;
}


const float &GetHlsVideoSegmentParams::framerate() const {
	return m_framerate.value();
}

void GetHlsVideoSegmentParams::setFramerate(float newFramerate)  {
	m_framerate = newFramerate;
}

bool GetHlsVideoSegmentParams::framerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_framerate.has_value();
}

void GetHlsVideoSegmentParams::setFramerateNull() {
	m_framerate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::height() const {
	return m_height.value();
}

void GetHlsVideoSegmentParams::setHeight(qint32 newHeight)  {
	m_height = newHeight;
}

bool GetHlsVideoSegmentParams::heightNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_height.has_value();
}

void GetHlsVideoSegmentParams::setHeightNull() {
	m_height = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::level() const {
	return m_level;
}

void GetHlsVideoSegmentParams::setLevel(QString newLevel)  {
	m_level = newLevel;
}

bool GetHlsVideoSegmentParams::levelNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_level.isNull();
}

void GetHlsVideoSegmentParams::setLevelNull() {
	m_level.clear();
}


const QString &GetHlsVideoSegmentParams::liveStreamId() const {
	return m_liveStreamId;
}

void GetHlsVideoSegmentParams::setLiveStreamId(QString newLiveStreamId)  {
	m_liveStreamId = newLiveStreamId;
}

bool GetHlsVideoSegmentParams::liveStreamIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_liveStreamId.isNull();
}

void GetHlsVideoSegmentParams::setLiveStreamIdNull() {
	m_liveStreamId.clear();
}


const qint32 &GetHlsVideoSegmentParams::maxAudioBitDepth() const {
	return m_maxAudioBitDepth.value();
}

void GetHlsVideoSegmentParams::setMaxAudioBitDepth(qint32 newMaxAudioBitDepth)  {
	m_maxAudioBitDepth = newMaxAudioBitDepth;
}

bool GetHlsVideoSegmentParams::maxAudioBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioBitDepth.has_value();
}

void GetHlsVideoSegmentParams::setMaxAudioBitDepthNull() {
	m_maxAudioBitDepth = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxAudioChannels() const {
	return m_maxAudioChannels.value();
}

void GetHlsVideoSegmentParams::setMaxAudioChannels(qint32 newMaxAudioChannels)  {
	m_maxAudioChannels = newMaxAudioChannels;
}

bool GetHlsVideoSegmentParams::maxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxAudioChannels.has_value();
}

void GetHlsVideoSegmentParams::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;
}


const float &GetHlsVideoSegmentParams::maxFramerate() const {
	return m_maxFramerate.value();
}

void GetHlsVideoSegmentParams::setMaxFramerate(float newMaxFramerate)  {
	m_maxFramerate = newMaxFramerate;
}

bool GetHlsVideoSegmentParams::maxFramerateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxFramerate.has_value();
}

void GetHlsVideoSegmentParams::setMaxFramerateNull() {
	m_maxFramerate = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxRefFrames() const {
	return m_maxRefFrames.value();
}

void GetHlsVideoSegmentParams::setMaxRefFrames(qint32 newMaxRefFrames)  {
	m_maxRefFrames = newMaxRefFrames;
}

bool GetHlsVideoSegmentParams::maxRefFramesNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxRefFrames.has_value();
}

void GetHlsVideoSegmentParams::setMaxRefFramesNull() {
	m_maxRefFrames = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::maxVideoBitDepth() const {
	return m_maxVideoBitDepth.value();
}

void GetHlsVideoSegmentParams::setMaxVideoBitDepth(qint32 newMaxVideoBitDepth)  {
	m_maxVideoBitDepth = newMaxVideoBitDepth;
}

bool GetHlsVideoSegmentParams::maxVideoBitDepthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_maxVideoBitDepth.has_value();
}

void GetHlsVideoSegmentParams::setMaxVideoBitDepthNull() {
	m_maxVideoBitDepth = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::mediaSourceId() const {
	return m_mediaSourceId;
}

void GetHlsVideoSegmentParams::setMediaSourceId(QString newMediaSourceId)  {
	m_mediaSourceId = newMediaSourceId;
}

bool GetHlsVideoSegmentParams::mediaSourceIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_mediaSourceId.isNull();
}

void GetHlsVideoSegmentParams::setMediaSourceIdNull() {
	m_mediaSourceId.clear();
}


const qint32 &GetHlsVideoSegmentParams::minSegments() const {
	return m_minSegments.value();
}

void GetHlsVideoSegmentParams::setMinSegments(qint32 newMinSegments)  {
	m_minSegments = newMinSegments;
}

bool GetHlsVideoSegmentParams::minSegmentsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_minSegments.has_value();
}

void GetHlsVideoSegmentParams::setMinSegmentsNull() {
	m_minSegments = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::params() const {
	return m_params;
}

void GetHlsVideoSegmentParams::setParams(QString newParams)  {
	m_params = newParams;
}

bool GetHlsVideoSegmentParams::paramsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_params.isNull();
}

void GetHlsVideoSegmentParams::setParamsNull() {
	m_params.clear();
}


const QString &GetHlsVideoSegmentParams::playSessionId() const {
	return m_playSessionId;
}

void GetHlsVideoSegmentParams::setPlaySessionId(QString newPlaySessionId)  {
	m_playSessionId = newPlaySessionId;
}

bool GetHlsVideoSegmentParams::playSessionIdNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_playSessionId.isNull();
}

void GetHlsVideoSegmentParams::setPlaySessionIdNull() {
	m_playSessionId.clear();
}


const QString &GetHlsVideoSegmentParams::profile() const {
	return m_profile;
}

void GetHlsVideoSegmentParams::setProfile(QString newProfile)  {
	m_profile = newProfile;
}

bool GetHlsVideoSegmentParams::profileNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_profile.isNull();
}

void GetHlsVideoSegmentParams::setProfileNull() {
	m_profile.clear();
}


const bool &GetHlsVideoSegmentParams::requireAvc() const {
	return m_requireAvc.value();
}

void GetHlsVideoSegmentParams::setRequireAvc(bool newRequireAvc)  {
	m_requireAvc = newRequireAvc;
}

bool GetHlsVideoSegmentParams::requireAvcNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireAvc.has_value();
}

void GetHlsVideoSegmentParams::setRequireAvcNull() {
	m_requireAvc = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::requireNonAnamorphic() const {
	return m_requireNonAnamorphic.value();
}

void GetHlsVideoSegmentParams::setRequireNonAnamorphic(bool newRequireNonAnamorphic)  {
	m_requireNonAnamorphic = newRequireNonAnamorphic;
}

bool GetHlsVideoSegmentParams::requireNonAnamorphicNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_requireNonAnamorphic.has_value();
}

void GetHlsVideoSegmentParams::setRequireNonAnamorphicNull() {
	m_requireNonAnamorphic = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::segmentContainer() const {
	return m_segmentContainer;
}

void GetHlsVideoSegmentParams::setSegmentContainer(QString newSegmentContainer)  {
	m_segmentContainer = newSegmentContainer;
}

bool GetHlsVideoSegmentParams::segmentContainerNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_segmentContainer.isNull();
}

void GetHlsVideoSegmentParams::setSegmentContainerNull() {
	m_segmentContainer.clear();
}


const qint32 &GetHlsVideoSegmentParams::segmentLength() const {
	return m_segmentLength.value();
}

void GetHlsVideoSegmentParams::setSegmentLength(qint32 newSegmentLength)  {
	m_segmentLength = newSegmentLength;
}

bool GetHlsVideoSegmentParams::segmentLengthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_segmentLength.has_value();
}

void GetHlsVideoSegmentParams::setSegmentLengthNull() {
	m_segmentLength = std::nullopt;
}


const qint64 &GetHlsVideoSegmentParams::startTimeTicks() const {
	return m_startTimeTicks.value();
}

void GetHlsVideoSegmentParams::setStartTimeTicks(qint64 newStartTimeTicks)  {
	m_startTimeTicks = newStartTimeTicks;
}

bool GetHlsVideoSegmentParams::startTimeTicksNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_startTimeTicks.has_value();
}

void GetHlsVideoSegmentParams::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;
}


const bool &GetHlsVideoSegmentParams::staticStreaming() const {
	return m_staticStreaming.value();
}

void GetHlsVideoSegmentParams::setStaticStreaming(bool newStaticStreaming)  {
	m_staticStreaming = newStaticStreaming;
}

bool GetHlsVideoSegmentParams::staticStreamingNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_staticStreaming.has_value();
}

void GetHlsVideoSegmentParams::setStaticStreamingNull() {
	m_staticStreaming = std::nullopt;
}


const QJsonObject &GetHlsVideoSegmentParams::streamOptions() const {
	return m_streamOptions;
}

void GetHlsVideoSegmentParams::setStreamOptions(QJsonObject newStreamOptions)  {
	m_streamOptions = newStreamOptions;
}

bool GetHlsVideoSegmentParams::streamOptionsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_streamOptions.isEmpty();
}

void GetHlsVideoSegmentParams::setStreamOptionsNull() {
	m_streamOptions= QJsonObject();
}


const QString &GetHlsVideoSegmentParams::subtitleCodec() const {
	return m_subtitleCodec;
}

void GetHlsVideoSegmentParams::setSubtitleCodec(QString newSubtitleCodec)  {
	m_subtitleCodec = newSubtitleCodec;
}

bool GetHlsVideoSegmentParams::subtitleCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleCodec.isNull();
}

void GetHlsVideoSegmentParams::setSubtitleCodecNull() {
	m_subtitleCodec.clear();
}


const SubtitleDeliveryMethod &GetHlsVideoSegmentParams::subtitleMethod() const {
	return m_subtitleMethod;
}

void GetHlsVideoSegmentParams::setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod)  {
	m_subtitleMethod = newSubtitleMethod;
}

bool GetHlsVideoSegmentParams::subtitleMethodNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_subtitleMethod== SubtitleDeliveryMethod::EnumNotSet;
}

void GetHlsVideoSegmentParams::setSubtitleMethodNull() {
	m_subtitleMethod= SubtitleDeliveryMethod::EnumNotSet;
}


const qint32 &GetHlsVideoSegmentParams::subtitleStreamIndex() const {
	return m_subtitleStreamIndex.value();
}

void GetHlsVideoSegmentParams::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex)  {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}

bool GetHlsVideoSegmentParams::subtitleStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_subtitleStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::tag() const {
	return m_tag;
}

void GetHlsVideoSegmentParams::setTag(QString newTag)  {
	m_tag = newTag;
}

bool GetHlsVideoSegmentParams::tagNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_tag.isNull();
}

void GetHlsVideoSegmentParams::setTagNull() {
	m_tag.clear();
}


const QString &GetHlsVideoSegmentParams::transcodeReasons() const {
	return m_transcodeReasons;
}

void GetHlsVideoSegmentParams::setTranscodeReasons(QString newTranscodeReasons)  {
	m_transcodeReasons = newTranscodeReasons;
}

bool GetHlsVideoSegmentParams::transcodeReasonsNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_transcodeReasons.isNull();
}

void GetHlsVideoSegmentParams::setTranscodeReasonsNull() {
	m_transcodeReasons.clear();
}


const qint32 &GetHlsVideoSegmentParams::transcodingMaxAudioChannels() const {
	return m_transcodingMaxAudioChannels.value();
}

void GetHlsVideoSegmentParams::setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels)  {
	m_transcodingMaxAudioChannels = newTranscodingMaxAudioChannels;
}

bool GetHlsVideoSegmentParams::transcodingMaxAudioChannelsNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_transcodingMaxAudioChannels.has_value();
}

void GetHlsVideoSegmentParams::setTranscodingMaxAudioChannelsNull() {
	m_transcodingMaxAudioChannels = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::videoBitRate() const {
	return m_videoBitRate.value();
}

void GetHlsVideoSegmentParams::setVideoBitRate(qint32 newVideoBitRate)  {
	m_videoBitRate = newVideoBitRate;
}

bool GetHlsVideoSegmentParams::videoBitRateNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoBitRate.has_value();
}

void GetHlsVideoSegmentParams::setVideoBitRateNull() {
	m_videoBitRate = std::nullopt;
}


const QString &GetHlsVideoSegmentParams::videoCodec() const {
	return m_videoCodec;
}

void GetHlsVideoSegmentParams::setVideoCodec(QString newVideoCodec)  {
	m_videoCodec = newVideoCodec;
}

bool GetHlsVideoSegmentParams::videoCodecNull() const {
	// Nullable: true
	// Type Nullable: true
	

	return m_videoCodec.isNull();
}

void GetHlsVideoSegmentParams::setVideoCodecNull() {
	m_videoCodec.clear();
}


const qint32 &GetHlsVideoSegmentParams::videoStreamIndex() const {
	return m_videoStreamIndex.value();
}

void GetHlsVideoSegmentParams::setVideoStreamIndex(qint32 newVideoStreamIndex)  {
	m_videoStreamIndex = newVideoStreamIndex;
}

bool GetHlsVideoSegmentParams::videoStreamIndexNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_videoStreamIndex.has_value();
}

void GetHlsVideoSegmentParams::setVideoStreamIndexNull() {
	m_videoStreamIndex = std::nullopt;
}


const qint32 &GetHlsVideoSegmentParams::width() const {
	return m_width.value();
}

void GetHlsVideoSegmentParams::setWidth(qint32 newWidth)  {
	m_width = newWidth;
}

bool GetHlsVideoSegmentParams::widthNull() const {
	// Nullable: true
	// Type Nullable: false
	

	return !m_width.has_value();
}

void GetHlsVideoSegmentParams::setWidthNull() {
	m_width = std::nullopt;
}



} // NS Loader
} // NS Jellyfin