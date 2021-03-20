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

#ifndef JELLYFIN_DTO_LIBRARYOPTIONS_H
#define JELLYFIN_DTO_LIBRARYOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/mediapathinfo.h"
#include "JellyfinQt/DTO/typeoptions.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class LibraryOptions {
public:
	explicit LibraryOptions();
	static LibraryOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	bool enablePhotos() const;

	void setEnablePhotos(bool newEnablePhotos);

	bool enableRealtimeMonitor() const;

	void setEnableRealtimeMonitor(bool newEnableRealtimeMonitor);

	bool enableChapterImageExtraction() const;

	void setEnableChapterImageExtraction(bool newEnableChapterImageExtraction);

	bool extractChapterImagesDuringLibraryScan() const;

	void setExtractChapterImagesDuringLibraryScan(bool newExtractChapterImagesDuringLibraryScan);

	QList<QSharedPointer<MediaPathInfo>> pathInfos() const;

	void setPathInfos(QList<QSharedPointer<MediaPathInfo>> newPathInfos);

	bool saveLocalMetadata() const;

	void setSaveLocalMetadata(bool newSaveLocalMetadata);

	bool enableInternetProviders() const;

	void setEnableInternetProviders(bool newEnableInternetProviders);

	bool enableAutomaticSeriesGrouping() const;

	void setEnableAutomaticSeriesGrouping(bool newEnableAutomaticSeriesGrouping);

	bool enableEmbeddedTitles() const;

	void setEnableEmbeddedTitles(bool newEnableEmbeddedTitles);

	bool enableEmbeddedEpisodeInfos() const;

	void setEnableEmbeddedEpisodeInfos(bool newEnableEmbeddedEpisodeInfos);

	qint32 automaticRefreshIntervalDays() const;

	void setAutomaticRefreshIntervalDays(qint32 newAutomaticRefreshIntervalDays);
	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	QString preferredMetadataLanguage() const;
	/**
	* @brief Gets or sets the preferred metadata language.
	*/
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);

	QString seasonZeroDisplayName() const;

	void setSeasonZeroDisplayName(QString newSeasonZeroDisplayName);

	QStringList metadataSavers() const;

	void setMetadataSavers(QStringList newMetadataSavers);

	QStringList disabledLocalMetadataReaders() const;

	void setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders);

	QStringList localMetadataReaderOrder() const;

	void setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder);

	QStringList disabledSubtitleFetchers() const;

	void setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers);

	QStringList subtitleFetcherOrder() const;

	void setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder);

	bool skipSubtitlesIfEmbeddedSubtitlesPresent() const;

	void setSkipSubtitlesIfEmbeddedSubtitlesPresent(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent);

	bool skipSubtitlesIfAudioTrackMatches() const;

	void setSkipSubtitlesIfAudioTrackMatches(bool newSkipSubtitlesIfAudioTrackMatches);

	QStringList subtitleDownloadLanguages() const;

	void setSubtitleDownloadLanguages(QStringList newSubtitleDownloadLanguages);

	bool requirePerfectSubtitleMatch() const;

	void setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch);

	bool saveSubtitlesWithMedia() const;

	void setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia);

	QList<QSharedPointer<TypeOptions>> typeOptions() const;

	void setTypeOptions(QList<QSharedPointer<TypeOptions>> newTypeOptions);

protected:
	bool m_enablePhotos;
	bool m_enableRealtimeMonitor;
	bool m_enableChapterImageExtraction;
	bool m_extractChapterImagesDuringLibraryScan;
	QList<QSharedPointer<MediaPathInfo>> m_pathInfos;
	bool m_saveLocalMetadata;
	bool m_enableInternetProviders;
	bool m_enableAutomaticSeriesGrouping;
	bool m_enableEmbeddedTitles;
	bool m_enableEmbeddedEpisodeInfos;
	qint32 m_automaticRefreshIntervalDays;
	QString m_preferredMetadataLanguage;
	QString m_metadataCountryCode;
	QString m_seasonZeroDisplayName;
	QStringList m_metadataSavers;
	QStringList m_disabledLocalMetadataReaders;
	QStringList m_localMetadataReaderOrder;
	QStringList m_disabledSubtitleFetchers;
	QStringList m_subtitleFetcherOrder;
	bool m_skipSubtitlesIfEmbeddedSubtitlesPresent;
	bool m_skipSubtitlesIfAudioTrackMatches;
	QStringList m_subtitleDownloadLanguages;
	bool m_requirePerfectSubtitleMatch;
	bool m_saveSubtitlesWithMedia;
	QList<QSharedPointer<TypeOptions>> m_typeOptions;
};

} // NS DTO

namespace Support {

using LibraryOptions = Jellyfin::DTO::LibraryOptions;

template <>
LibraryOptions fromJsonValue<LibraryOptions>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return LibraryOptions::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYOPTIONS_H
