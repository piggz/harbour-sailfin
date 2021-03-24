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

#include <JellyfinQt/DTO/serverconfiguration.h>

namespace Jellyfin {
namespace DTO {

ServerConfiguration::ServerConfiguration() {}
ServerConfiguration::ServerConfiguration(const ServerConfiguration &other) :
	m_logFileRetentionDays(other.m_logFileRetentionDays),
	m_isStartupWizardCompleted(other.m_isStartupWizardCompleted),
	m_cachePath(other.m_cachePath),
	m_previousVersion(other.m_previousVersion),
	m_previousVersionStr(other.m_previousVersionStr),
	m_enableUPnP(other.m_enableUPnP),
	m_enableMetrics(other.m_enableMetrics),
	m_publicPort(other.m_publicPort),
	m_uPnPCreateHttpPortMap(other.m_uPnPCreateHttpPortMap),
	m_uDPPortRange(other.m_uDPPortRange),
	m_enableIPV6(other.m_enableIPV6),
	m_enableIPV4(other.m_enableIPV4),
	m_enableSSDPTracing(other.m_enableSSDPTracing),
	m_sSDPTracingFilter(other.m_sSDPTracingFilter),
	m_uDPSendCount(other.m_uDPSendCount),
	m_uDPSendDelay(other.m_uDPSendDelay),
	m_ignoreVirtualInterfaces(other.m_ignoreVirtualInterfaces),
	m_virtualInterfaceNames(other.m_virtualInterfaceNames),
	m_gatewayMonitorPeriod(other.m_gatewayMonitorPeriod),
	m_enableMultiSocketBinding(other.m_enableMultiSocketBinding),
	m_trustAllIP6Interfaces(other.m_trustAllIP6Interfaces),
	m_hDHomerunPortRange(other.m_hDHomerunPortRange),
	m_publishedServerUriBySubnet(other.m_publishedServerUriBySubnet),
	m_autoDiscoveryTracing(other.m_autoDiscoveryTracing),
	m_autoDiscovery(other.m_autoDiscovery),
	m_publicHttpsPort(other.m_publicHttpsPort),
	m_httpServerPortNumber(other.m_httpServerPortNumber),
	m_httpsPortNumber(other.m_httpsPortNumber),
	m_enableHttps(other.m_enableHttps),
	m_enableNormalizedItemByNameIds(other.m_enableNormalizedItemByNameIds),
	m_certificatePath(other.m_certificatePath),
	m_certificatePassword(other.m_certificatePassword),
	m_isPortAuthorized(other.m_isPortAuthorized),
	m_quickConnectAvailable(other.m_quickConnectAvailable),
	m_enableRemoteAccess(other.m_enableRemoteAccess),
	m_enableCaseSensitiveItemIds(other.m_enableCaseSensitiveItemIds),
	m_disableLiveTvChannelUserDataName(other.m_disableLiveTvChannelUserDataName),
	m_metadataPath(other.m_metadataPath),
	m_metadataNetworkPath(other.m_metadataNetworkPath),
	m_preferredMetadataLanguage(other.m_preferredMetadataLanguage),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_sortReplaceCharacters(other.m_sortReplaceCharacters),
	m_sortRemoveCharacters(other.m_sortRemoveCharacters),
	m_sortRemoveWords(other.m_sortRemoveWords),
	m_minResumePct(other.m_minResumePct),
	m_maxResumePct(other.m_maxResumePct),
	m_minResumeDurationSeconds(other.m_minResumeDurationSeconds),
	m_minAudiobookResume(other.m_minAudiobookResume),
	m_maxAudiobookResume(other.m_maxAudiobookResume),
	m_libraryMonitorDelay(other.m_libraryMonitorDelay),
	m_enableDashboardResponseCaching(other.m_enableDashboardResponseCaching),
	m_imageSavingConvention(other.m_imageSavingConvention),
	m_metadataOptions(other.m_metadataOptions),
	m_skipDeserializationForBasicTypes(other.m_skipDeserializationForBasicTypes),
	m_serverName(other.m_serverName),
	m_baseUrl(other.m_baseUrl),
	m_uICulture(other.m_uICulture),
	m_saveMetadataHidden(other.m_saveMetadataHidden),
	m_contentTypes(other.m_contentTypes),
	m_remoteClientBitrateLimit(other.m_remoteClientBitrateLimit),
	m_enableFolderView(other.m_enableFolderView),
	m_enableGroupingIntoCollections(other.m_enableGroupingIntoCollections),
	m_displaySpecialsWithinSeasons(other.m_displaySpecialsWithinSeasons),
	m_localNetworkSubnets(other.m_localNetworkSubnets),
	m_localNetworkAddresses(other.m_localNetworkAddresses),
	m_codecsUsed(other.m_codecsUsed),
	m_pluginRepositories(other.m_pluginRepositories),
	m_enableExternalContentInSuggestions(other.m_enableExternalContentInSuggestions),
	m_requireHttps(other.m_requireHttps),
	m_enableNewOmdbSupport(other.m_enableNewOmdbSupport),
	m_remoteIPFilter(other.m_remoteIPFilter),
	m_isRemoteIPFilterBlacklist(other.m_isRemoteIPFilterBlacklist),
	m_imageExtractionTimeoutMs(other.m_imageExtractionTimeoutMs),
	m_pathSubstitutions(other.m_pathSubstitutions),
	m_enableSimpleArtistDetection(other.m_enableSimpleArtistDetection),
	m_uninstalledPlugins(other.m_uninstalledPlugins),
	m_enableSlowResponseWarning(other.m_enableSlowResponseWarning),
	m_slowResponseThresholdMs(other.m_slowResponseThresholdMs),
	m_corsHosts(other.m_corsHosts),
	m_knownProxies(other.m_knownProxies),
	m_activityLogRetentionDays(other.m_activityLogRetentionDays),
	m_libraryScanFanoutConcurrency(other.m_libraryScanFanoutConcurrency),
	m_libraryMetadataRefreshConcurrency(other.m_libraryMetadataRefreshConcurrency),
	m_removeOldPlugins(other.m_removeOldPlugins),
	m_disablePluginImages(other.m_disablePluginImages){}

ServerConfiguration ServerConfiguration::fromJson(QJsonObject source) {
	ServerConfiguration instance;
	instance.setFromJson(source);
	return instance;
}


void ServerConfiguration::setFromJson(QJsonObject source) {
	m_logFileRetentionDays = Jellyfin::Support::fromJsonValue<qint32>(source["LogFileRetentionDays"]);
	m_isStartupWizardCompleted = Jellyfin::Support::fromJsonValue<bool>(source["IsStartupWizardCompleted"]);
	m_cachePath = Jellyfin::Support::fromJsonValue<QString>(source["CachePath"]);
	m_previousVersion = Jellyfin::Support::fromJsonValue<QSharedPointer<Version>>(source["PreviousVersion"]);
	m_previousVersionStr = Jellyfin::Support::fromJsonValue<QString>(source["PreviousVersionStr"]);
	m_enableUPnP = Jellyfin::Support::fromJsonValue<bool>(source["EnableUPnP"]);
	m_enableMetrics = Jellyfin::Support::fromJsonValue<bool>(source["EnableMetrics"]);
	m_publicPort = Jellyfin::Support::fromJsonValue<qint32>(source["PublicPort"]);
	m_uPnPCreateHttpPortMap = Jellyfin::Support::fromJsonValue<bool>(source["UPnPCreateHttpPortMap"]);
	m_uDPPortRange = Jellyfin::Support::fromJsonValue<QString>(source["UDPPortRange"]);
	m_enableIPV6 = Jellyfin::Support::fromJsonValue<bool>(source["EnableIPV6"]);
	m_enableIPV4 = Jellyfin::Support::fromJsonValue<bool>(source["EnableIPV4"]);
	m_enableSSDPTracing = Jellyfin::Support::fromJsonValue<bool>(source["EnableSSDPTracing"]);
	m_sSDPTracingFilter = Jellyfin::Support::fromJsonValue<QString>(source["SSDPTracingFilter"]);
	m_uDPSendCount = Jellyfin::Support::fromJsonValue<qint32>(source["UDPSendCount"]);
	m_uDPSendDelay = Jellyfin::Support::fromJsonValue<qint32>(source["UDPSendDelay"]);
	m_ignoreVirtualInterfaces = Jellyfin::Support::fromJsonValue<bool>(source["IgnoreVirtualInterfaces"]);
	m_virtualInterfaceNames = Jellyfin::Support::fromJsonValue<QString>(source["VirtualInterfaceNames"]);
	m_gatewayMonitorPeriod = Jellyfin::Support::fromJsonValue<qint32>(source["GatewayMonitorPeriod"]);
	m_enableMultiSocketBinding = Jellyfin::Support::fromJsonValue<bool>(source["EnableMultiSocketBinding"]);
	m_trustAllIP6Interfaces = Jellyfin::Support::fromJsonValue<bool>(source["TrustAllIP6Interfaces"]);
	m_hDHomerunPortRange = Jellyfin::Support::fromJsonValue<QString>(source["HDHomerunPortRange"]);
	m_publishedServerUriBySubnet = Jellyfin::Support::fromJsonValue<QStringList>(source["PublishedServerUriBySubnet"]);
	m_autoDiscoveryTracing = Jellyfin::Support::fromJsonValue<bool>(source["AutoDiscoveryTracing"]);
	m_autoDiscovery = Jellyfin::Support::fromJsonValue<bool>(source["AutoDiscovery"]);
	m_publicHttpsPort = Jellyfin::Support::fromJsonValue<qint32>(source["PublicHttpsPort"]);
	m_httpServerPortNumber = Jellyfin::Support::fromJsonValue<qint32>(source["HttpServerPortNumber"]);
	m_httpsPortNumber = Jellyfin::Support::fromJsonValue<qint32>(source["HttpsPortNumber"]);
	m_enableHttps = Jellyfin::Support::fromJsonValue<bool>(source["EnableHttps"]);
	m_enableNormalizedItemByNameIds = Jellyfin::Support::fromJsonValue<bool>(source["EnableNormalizedItemByNameIds"]);
	m_certificatePath = Jellyfin::Support::fromJsonValue<QString>(source["CertificatePath"]);
	m_certificatePassword = Jellyfin::Support::fromJsonValue<QString>(source["CertificatePassword"]);
	m_isPortAuthorized = Jellyfin::Support::fromJsonValue<bool>(source["IsPortAuthorized"]);
	m_quickConnectAvailable = Jellyfin::Support::fromJsonValue<bool>(source["QuickConnectAvailable"]);
	m_enableRemoteAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_enableCaseSensitiveItemIds = Jellyfin::Support::fromJsonValue<bool>(source["EnableCaseSensitiveItemIds"]);
	m_disableLiveTvChannelUserDataName = Jellyfin::Support::fromJsonValue<bool>(source["DisableLiveTvChannelUserDataName"]);
	m_metadataPath = Jellyfin::Support::fromJsonValue<QString>(source["MetadataPath"]);
	m_metadataNetworkPath = Jellyfin::Support::fromJsonValue<QString>(source["MetadataNetworkPath"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_sortReplaceCharacters = Jellyfin::Support::fromJsonValue<QStringList>(source["SortReplaceCharacters"]);
	m_sortRemoveCharacters = Jellyfin::Support::fromJsonValue<QStringList>(source["SortRemoveCharacters"]);
	m_sortRemoveWords = Jellyfin::Support::fromJsonValue<QStringList>(source["SortRemoveWords"]);
	m_minResumePct = Jellyfin::Support::fromJsonValue<qint32>(source["MinResumePct"]);
	m_maxResumePct = Jellyfin::Support::fromJsonValue<qint32>(source["MaxResumePct"]);
	m_minResumeDurationSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["MinResumeDurationSeconds"]);
	m_minAudiobookResume = Jellyfin::Support::fromJsonValue<qint32>(source["MinAudiobookResume"]);
	m_maxAudiobookResume = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAudiobookResume"]);
	m_libraryMonitorDelay = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryMonitorDelay"]);
	m_enableDashboardResponseCaching = Jellyfin::Support::fromJsonValue<bool>(source["EnableDashboardResponseCaching"]);
	m_imageSavingConvention = Jellyfin::Support::fromJsonValue<ImageSavingConvention>(source["ImageSavingConvention"]);
	m_metadataOptions = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<MetadataOptions>>>(source["MetadataOptions"]);
	m_skipDeserializationForBasicTypes = Jellyfin::Support::fromJsonValue<bool>(source["SkipDeserializationForBasicTypes"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_baseUrl = Jellyfin::Support::fromJsonValue<QString>(source["BaseUrl"]);
	m_uICulture = Jellyfin::Support::fromJsonValue<QString>(source["UICulture"]);
	m_saveMetadataHidden = Jellyfin::Support::fromJsonValue<bool>(source["SaveMetadataHidden"]);
	m_contentTypes = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameValuePair>>>(source["ContentTypes"]);
	m_remoteClientBitrateLimit = Jellyfin::Support::fromJsonValue<qint32>(source["RemoteClientBitrateLimit"]);
	m_enableFolderView = Jellyfin::Support::fromJsonValue<bool>(source["EnableFolderView"]);
	m_enableGroupingIntoCollections = Jellyfin::Support::fromJsonValue<bool>(source["EnableGroupingIntoCollections"]);
	m_displaySpecialsWithinSeasons = Jellyfin::Support::fromJsonValue<bool>(source["DisplaySpecialsWithinSeasons"]);
	m_localNetworkSubnets = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalNetworkSubnets"]);
	m_localNetworkAddresses = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalNetworkAddresses"]);
	m_codecsUsed = Jellyfin::Support::fromJsonValue<QStringList>(source["CodecsUsed"]);
	m_pluginRepositories = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<RepositoryInfo>>>(source["PluginRepositories"]);
	m_enableExternalContentInSuggestions = Jellyfin::Support::fromJsonValue<bool>(source["EnableExternalContentInSuggestions"]);
	m_requireHttps = Jellyfin::Support::fromJsonValue<bool>(source["RequireHttps"]);
	m_enableNewOmdbSupport = Jellyfin::Support::fromJsonValue<bool>(source["EnableNewOmdbSupport"]);
	m_remoteIPFilter = Jellyfin::Support::fromJsonValue<QStringList>(source["RemoteIPFilter"]);
	m_isRemoteIPFilterBlacklist = Jellyfin::Support::fromJsonValue<bool>(source["IsRemoteIPFilterBlacklist"]);
	m_imageExtractionTimeoutMs = Jellyfin::Support::fromJsonValue<qint32>(source["ImageExtractionTimeoutMs"]);
	m_pathSubstitutions = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<PathSubstitution>>>(source["PathSubstitutions"]);
	m_enableSimpleArtistDetection = Jellyfin::Support::fromJsonValue<bool>(source["EnableSimpleArtistDetection"]);
	m_uninstalledPlugins = Jellyfin::Support::fromJsonValue<QStringList>(source["UninstalledPlugins"]);
	m_enableSlowResponseWarning = Jellyfin::Support::fromJsonValue<bool>(source["EnableSlowResponseWarning"]);
	m_slowResponseThresholdMs = Jellyfin::Support::fromJsonValue<qint64>(source["SlowResponseThresholdMs"]);
	m_corsHosts = Jellyfin::Support::fromJsonValue<QStringList>(source["CorsHosts"]);
	m_knownProxies = Jellyfin::Support::fromJsonValue<QStringList>(source["KnownProxies"]);
	m_activityLogRetentionDays = Jellyfin::Support::fromJsonValue<qint32>(source["ActivityLogRetentionDays"]);
	m_libraryScanFanoutConcurrency = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryScanFanoutConcurrency"]);
	m_libraryMetadataRefreshConcurrency = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryMetadataRefreshConcurrency"]);
	m_removeOldPlugins = Jellyfin::Support::fromJsonValue<bool>(source["RemoveOldPlugins"]);
	m_disablePluginImages = Jellyfin::Support::fromJsonValue<bool>(source["DisablePluginImages"]);

}
	
QJsonObject ServerConfiguration::toJson() {
	QJsonObject result;
	result["LogFileRetentionDays"] = Jellyfin::Support::toJsonValue<qint32>(m_logFileRetentionDays);
	result["IsStartupWizardCompleted"] = Jellyfin::Support::toJsonValue<bool>(m_isStartupWizardCompleted);
	result["CachePath"] = Jellyfin::Support::toJsonValue<QString>(m_cachePath);
	result["PreviousVersion"] = Jellyfin::Support::toJsonValue<QSharedPointer<Version>>(m_previousVersion);
	result["PreviousVersionStr"] = Jellyfin::Support::toJsonValue<QString>(m_previousVersionStr);
	result["EnableUPnP"] = Jellyfin::Support::toJsonValue<bool>(m_enableUPnP);
	result["EnableMetrics"] = Jellyfin::Support::toJsonValue<bool>(m_enableMetrics);
	result["PublicPort"] = Jellyfin::Support::toJsonValue<qint32>(m_publicPort);
	result["UPnPCreateHttpPortMap"] = Jellyfin::Support::toJsonValue<bool>(m_uPnPCreateHttpPortMap);
	result["UDPPortRange"] = Jellyfin::Support::toJsonValue<QString>(m_uDPPortRange);
	result["EnableIPV6"] = Jellyfin::Support::toJsonValue<bool>(m_enableIPV6);
	result["EnableIPV4"] = Jellyfin::Support::toJsonValue<bool>(m_enableIPV4);
	result["EnableSSDPTracing"] = Jellyfin::Support::toJsonValue<bool>(m_enableSSDPTracing);
	result["SSDPTracingFilter"] = Jellyfin::Support::toJsonValue<QString>(m_sSDPTracingFilter);
	result["UDPSendCount"] = Jellyfin::Support::toJsonValue<qint32>(m_uDPSendCount);
	result["UDPSendDelay"] = Jellyfin::Support::toJsonValue<qint32>(m_uDPSendDelay);
	result["IgnoreVirtualInterfaces"] = Jellyfin::Support::toJsonValue<bool>(m_ignoreVirtualInterfaces);
	result["VirtualInterfaceNames"] = Jellyfin::Support::toJsonValue<QString>(m_virtualInterfaceNames);
	result["GatewayMonitorPeriod"] = Jellyfin::Support::toJsonValue<qint32>(m_gatewayMonitorPeriod);
	result["EnableMultiSocketBinding"] = Jellyfin::Support::toJsonValue<bool>(m_enableMultiSocketBinding);
	result["TrustAllIP6Interfaces"] = Jellyfin::Support::toJsonValue<bool>(m_trustAllIP6Interfaces);
	result["HDHomerunPortRange"] = Jellyfin::Support::toJsonValue<QString>(m_hDHomerunPortRange);
	result["PublishedServerUriBySubnet"] = Jellyfin::Support::toJsonValue<QStringList>(m_publishedServerUriBySubnet);
	result["AutoDiscoveryTracing"] = Jellyfin::Support::toJsonValue<bool>(m_autoDiscoveryTracing);
	result["AutoDiscovery"] = Jellyfin::Support::toJsonValue<bool>(m_autoDiscovery);
	result["PublicHttpsPort"] = Jellyfin::Support::toJsonValue<qint32>(m_publicHttpsPort);
	result["HttpServerPortNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_httpServerPortNumber);
	result["HttpsPortNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_httpsPortNumber);
	result["EnableHttps"] = Jellyfin::Support::toJsonValue<bool>(m_enableHttps);
	result["EnableNormalizedItemByNameIds"] = Jellyfin::Support::toJsonValue<bool>(m_enableNormalizedItemByNameIds);
	result["CertificatePath"] = Jellyfin::Support::toJsonValue<QString>(m_certificatePath);
	result["CertificatePassword"] = Jellyfin::Support::toJsonValue<QString>(m_certificatePassword);
	result["IsPortAuthorized"] = Jellyfin::Support::toJsonValue<bool>(m_isPortAuthorized);
	result["QuickConnectAvailable"] = Jellyfin::Support::toJsonValue<bool>(m_quickConnectAvailable);
	result["EnableRemoteAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableRemoteAccess);
	result["EnableCaseSensitiveItemIds"] = Jellyfin::Support::toJsonValue<bool>(m_enableCaseSensitiveItemIds);
	result["DisableLiveTvChannelUserDataName"] = Jellyfin::Support::toJsonValue<bool>(m_disableLiveTvChannelUserDataName);
	result["MetadataPath"] = Jellyfin::Support::toJsonValue<QString>(m_metadataPath);
	result["MetadataNetworkPath"] = Jellyfin::Support::toJsonValue<QString>(m_metadataNetworkPath);
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["SortReplaceCharacters"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortReplaceCharacters);
	result["SortRemoveCharacters"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortRemoveCharacters);
	result["SortRemoveWords"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortRemoveWords);
	result["MinResumePct"] = Jellyfin::Support::toJsonValue<qint32>(m_minResumePct);
	result["MaxResumePct"] = Jellyfin::Support::toJsonValue<qint32>(m_maxResumePct);
	result["MinResumeDurationSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_minResumeDurationSeconds);
	result["MinAudiobookResume"] = Jellyfin::Support::toJsonValue<qint32>(m_minAudiobookResume);
	result["MaxAudiobookResume"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAudiobookResume);
	result["LibraryMonitorDelay"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryMonitorDelay);
	result["EnableDashboardResponseCaching"] = Jellyfin::Support::toJsonValue<bool>(m_enableDashboardResponseCaching);
	result["ImageSavingConvention"] = Jellyfin::Support::toJsonValue<ImageSavingConvention>(m_imageSavingConvention);
	result["MetadataOptions"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<MetadataOptions>>>(m_metadataOptions);
	result["SkipDeserializationForBasicTypes"] = Jellyfin::Support::toJsonValue<bool>(m_skipDeserializationForBasicTypes);
	result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);
	result["BaseUrl"] = Jellyfin::Support::toJsonValue<QString>(m_baseUrl);
	result["UICulture"] = Jellyfin::Support::toJsonValue<QString>(m_uICulture);
	result["SaveMetadataHidden"] = Jellyfin::Support::toJsonValue<bool>(m_saveMetadataHidden);
	result["ContentTypes"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameValuePair>>>(m_contentTypes);
	result["RemoteClientBitrateLimit"] = Jellyfin::Support::toJsonValue<qint32>(m_remoteClientBitrateLimit);
	result["EnableFolderView"] = Jellyfin::Support::toJsonValue<bool>(m_enableFolderView);
	result["EnableGroupingIntoCollections"] = Jellyfin::Support::toJsonValue<bool>(m_enableGroupingIntoCollections);
	result["DisplaySpecialsWithinSeasons"] = Jellyfin::Support::toJsonValue<bool>(m_displaySpecialsWithinSeasons);
	result["LocalNetworkSubnets"] = Jellyfin::Support::toJsonValue<QStringList>(m_localNetworkSubnets);
	result["LocalNetworkAddresses"] = Jellyfin::Support::toJsonValue<QStringList>(m_localNetworkAddresses);
	result["CodecsUsed"] = Jellyfin::Support::toJsonValue<QStringList>(m_codecsUsed);
	result["PluginRepositories"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<RepositoryInfo>>>(m_pluginRepositories);
	result["EnableExternalContentInSuggestions"] = Jellyfin::Support::toJsonValue<bool>(m_enableExternalContentInSuggestions);
	result["RequireHttps"] = Jellyfin::Support::toJsonValue<bool>(m_requireHttps);
	result["EnableNewOmdbSupport"] = Jellyfin::Support::toJsonValue<bool>(m_enableNewOmdbSupport);
	result["RemoteIPFilter"] = Jellyfin::Support::toJsonValue<QStringList>(m_remoteIPFilter);
	result["IsRemoteIPFilterBlacklist"] = Jellyfin::Support::toJsonValue<bool>(m_isRemoteIPFilterBlacklist);
	result["ImageExtractionTimeoutMs"] = Jellyfin::Support::toJsonValue<qint32>(m_imageExtractionTimeoutMs);
	result["PathSubstitutions"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<PathSubstitution>>>(m_pathSubstitutions);
	result["EnableSimpleArtistDetection"] = Jellyfin::Support::toJsonValue<bool>(m_enableSimpleArtistDetection);
	result["UninstalledPlugins"] = Jellyfin::Support::toJsonValue<QStringList>(m_uninstalledPlugins);
	result["EnableSlowResponseWarning"] = Jellyfin::Support::toJsonValue<bool>(m_enableSlowResponseWarning);
	result["SlowResponseThresholdMs"] = Jellyfin::Support::toJsonValue<qint64>(m_slowResponseThresholdMs);
	result["CorsHosts"] = Jellyfin::Support::toJsonValue<QStringList>(m_corsHosts);
	result["KnownProxies"] = Jellyfin::Support::toJsonValue<QStringList>(m_knownProxies);
	result["ActivityLogRetentionDays"] = Jellyfin::Support::toJsonValue<qint32>(m_activityLogRetentionDays);
	result["LibraryScanFanoutConcurrency"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryScanFanoutConcurrency);
	result["LibraryMetadataRefreshConcurrency"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryMetadataRefreshConcurrency);
	result["RemoveOldPlugins"] = Jellyfin::Support::toJsonValue<bool>(m_removeOldPlugins);
	result["DisablePluginImages"] = Jellyfin::Support::toJsonValue<bool>(m_disablePluginImages);

	return result;
}

qint32 ServerConfiguration::logFileRetentionDays() const { return m_logFileRetentionDays; }

void ServerConfiguration::setLogFileRetentionDays(qint32 newLogFileRetentionDays) {
	m_logFileRetentionDays = newLogFileRetentionDays;
}
bool ServerConfiguration::isStartupWizardCompleted() const { return m_isStartupWizardCompleted; }

void ServerConfiguration::setIsStartupWizardCompleted(bool newIsStartupWizardCompleted) {
	m_isStartupWizardCompleted = newIsStartupWizardCompleted;
}
QString ServerConfiguration::cachePath() const { return m_cachePath; }

void ServerConfiguration::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
}
QSharedPointer<Version> ServerConfiguration::previousVersion() const { return m_previousVersion; }

void ServerConfiguration::setPreviousVersion(QSharedPointer<Version> newPreviousVersion) {
	m_previousVersion = newPreviousVersion;
}
QString ServerConfiguration::previousVersionStr() const { return m_previousVersionStr; }

void ServerConfiguration::setPreviousVersionStr(QString newPreviousVersionStr) {
	m_previousVersionStr = newPreviousVersionStr;
}
bool ServerConfiguration::enableUPnP() const { return m_enableUPnP; }

void ServerConfiguration::setEnableUPnP(bool newEnableUPnP) {
	m_enableUPnP = newEnableUPnP;
}
bool ServerConfiguration::enableMetrics() const { return m_enableMetrics; }

void ServerConfiguration::setEnableMetrics(bool newEnableMetrics) {
	m_enableMetrics = newEnableMetrics;
}
qint32 ServerConfiguration::publicPort() const { return m_publicPort; }

void ServerConfiguration::setPublicPort(qint32 newPublicPort) {
	m_publicPort = newPublicPort;
}
bool ServerConfiguration::uPnPCreateHttpPortMap() const { return m_uPnPCreateHttpPortMap; }

void ServerConfiguration::setUPnPCreateHttpPortMap(bool newUPnPCreateHttpPortMap) {
	m_uPnPCreateHttpPortMap = newUPnPCreateHttpPortMap;
}
QString ServerConfiguration::uDPPortRange() const { return m_uDPPortRange; }

void ServerConfiguration::setUDPPortRange(QString newUDPPortRange) {
	m_uDPPortRange = newUDPPortRange;
}
bool ServerConfiguration::enableIPV6() const { return m_enableIPV6; }

void ServerConfiguration::setEnableIPV6(bool newEnableIPV6) {
	m_enableIPV6 = newEnableIPV6;
}
bool ServerConfiguration::enableIPV4() const { return m_enableIPV4; }

void ServerConfiguration::setEnableIPV4(bool newEnableIPV4) {
	m_enableIPV4 = newEnableIPV4;
}
bool ServerConfiguration::enableSSDPTracing() const { return m_enableSSDPTracing; }

void ServerConfiguration::setEnableSSDPTracing(bool newEnableSSDPTracing) {
	m_enableSSDPTracing = newEnableSSDPTracing;
}
QString ServerConfiguration::sSDPTracingFilter() const { return m_sSDPTracingFilter; }

void ServerConfiguration::setSSDPTracingFilter(QString newSSDPTracingFilter) {
	m_sSDPTracingFilter = newSSDPTracingFilter;
}
qint32 ServerConfiguration::uDPSendCount() const { return m_uDPSendCount; }

void ServerConfiguration::setUDPSendCount(qint32 newUDPSendCount) {
	m_uDPSendCount = newUDPSendCount;
}
qint32 ServerConfiguration::uDPSendDelay() const { return m_uDPSendDelay; }

void ServerConfiguration::setUDPSendDelay(qint32 newUDPSendDelay) {
	m_uDPSendDelay = newUDPSendDelay;
}
bool ServerConfiguration::ignoreVirtualInterfaces() const { return m_ignoreVirtualInterfaces; }

void ServerConfiguration::setIgnoreVirtualInterfaces(bool newIgnoreVirtualInterfaces) {
	m_ignoreVirtualInterfaces = newIgnoreVirtualInterfaces;
}
QString ServerConfiguration::virtualInterfaceNames() const { return m_virtualInterfaceNames; }

void ServerConfiguration::setVirtualInterfaceNames(QString newVirtualInterfaceNames) {
	m_virtualInterfaceNames = newVirtualInterfaceNames;
}
qint32 ServerConfiguration::gatewayMonitorPeriod() const { return m_gatewayMonitorPeriod; }

void ServerConfiguration::setGatewayMonitorPeriod(qint32 newGatewayMonitorPeriod) {
	m_gatewayMonitorPeriod = newGatewayMonitorPeriod;
}
bool ServerConfiguration::enableMultiSocketBinding() const { return m_enableMultiSocketBinding; }

void ServerConfiguration::setEnableMultiSocketBinding(bool newEnableMultiSocketBinding) {
	m_enableMultiSocketBinding = newEnableMultiSocketBinding;
}
bool ServerConfiguration::trustAllIP6Interfaces() const { return m_trustAllIP6Interfaces; }

void ServerConfiguration::setTrustAllIP6Interfaces(bool newTrustAllIP6Interfaces) {
	m_trustAllIP6Interfaces = newTrustAllIP6Interfaces;
}
QString ServerConfiguration::hDHomerunPortRange() const { return m_hDHomerunPortRange; }

void ServerConfiguration::setHDHomerunPortRange(QString newHDHomerunPortRange) {
	m_hDHomerunPortRange = newHDHomerunPortRange;
}
QStringList ServerConfiguration::publishedServerUriBySubnet() const { return m_publishedServerUriBySubnet; }

void ServerConfiguration::setPublishedServerUriBySubnet(QStringList newPublishedServerUriBySubnet) {
	m_publishedServerUriBySubnet = newPublishedServerUriBySubnet;
}
bool ServerConfiguration::autoDiscoveryTracing() const { return m_autoDiscoveryTracing; }

void ServerConfiguration::setAutoDiscoveryTracing(bool newAutoDiscoveryTracing) {
	m_autoDiscoveryTracing = newAutoDiscoveryTracing;
}
bool ServerConfiguration::autoDiscovery() const { return m_autoDiscovery; }

void ServerConfiguration::setAutoDiscovery(bool newAutoDiscovery) {
	m_autoDiscovery = newAutoDiscovery;
}
qint32 ServerConfiguration::publicHttpsPort() const { return m_publicHttpsPort; }

void ServerConfiguration::setPublicHttpsPort(qint32 newPublicHttpsPort) {
	m_publicHttpsPort = newPublicHttpsPort;
}
qint32 ServerConfiguration::httpServerPortNumber() const { return m_httpServerPortNumber; }

void ServerConfiguration::setHttpServerPortNumber(qint32 newHttpServerPortNumber) {
	m_httpServerPortNumber = newHttpServerPortNumber;
}
qint32 ServerConfiguration::httpsPortNumber() const { return m_httpsPortNumber; }

void ServerConfiguration::setHttpsPortNumber(qint32 newHttpsPortNumber) {
	m_httpsPortNumber = newHttpsPortNumber;
}
bool ServerConfiguration::enableHttps() const { return m_enableHttps; }

void ServerConfiguration::setEnableHttps(bool newEnableHttps) {
	m_enableHttps = newEnableHttps;
}
bool ServerConfiguration::enableNormalizedItemByNameIds() const { return m_enableNormalizedItemByNameIds; }

void ServerConfiguration::setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds) {
	m_enableNormalizedItemByNameIds = newEnableNormalizedItemByNameIds;
}
QString ServerConfiguration::certificatePath() const { return m_certificatePath; }

void ServerConfiguration::setCertificatePath(QString newCertificatePath) {
	m_certificatePath = newCertificatePath;
}
QString ServerConfiguration::certificatePassword() const { return m_certificatePassword; }

void ServerConfiguration::setCertificatePassword(QString newCertificatePassword) {
	m_certificatePassword = newCertificatePassword;
}
bool ServerConfiguration::isPortAuthorized() const { return m_isPortAuthorized; }

void ServerConfiguration::setIsPortAuthorized(bool newIsPortAuthorized) {
	m_isPortAuthorized = newIsPortAuthorized;
}
bool ServerConfiguration::quickConnectAvailable() const { return m_quickConnectAvailable; }

void ServerConfiguration::setQuickConnectAvailable(bool newQuickConnectAvailable) {
	m_quickConnectAvailable = newQuickConnectAvailable;
}
bool ServerConfiguration::enableRemoteAccess() const { return m_enableRemoteAccess; }

void ServerConfiguration::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
}
bool ServerConfiguration::enableCaseSensitiveItemIds() const { return m_enableCaseSensitiveItemIds; }

void ServerConfiguration::setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds) {
	m_enableCaseSensitiveItemIds = newEnableCaseSensitiveItemIds;
}
bool ServerConfiguration::disableLiveTvChannelUserDataName() const { return m_disableLiveTvChannelUserDataName; }

void ServerConfiguration::setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName) {
	m_disableLiveTvChannelUserDataName = newDisableLiveTvChannelUserDataName;
}
QString ServerConfiguration::metadataPath() const { return m_metadataPath; }

void ServerConfiguration::setMetadataPath(QString newMetadataPath) {
	m_metadataPath = newMetadataPath;
}
QString ServerConfiguration::metadataNetworkPath() const { return m_metadataNetworkPath; }

void ServerConfiguration::setMetadataNetworkPath(QString newMetadataNetworkPath) {
	m_metadataNetworkPath = newMetadataNetworkPath;
}
QString ServerConfiguration::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void ServerConfiguration::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
QString ServerConfiguration::metadataCountryCode() const { return m_metadataCountryCode; }

void ServerConfiguration::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
QStringList ServerConfiguration::sortReplaceCharacters() const { return m_sortReplaceCharacters; }

void ServerConfiguration::setSortReplaceCharacters(QStringList newSortReplaceCharacters) {
	m_sortReplaceCharacters = newSortReplaceCharacters;
}
QStringList ServerConfiguration::sortRemoveCharacters() const { return m_sortRemoveCharacters; }

void ServerConfiguration::setSortRemoveCharacters(QStringList newSortRemoveCharacters) {
	m_sortRemoveCharacters = newSortRemoveCharacters;
}
QStringList ServerConfiguration::sortRemoveWords() const { return m_sortRemoveWords; }

void ServerConfiguration::setSortRemoveWords(QStringList newSortRemoveWords) {
	m_sortRemoveWords = newSortRemoveWords;
}
qint32 ServerConfiguration::minResumePct() const { return m_minResumePct; }

void ServerConfiguration::setMinResumePct(qint32 newMinResumePct) {
	m_minResumePct = newMinResumePct;
}
qint32 ServerConfiguration::maxResumePct() const { return m_maxResumePct; }

void ServerConfiguration::setMaxResumePct(qint32 newMaxResumePct) {
	m_maxResumePct = newMaxResumePct;
}
qint32 ServerConfiguration::minResumeDurationSeconds() const { return m_minResumeDurationSeconds; }

void ServerConfiguration::setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds) {
	m_minResumeDurationSeconds = newMinResumeDurationSeconds;
}
qint32 ServerConfiguration::minAudiobookResume() const { return m_minAudiobookResume; }

void ServerConfiguration::setMinAudiobookResume(qint32 newMinAudiobookResume) {
	m_minAudiobookResume = newMinAudiobookResume;
}
qint32 ServerConfiguration::maxAudiobookResume() const { return m_maxAudiobookResume; }

void ServerConfiguration::setMaxAudiobookResume(qint32 newMaxAudiobookResume) {
	m_maxAudiobookResume = newMaxAudiobookResume;
}
qint32 ServerConfiguration::libraryMonitorDelay() const { return m_libraryMonitorDelay; }

void ServerConfiguration::setLibraryMonitorDelay(qint32 newLibraryMonitorDelay) {
	m_libraryMonitorDelay = newLibraryMonitorDelay;
}
bool ServerConfiguration::enableDashboardResponseCaching() const { return m_enableDashboardResponseCaching; }

void ServerConfiguration::setEnableDashboardResponseCaching(bool newEnableDashboardResponseCaching) {
	m_enableDashboardResponseCaching = newEnableDashboardResponseCaching;
}
ImageSavingConvention ServerConfiguration::imageSavingConvention() const { return m_imageSavingConvention; }

void ServerConfiguration::setImageSavingConvention(ImageSavingConvention newImageSavingConvention) {
	m_imageSavingConvention = newImageSavingConvention;
}
QList<QSharedPointer<MetadataOptions>> ServerConfiguration::metadataOptions() const { return m_metadataOptions; }

void ServerConfiguration::setMetadataOptions(QList<QSharedPointer<MetadataOptions>> newMetadataOptions) {
	m_metadataOptions = newMetadataOptions;
}
bool ServerConfiguration::skipDeserializationForBasicTypes() const { return m_skipDeserializationForBasicTypes; }

void ServerConfiguration::setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes) {
	m_skipDeserializationForBasicTypes = newSkipDeserializationForBasicTypes;
}
QString ServerConfiguration::serverName() const { return m_serverName; }

void ServerConfiguration::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
QString ServerConfiguration::baseUrl() const { return m_baseUrl; }

void ServerConfiguration::setBaseUrl(QString newBaseUrl) {
	m_baseUrl = newBaseUrl;
}
QString ServerConfiguration::uICulture() const { return m_uICulture; }

void ServerConfiguration::setUICulture(QString newUICulture) {
	m_uICulture = newUICulture;
}
bool ServerConfiguration::saveMetadataHidden() const { return m_saveMetadataHidden; }

void ServerConfiguration::setSaveMetadataHidden(bool newSaveMetadataHidden) {
	m_saveMetadataHidden = newSaveMetadataHidden;
}
QList<QSharedPointer<NameValuePair>> ServerConfiguration::contentTypes() const { return m_contentTypes; }

void ServerConfiguration::setContentTypes(QList<QSharedPointer<NameValuePair>> newContentTypes) {
	m_contentTypes = newContentTypes;
}
qint32 ServerConfiguration::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }

void ServerConfiguration::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
}
bool ServerConfiguration::enableFolderView() const { return m_enableFolderView; }

void ServerConfiguration::setEnableFolderView(bool newEnableFolderView) {
	m_enableFolderView = newEnableFolderView;
}
bool ServerConfiguration::enableGroupingIntoCollections() const { return m_enableGroupingIntoCollections; }

void ServerConfiguration::setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections) {
	m_enableGroupingIntoCollections = newEnableGroupingIntoCollections;
}
bool ServerConfiguration::displaySpecialsWithinSeasons() const { return m_displaySpecialsWithinSeasons; }

void ServerConfiguration::setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons) {
	m_displaySpecialsWithinSeasons = newDisplaySpecialsWithinSeasons;
}
QStringList ServerConfiguration::localNetworkSubnets() const { return m_localNetworkSubnets; }

void ServerConfiguration::setLocalNetworkSubnets(QStringList newLocalNetworkSubnets) {
	m_localNetworkSubnets = newLocalNetworkSubnets;
}
QStringList ServerConfiguration::localNetworkAddresses() const { return m_localNetworkAddresses; }

void ServerConfiguration::setLocalNetworkAddresses(QStringList newLocalNetworkAddresses) {
	m_localNetworkAddresses = newLocalNetworkAddresses;
}
QStringList ServerConfiguration::codecsUsed() const { return m_codecsUsed; }

void ServerConfiguration::setCodecsUsed(QStringList newCodecsUsed) {
	m_codecsUsed = newCodecsUsed;
}
QList<QSharedPointer<RepositoryInfo>> ServerConfiguration::pluginRepositories() const { return m_pluginRepositories; }

void ServerConfiguration::setPluginRepositories(QList<QSharedPointer<RepositoryInfo>> newPluginRepositories) {
	m_pluginRepositories = newPluginRepositories;
}
bool ServerConfiguration::enableExternalContentInSuggestions() const { return m_enableExternalContentInSuggestions; }

void ServerConfiguration::setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions) {
	m_enableExternalContentInSuggestions = newEnableExternalContentInSuggestions;
}
bool ServerConfiguration::requireHttps() const { return m_requireHttps; }

