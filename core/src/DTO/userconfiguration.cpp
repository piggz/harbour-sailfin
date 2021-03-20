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

#include <JellyfinQt/DTO/userconfiguration.h>

namespace Jellyfin {
namespace DTO {

UserConfiguration::UserConfiguration(QObject *parent) {}

UserConfiguration UserConfiguration::fromJson(QJsonObject source) {UserConfiguration instance;
	instance->setFromJson(source, false);
	return instance;
}


void UserConfiguration::setFromJson(QJsonObject source) {
	m_audioLanguagePreference = fromJsonValue<QString>(source["AudioLanguagePreference"]);
	m_playDefaultAudioTrack = fromJsonValue<bool>(source["PlayDefaultAudioTrack"]);
	m_subtitleLanguagePreference = fromJsonValue<QString>(source["SubtitleLanguagePreference"]);
	m_displayMissingEpisodes = fromJsonValue<bool>(source["DisplayMissingEpisodes"]);
	m_groupedFolders = fromJsonValue<QStringList>(source["GroupedFolders"]);
	m_subtitleMode = fromJsonValue<SubtitlePlaybackMode>(source["SubtitleMode"]);
	m_displayCollectionsView = fromJsonValue<bool>(source["DisplayCollectionsView"]);
	m_enableLocalPassword = fromJsonValue<bool>(source["EnableLocalPassword"]);
	m_orderedViews = fromJsonValue<QStringList>(source["OrderedViews"]);
	m_latestItemsExcludes = fromJsonValue<QStringList>(source["LatestItemsExcludes"]);
	m_myMediaExcludes = fromJsonValue<QStringList>(source["MyMediaExcludes"]);
	m_hidePlayedInLatest = fromJsonValue<bool>(source["HidePlayedInLatest"]);
	m_rememberAudioSelections = fromJsonValue<bool>(source["RememberAudioSelections"]);
	m_rememberSubtitleSelections = fromJsonValue<bool>(source["RememberSubtitleSelections"]);
	m_enableNextEpisodeAutoPlay = fromJsonValue<bool>(source["EnableNextEpisodeAutoPlay"]);

}
	
QJsonObject UserConfiguration::toJson() {
	QJsonObject result;
	result["AudioLanguagePreference"] = toJsonValue<QString>(m_audioLanguagePreference);
	result["PlayDefaultAudioTrack"] = toJsonValue<bool>(m_playDefaultAudioTrack);
	result["SubtitleLanguagePreference"] = toJsonValue<QString>(m_subtitleLanguagePreference);
	result["DisplayMissingEpisodes"] = toJsonValue<bool>(m_displayMissingEpisodes);
	result["GroupedFolders"] = toJsonValue<QStringList>(m_groupedFolders);
	result["SubtitleMode"] = toJsonValue<SubtitlePlaybackMode>(m_subtitleMode);
	result["DisplayCollectionsView"] = toJsonValue<bool>(m_displayCollectionsView);
	result["EnableLocalPassword"] = toJsonValue<bool>(m_enableLocalPassword);
	result["OrderedViews"] = toJsonValue<QStringList>(m_orderedViews);
	result["LatestItemsExcludes"] = toJsonValue<QStringList>(m_latestItemsExcludes);
	result["MyMediaExcludes"] = toJsonValue<QStringList>(m_myMediaExcludes);
	result["HidePlayedInLatest"] = toJsonValue<bool>(m_hidePlayedInLatest);
	result["RememberAudioSelections"] = toJsonValue<bool>(m_rememberAudioSelections);
	result["RememberSubtitleSelections"] = toJsonValue<bool>(m_rememberSubtitleSelections);
	result["EnableNextEpisodeAutoPlay"] = toJsonValue<bool>(m_enableNextEpisodeAutoPlay);

	return result;
}

QString UserConfiguration::audioLanguagePreference() const { return m_audioLanguagePreference; }

void UserConfiguration::setAudioLanguagePreference(QString newAudioLanguagePreference) {
	m_audioLanguagePreference = newAudioLanguagePreference;
}
bool UserConfiguration::playDefaultAudioTrack() const { return m_playDefaultAudioTrack; }

void UserConfiguration::setPlayDefaultAudioTrack(bool newPlayDefaultAudioTrack) {
	m_playDefaultAudioTrack = newPlayDefaultAudioTrack;
}
QString UserConfiguration::subtitleLanguagePreference() const { return m_subtitleLanguagePreference; }

void UserConfiguration::setSubtitleLanguagePreference(QString newSubtitleLanguagePreference) {
	m_subtitleLanguagePreference = newSubtitleLanguagePreference;
}
bool UserConfiguration::displayMissingEpisodes() const { return m_displayMissingEpisodes; }

void UserConfiguration::setDisplayMissingEpisodes(bool newDisplayMissingEpisodes) {
	m_displayMissingEpisodes = newDisplayMissingEpisodes;
}
QStringList UserConfiguration::groupedFolders() const { return m_groupedFolders; }

void UserConfiguration::setGroupedFolders(QStringList newGroupedFolders) {
	m_groupedFolders = newGroupedFolders;
}
SubtitlePlaybackMode UserConfiguration::subtitleMode() const { return m_subtitleMode; }

void UserConfiguration::setSubtitleMode(SubtitlePlaybackMode newSubtitleMode) {
	m_subtitleMode = newSubtitleMode;
}
bool UserConfiguration::displayCollectionsView() const { return m_displayCollectionsView; }

void UserConfiguration::setDisplayCollectionsView(bool newDisplayCollectionsView) {
	m_displayCollectionsView = newDisplayCollectionsView;
}
bool UserConfiguration::enableLocalPassword() const { return m_enableLocalPassword; }

void UserConfiguration::setEnableLocalPassword(bool newEnableLocalPassword) {
	m_enableLocalPassword = newEnableLocalPassword;
}
QStringList UserConfiguration::orderedViews() const { return m_orderedViews; }

void UserConfiguration::setOrderedViews(QStringList newOrderedViews) {
	m_orderedViews = newOrderedViews;
}
QStringList UserConfiguration::latestItemsExcludes() const { return m_latestItemsExcludes; }

void UserConfiguration::setLatestItemsExcludes(QStringList newLatestItemsExcludes) {
	m_latestItemsExcludes = newLatestItemsExcludes;
}
QStringList UserConfiguration::myMediaExcludes() const { return m_myMediaExcludes; }

void UserConfiguration::setMyMediaExcludes(QStringList newMyMediaExcludes) {
	m_myMediaExcludes = newMyMediaExcludes;
}
bool UserConfiguration::hidePlayedInLatest() const { return m_hidePlayedInLatest; }

void UserConfiguration::setHidePlayedInLatest(bool newHidePlayedInLatest) {
	m_hidePlayedInLatest = newHidePlayedInLatest;
}
bool UserConfiguration::rememberAudioSelections() const { return m_rememberAudioSelections; }

void UserConfiguration::setRememberAudioSelections(bool newRememberAudioSelections) {
	m_rememberAudioSelections = newRememberAudioSelections;
}
bool UserConfiguration::rememberSubtitleSelections() const { return m_rememberSubtitleSelections; }

void UserConfiguration::setRememberSubtitleSelections(bool newRememberSubtitleSelections) {
	m_rememberSubtitleSelections = newRememberSubtitleSelections;
}
bool UserConfiguration::enableNextEpisodeAutoPlay() const { return m_enableNextEpisodeAutoPlay; }

void UserConfiguration::setEnableNextEpisodeAutoPlay(bool newEnableNextEpisodeAutoPlay) {
	m_enableNextEpisodeAutoPlay = newEnableNextEpisodeAutoPlay;
}


} // NS Jellyfin
} // NS DTO
