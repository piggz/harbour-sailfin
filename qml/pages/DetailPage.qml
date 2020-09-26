import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"
import "../components/itemdetails"

/**
 * This page displays details about a film, show, season, episode, and so on.
 *
 * It contains the common functionality for all items. Additional components are
 * loaded in for every specific type of items, from ../components/itemdetails.
 */
Page {
    id: pageRoot
    property string itemId: ""
    property var itemData: ({})
    property bool _loading: true
    readonly property bool _hasLogo: itemData.ImageTags.Logo !== undefined
    readonly property string _logo: itemData.ImageTags.Logo
    readonly property var _backdropImages: itemData.BackdropImageTags
    readonly property var _parentBackdropImages: itemData.ParentBackdropImageTags
    readonly property string parentId: itemData.ParentId

    on_BackdropImagesChanged: updateBackdrop()
    on_ParentBackdropImagesChanged: updateBackdrop()

    function updateBackdrop() {
        if (_backdropImages && _backdropImages.length > 0) {
            var rand = Math.floor(Math.random() * (_backdropImages.length - 0.001))
            console.log("Random: ", rand)
            backdrop.source = ApiClient.baseUrl + "/Items/" + itemId + "/Images/Backdrop/" + rand + "?tag=" + _backdropImages[rand] + "&maxHeight" + height
        } else if (_parentBackdropImages && _parentBackdropImages.length > 0) {
            console.log(parentId)
            backdrop.source = ApiClient.baseUrl + "/Items/" + itemData.ParentBackdropItemId + "/Images/Backdrop/0?tag=" + _parentBackdropImages[0]
        }
    }


    allowedOrientations: Orientation.All
    GlassyBackground {
        id: backdrop
        anchors.fill: parent
    }

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            PageHeader {
                title: itemData.Name
                visible: !_hasLogo
            }

            Column {
                width: parent.width
                Item {
                    width: 1
                    height: Theme.paddingLarge
                }
                RemoteImage {
                    anchors {
                        horizontalCenter: parent.horizontalCenter
                    }
                    source: _hasLogo ? ApiClient.baseUrl + "/Items/" + itemId + "/Images/Logo?tag=" + _logo : undefined
                }
                Item {
                    width: 1
                    height: Theme.paddingLarge
                }
                visible: _hasLogo
            }

            Item {
                width: 1
                height: Theme.paddingLarge
            }

            Loader {
                active: itemData != undefined
                asynchronous: true
                width: parent.width
                source: {
                    switch (itemData.Type){
                    case "Movie":
                        return Qt.resolvedUrl("../components/itemdetails/FilmDetails.qml")
                    case "Series":
                        return Qt.resolvedUrl("../components/itemdetails/SeriesDetails.qml")
                    case "Season":
                        return Qt.resolvedUrl("../components/itemdetails/SeasonDetails.qml")
                    case "Episode":
                        return Qt.resolvedUrl("../components/itemdetails/EpisodeDetails.qml")
                    default:
                        return Qt.resolvedUrl("../components/itemdetails/UnsupportedDetails.qml")
                    }
                }
                onLoaded: {
                    item.itemData = Qt.binding(function() { return pageRoot.itemData; })
                }
            }


        }
    }

    PageBusyIndicator {
        running: pageRoot._loading
    }

    onItemIdChanged: {
        itemData = {}
        if (itemId.length > 0) {
            pageRoot._loading = true
            ApiClient.fetchItem(itemId)
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Deactivating) {
            backdrop.clear()
            //appWindow.itemData = ({})
        }
        if (status == PageStatus.Active && itemData) {
            appWindow.itemData = itemData
        }
    }

    Connections {
        target: ApiClient
        onItemFetched: {
            if (itemId === pageRoot.itemId) {
                //console.log(JSON.stringify(result))
                pageRoot.itemData = result
                pageRoot._loading = false
                if (status == PageStatus.Active)
                appWindow.itemData = result
            }
        }
    }
}