void ServerConfiguration::setRequireHttps(bool newRequireHttps) {
	m_requireHttps = newRequireHttps;
}
bool ServerConfiguration::enableNewOmdbSupport() const { return m_enableNewOmdbSupport; }

void ServerConfiguration::setEnableNewOmdbSupport(bool newEnableNewOmdbSupport) {
	m_enableNewOmdbSupport = newEnableNewOmdbSupport;
}
QStringList ServerConfiguration::remoteIPFilter() const { return m_remoteIPFilter; }

void ServerConfiguration::setRemoteIPFilter(QStringList newRemoteIPFilter) {
	m_remoteIPFilter = newRemoteIPFilter;
}
bool ServerConfiguration::isRemoteIPFilterBlacklist() const { return m_isRemoteIPFilterBlacklist; }

void ServerConfiguration::setIsRemoteIPFilterBlacklist(bool newIsRemoteIPFilterBlacklist) {
	m_isRemoteIPFilterBlacklist = newIsRemoteIPFilterBlacklist;
}
qint32 ServerConfiguration::imageExtractionTimeoutMs() const { return m_imageExtractionTimeoutMs; }

void ServerConfiguration::setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs) {
	m_imageExtractionTimeoutMs = newImageExtractionTimeoutMs;
}
QList<QSharedPointer<PathSubstitution>> ServerConfiguration::pathSubstitutions() const { return m_pathSubstitutions; }

