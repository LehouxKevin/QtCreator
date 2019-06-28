import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3

Page {
    id: page
    width: 600
    height: 400
    property alias roundButton: roundButton
    property alias labelIMC: labelIMC
    contentHeight: 334
    property alias buttonAge: buttonAge
    property alias buttonLorentz: buttonLorentz
    property alias buttonDevine: buttonDevine
    property alias labelPoidsIdeal: labelPoidsIdeal
    property alias dial: dial
    property alias labelCorpulence: labelCorpulence

    header: Label {
        text: qsTr("IMC et Poids idéal")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    ColumnLayout {
        id: columnLayout
        width: 584
        height: 336

        RowLayout {
            id: rowLayout
            width: 100
            height: 100

            Text {
                id: text1
                text: qsTr("IMC")
                font.pixelSize: 12
            }

            Label {
                id: labelIMC
                width: 50
            }
        }

        RowLayout {
            id: rowLayout1
            width: 100
            height: 100

            Text {
                id: text2
                text: qsTr("Corpulence")
                font.pixelSize: 12
            }

            Label {
                id: labelCorpulence
                width: 70
            }
        }

        RowLayout {
            id: rowLayout2
            width:
            {
                width: screen.width;
            }

            height: 100

            Dial {
                id: dial
                from: 0
                to: 300
                wrap: true

                property string couleurCercle: "blue"

                RoundButton {
                    id: roundButton
                    width: 184
                    height: 184
                    text: ""
                    opacity: 0.6
                    anchors.fill : parent
                    background: Rectangle
                    {
                        radius:roundButton.radius;
                        color : dial.couleurCercle;
                    }
                }
            }

            Label {
                id: labelPoidsIdeal
                width: 100
            }
        }

        Button {
            id: buttonDevine
            width: 250
            text: qsTr("Poids idéal selon Devine")
            Layout.maximumWidth: 250
            Layout.minimumWidth: 250
            Layout.maximumHeight: 28
            Layout.fillWidth: false
        }

        Button {
            id: buttonLorentz
            width: 250
            text: qsTr("Poids idéal selon Lorentz")
            Layout.maximumWidth: 250
            Layout.minimumWidth: 250
            Layout.maximumHeight: 30
            Layout.fillWidth: false
        }

        Button {
            id: buttonAge
            width: 250
            text: qsTr("Poids idéal selon Lorentz/Age")
            Layout.maximumWidth: 250
            Layout.minimumWidth: 250
            Layout.maximumHeight: 30
            Layout.fillWidth: false
        }
    }
}
