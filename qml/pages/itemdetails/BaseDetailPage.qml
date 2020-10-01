/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../../components"

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
    readonly property bool hasLogo: (typeof itemData.ImageTags !== "undefined") && (typeof itemData.ImageTags["Logo"] !== "undefined")
    readonly property var _backdropImages: itemData.BackdropImageTags
    readonly property var _parentBackdropImages: itemData.ParentBackdropImageTags
    readonly property string parentId: itemData.ParentId || ""
    property alias backdrop: backdrop

    on_BackdropImagesChanged: updateBackdrop()
    on_ParentBackdropImagesChanged: updateBackdrop()

    function updateBackdrop() {
        return;
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

    PageBusyIndicator {
        running: pageRoot._loading
    }

    onItemIdChanged: {
        itemData = {}
        if (itemId.length && PageStatus.Active) {
            pageRoot._loading = true
            ApiClient.fetchItem(itemId)
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Deactivating) {
            backdrop.clear()
            //appWindow.itemData = ({})
        }
        if (status == PageStatus.Active) {
            if (itemId) {
                ApiClient.fetchItem(itemId)
            }

        }
    }

    Connections {
        target: ApiClient
        onItemFetched: {
            if (itemId === pageRoot.itemId) {
                //console.log(JSON.stringify(result))
                pageRoot.itemData = result
                pageRoot._loading = false
                if (status == PageStatus.Active) {
                    if (itemData.Type === "CollectionFolder") {
                        appWindow.collectionId = itemData.Id
                    } else {
                        appWindow.itemData = result
                    }
                }
            }
        }
    }
}