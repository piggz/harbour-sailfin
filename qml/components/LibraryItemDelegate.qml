import QtQuick 2.6
import Sailfish.Silica 1.0

import ".."

/**
 * Delegate for displaying an item in the library.
 */
BackgroundItem {
    id: root
    property alias poster: posterImage.source
    property alias title: titleText.text
    property bool landscape: false
    width: Constants.libraryDelegateWidth
    height: landscape ? Constants.libraryDelegateHeight : Constants.libraryDelegatePosterHeight

    RemoteImage {
        id: posterImage
        clip: true
        anchors {
            left: parent.left
            top: parent.top
            right: parent.right
            bottom: parent.bottom
        }
        fillMode: Image.PreserveAspectCrop
    }

    /*Rectangle {
        anchors.fill: posterImage
        color: Theme.rgba(Theme.highlightBackgroundColor, Theme.highlightBackgroundOpacity)
        visible: root.highlighted
    }*/

    Rectangle {
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: titleText.height * 1.5 + Theme.paddingSmall * 2
        gradient: Gradient {
            GradientStop { position: 0.0; color: "transparent"; }
            GradientStop { position: 1.0; color: Theme.highlightDimmerColor }
        }
    }

    Label {
        id: titleText
        anchors {
            left: parent.left
            bottom: parent.bottom
            right: parent.right
            leftMargin: Theme.paddingMedium
            rightMargin: Theme.paddingMedium
            bottomMargin: Theme.paddingSmall
        }
        truncationMode: TruncationMode.Fade
        horizontalAlignment: Text.AlignLeft
    }
}
