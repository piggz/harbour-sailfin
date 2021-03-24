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

#ifndef JELLYFIN_DTO_USERPOLICY_H
#define JELLYFIN_DTO_USERPOLICY_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/accessschedule.h"
#include "JellyfinQt/DTO/syncplayuseraccesstype.h"
#include "JellyfinQt/DTO/unrateditem.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class UserPolicy {
public:UserPolicy();UserPolicy(const UserPolicy &other);
	
	static UserPolicy fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets a value indicating whether this instance is administrator.
	 */
	bool isAdministrator() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is administrator.
	*/
	void setIsAdministrator(bool newIsAdministrator);
	/**
	 * @brief Gets or sets a value indicating whether this instance is hidden.
	 */
	bool isHidden() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is hidden.
	*/
	void setIsHidden(bool newIsHidden);
	/**
	 * @brief Gets or sets a value indicating whether this instance is disabled.
	 */
	bool isDisabled() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is disabled.
	*/
	void setIsDisabled(bool newIsDisabled);
	/**
	 * @brief Gets or sets the max parental rating.
	 */
	qint32 maxParentalRating() const;
	/**
	* @brief Gets or sets the max parental rating.
	*/
	void setMaxParentalRating(qint32 newMaxParentalRating);

	QStringList blockedTags() const;

	void setBlockedTags(QStringList newBlockedTags);

	bool enableUserPreferenceAccess() const;

	void setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess);

	QList<QSharedPointer<AccessSchedule>> accessSchedules() const;

	void setAccessSchedules(QList<QSharedPointer<AccessSchedule>> newAccessSchedules);

	QList<UnratedItem> blockUnratedItems() const;

	void setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems);

	bool enableRemoteControlOfOtherUsers() const;

	void setEnableRemoteControlOfOtherUsers(bool newEnableRemoteControlOfOtherUsers);

	bool enableSharedDeviceControl() const;

	void setEnableSharedDeviceControl(bool newEnableSharedDeviceControl);

	bool enableRemoteAccess() const;

	void setEnableRemoteAccess(bool newEnableRemoteAccess);

	bool enableLiveTvManagement() const;

	void setEnableLiveTvManagement(bool newEnableLiveTvManagement);

	bool enableLiveTvAccess() const;

	void setEnableLiveTvAccess(bool newEnableLiveTvAccess);

	bool enableMediaPlayback() const;

	void setEnableMediaPlayback(bool newEnableMediaPlayback);

	bool enableAudioPlaybackTranscoding() const;

	void setEnableAudioPlaybackTranscoding(bool newEnableAudioPlaybackTranscoding);

	bool enableVideoPlaybackTranscoding() const;

	void setEnableVideoPlaybackTranscoding(bool newEnableVideoPlaybackTranscoding);

	bool enablePlaybackRemuxing() const;

	void setEnablePlaybackRemuxing(bool newEnablePlaybackRemuxing);

	bool forceRemoteSourceTranscoding() const;

	void setForceRemoteSourceTranscoding(bool newForceRemoteSourceTranscoding);

	bool enableContentDeletion() const;

	void setEnableContentDeletion(bool newEnableContentDeletion);

	QStringList enableContentDeletionFromFolders() const;

	void setEnableContentDeletionFromFolders(QStringList newEnableContentDeletionFromFolders);

	bool enableContentDownloading() const;

	void setEnableContentDownloading(bool newEnableContentDownloading);
	/**
	 * @brief Gets or sets a value indicating whether [enable synchronize].
	 */
	bool enableSyncTranscoding() const;
	/**
	* @brief Gets or sets a value indicating whether [enable synchronize].
	*/
	void setEnableSyncTranscoding(bool newEnableSyncTranscoding);

	bool enableMediaConversion() const;

	void setEnableMediaConversion(bool newEnableMediaConversion);

	QStringList enabledDevices() const;

	void setEnabledDevices(QStringList newEnabledDevices);

	bool enableAllDevices() const;

	void setEnableAllDevices(bool newEnableAllDevices);

	QList<QUuid> enabledChannels() const;

	void setEnabledChannels(QList<QUuid> newEnabledChannels);

	bool enableAllChannels() const;

	void setEnableAllChannels(bool newEnableAllChannels);

	QList<QUuid> enabledFolders() const;

	void setEnabledFolders(QList<QUuid> newEnabledFolders);

	bool enableAllFolders() const;

	void setEnableAllFolders(bool newEnableAllFolders);

	qint32 invalidLoginAttemptCount() const;

	void setInvalidLoginAttemptCount(qint32 newInvalidLoginAttemptCount);

	qint32 loginAttemptsBeforeLockout() const;

	void setLoginAttemptsBeforeLockout(qint32 newLoginAttemptsBeforeLockout);

	qint32 maxActiveSessions() const;

	void setMaxActiveSessions(qint32 newMaxActiveSessions);

	bool enablePublicSharing() const;

	void setEnablePublicSharing(bool newEnablePublicSharing);

	QList<QUuid> blockedMediaFolders() const;

	void setBlockedMediaFolders(QList<QUuid> newBlockedMediaFolders);

	QList<QUuid> blockedChannels() const;

	void setBlockedChannels(QList<QUuid> newBlockedChannels);

	qint32 remoteClientBitrateLimit() const;

	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);

	QString authenticationProviderId() const;

	void setAuthenticationProviderId(QString newAuthenticationProviderId);

	QString passwordResetProviderId() const;

	void setPasswordResetProviderId(QString newPasswordResetProviderId);

	SyncPlayUserAccessType syncPlayAccess() const;

	void setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess);

protected:
	bool m_isAdministrator;
	bool m_isHidden;
	bool m_isDisabled;
	qint32 m_maxParentalRating;
	QStringList m_blockedTags;
	bool m_enableUserPreferenceAccess;
	QList<QSharedPointer<AccessSchedule>> m_accessSchedules;
	QList<UnratedItem> m_blockUnratedItems;
	bool m_enableRemoteControlOfOtherUsers;
	bool m_enableSharedDeviceControl;
	bool m_enableRemoteAccess;
	bool m_enableLiveTvManagement;
	bool m_enableLiveTvAccess;
	bool m_enableMediaPlayback;
	bool m_enableAudioPlaybackTranscoding;
	bool m_enableVideoPlaybackTranscoding;
	bool m_enablePlaybackRemuxing;
	bool m_forceRemoteSourceTranscoding;
	bool m_enableContentDeletion;
	QStringList m_enableContentDeletionFromFolders;
	bool m_enableContentDownloading;
	bool m_enableSyncTranscoding;
	bool m_enableMediaConversion;
	QStringList m_enabledDevices;
	bool m_enableAllDevices;
	QList<QUuid> m_enabledChannels;
	bool m_enableAllChannels;
	QList<QUuid> m_enabledFolders;
	bool m_enableAllFolders;
	qint32 m_invalidLoginAttemptCount;
	qint32 m_loginAttemptsBeforeLockout;
	qint32 m_maxActiveSessions;
	bool m_enablePublicSharing;
	QList<QUuid> m_blockedMediaFolders;
	QList<QUuid> m_blockedChannels;
	qint32 m_remoteClientBitrateLimit;
	QString m_authenticationProviderId;
	QString m_passwordResetProviderId;
	SyncPlayUserAccessType m_syncPlayAccess;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_USERPOLICY_H