void ServerConfiguration::setPathSubstitutions(QList<QSharedPointer<PathSubstitution>> newPathSubstitutions) {
	m_pathSubstitutions = newPathSubstitutions;
}
bool ServerConfiguration::enableSimpleArtistDetection() const { return m_enableSimpleArtistDetection; }

void ServerConfiguration::setEnableSimpleArtistDetection(bool newEnableSimpleArtistDetection) {
	m_enableSimpleArtistDetection = newEnableSimpleArtistDetection;
}
QStringList ServerConfiguration::uninstalledPlugins() const { return m_uninstalledPlugins; }

void ServerConfiguration::setUninstalledPlugins(QStringList newUninstalledPlugins) {
	m_uninstalledPlugins = newUninstalledPlugins;
}
bool ServerConfiguration::enableSlowResponseWarning() const { return m_enableSlowResponseWarning; }

void ServerConfiguration::setEnableSlowResponseWarning(bool newEnableSlowResponseWarning) {
	m_enableSlowResponseWarning = newEnableSlowResponseWarning;
}
qint64 ServerConfiguration::slowResponseThresholdMs() const { return m_slowResponseThresholdMs; }

void ServerConfiguration::setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs) {
	m_slowResponseThresholdMs = newSlowResponseThresholdMs;
}
QStringList ServerConfiguration::corsHosts() const { return m_corsHosts; }

