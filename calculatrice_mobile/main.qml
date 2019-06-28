import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3

import "fonctions.js" as MesFonctions

Window {
    visible: true
    width: 340
    height: 480
    title: qsTr("Calculatrice")

    GridLayout {
        id: gridLayout
        x: 0
        y: 6
        width: 335
        height: 474
        rows: 5
        columns: 4

        TextField {
            id: textField_affichage
            width: 630
            height: 40
            Layout.fillWidth: true
            //text: qsTr("Text Field")
            placeholderText: qsTr("affichage des opérations")
            Layout.row: 0
            Layout.column: 0
            Layout.columnSpan: 4
            Layout.rowSpan: 1
        }

        Button {
            id: button_7
            text: qsTr("7")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("7");
            }
        }

        Button {
            id: button_8
            text: qsTr("8")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("8");
            }
        }

        Button {
            id: button_9
            text: qsTr("9")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("9");
            }
        }

        Button {
            id: button_plus
            text: qsTr("+")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("+");
            }
        }

        Button {
            id: button_4
            text: qsTr("4")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("4");
            }
        }

        Button {
            id: button_5
            text: qsTr("5")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("5");
            }
        }

        Button {
            id: button_6
            text: qsTr("6")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("6");
            }
        }

        Button {
            id: button_moin
            text: qsTr("-")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("-");
            }
        }

        Button {
            id: button_1
            text: qsTr("1")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("1");
            }
        }

        Button {
            id: button_2
            text: qsTr("2")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("2");
            }
        }

        Button {
            id: button_3
            text: qsTr("3")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("3");
            }
        }

        Button {
            id: button_multiplier
            text: qsTr("*")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("*");
            }
        }

        Button {
            id: button_c
            text: qsTr("C")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("C");
            }
        }

        Button {
            id: button_0
            text: qsTr("0")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("0");
            }
        }

        Button {
            id: button_egal
            text: qsTr("=")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("=");
            }
        }

        Button {
            id: button_diviser
            text: qsTr("/")
            Layout.maximumWidth: 80
            onClicked: {
                MesFonctions.operations("/");
            }
        }
    }
}
