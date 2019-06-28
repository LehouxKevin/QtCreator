import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

Page {
    width: 600
    height: 400
    property alias spinBoxAge: spinBoxAge
    property alias labelValTaille: labelValTaille
    property alias sliderTaille: sliderTaille
    property alias labelValPoids: labelValPoids
    property alias sliderPoids: sliderPoids
    property alias switchSexe: switchSexe

    header: Label {
        text: qsTr("Informations personnelles")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    ColumnLayout {
        id: columnLayout
        width: 561
        height: 258

        RowLayout {
            id: rowLayout
            width: 100
            height: 100

            Label {
                id: labelSexe
                text: qsTr("Sexe")
                font.pointSize: 13
            }

            Switch {
                id: switchSexe
                text: qsTr("Homme")
            }
        }

        RowLayout {
            id: rowLayout1
            width: 100
            height: 100

            Label {
                id: labelAge
                text: qsTr("Age")
                font.pointSize: 13
            }

            SpinBox {
                id: spinBoxAge
                to: 200
                from: 1
                value: 30
            }
        }

        RowLayout {
            id: rowLayout2
            width: 100
            height: 100

            Label {
                id: labelPoids
                text: qsTr("Poids")
                font.pointSize: 13
            }

            Slider {
                id: sliderPoids
                to: 300
                from: 15
                value: 15
            }

            Label {
                id: labelValPoids
                width: 50
            }
        }

        RowLayout {
            id: rowLayout3
            width: 100
            height: 100

            Label {
                id: labelTaille
                text: qsTr("Taille")
                font.pointSize: 13
            }

            Slider {
                id: sliderTaille
                stepSize: 0.01
                to: 3
                from: 0.5
                value: 1.7
            }

            Label {
                id: labelValTaille
                width: 50
            }
        }
    }
}