void ServerConfiguration::setCorsHosts(QStringList newCorsHosts) {
	m_corsHosts = newCorsHosts;
}
QStringList ServerConfiguration::knownProxies() const { return m_knownProxies; }

void ServerConfiguration::setKnownProxies(QStringList newKnownProxies) {
	m_knownProxies = newKnownProxies;
}
qint32 ServerConfiguration::activityLogRetentionDays() const { return m_activityLogRetentionDays; }

void ServerConfiguration::setActivityLogRetentionDays(qint32 newActivityLogRetentionDays) {
	m_activityLogRetentionDays = newActivityLogRetentionDays;
}
qint32 ServerConfiguration::libraryScanFanoutConcurrency() const { return m_libraryScanFanoutConcurrency; }

void ServerConfiguration::setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency) {
	m_libraryScanFanoutConcurrency = newLibraryScanFanoutConcurrency;
}
qint32 ServerConfiguration::libraryMetadataRefreshConcurrency() const { return m_libraryMetadataRefreshConcurrency; }

void ServerConfiguration::setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency) {
	m_libraryMetadataRefreshConcurrency = newLibraryMetadataRefreshConcurrency;
}
bool ServerConfiguration::removeOldPlugins() const { return m_removeOldPlugins; }

void ServerConfiguration::setRemoveOldPlugins(bool newRemoveOldPlugins) {
	m_removeOldPlugins = newRemoveOldPlugins;
}
bool ServerConfiguration::disablePluginImages() const { return m_disablePluginImages; }

void ServerConfiguration::setDisablePluginImages(bool newDisablePluginImages) {
	m_disablePluginImages = newDisablePluginImages;
}

} // NS DTO

namespace Support {

using ServerConfiguration = Jellyfin::DTO::ServerConfiguration;

template <>
ServerConfiguration fromJsonValue<ServerConfiguration>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ServerConfiguration::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO
