import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
import "fonctions.js" as MesFonctions

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: rectangle
        x: 125
        y: 37
        width: 200
        height: 200
        color: "#ff0000"

        Text {
            id: text1
            text: qsTr("Bonjour")
            elide: Text.ElideMiddle
            anchors.fill: parent
            font.pixelSize: 12
            color: "#ffffff"
        }

        Button {
            id: button
            x: 50
            y: 112
            text: qsTr("Button")
            onClicked:
            {
                MesFonctions.swapperCouleur();
            }
        }
    }
}

/*##^## Designer {
    D{i:1;anchors_height:50;anchors_width:85;anchors_x:286;anchors_y:0}D{i:3;anchors_x:100;anchors_y:272}
}
 ##^##*/
