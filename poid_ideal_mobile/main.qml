import QtQuick 2.9
import QtQuick.Controls 2.2

import "calculpoids.js" as MesFonctions

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex
        onCurrentIndexChanged: {
            if(currentIndex===1)
            {
                var imc;
                var poids = page1.sliderPoids.value;
                var taille = page1.sliderTaille.value;
                var corpulence;

                imc = MesFonctions.getImc(poids,taille);
                page2.labelIMC.text = imc.toFixed(2);
                page2.labelPoidsIdeal.text = "";

                corpulence = MesFonctions.getCorpulence(imc);
                page2.labelCorpulence.text = corpulence;
                page2.dial.value = poids;
                page2.roundButton.text = poids.toFixed(2)+"Kg";

                if(corpulence === "Famine" || corpulence === "Maigreur" || corpulence === "Surpoids" || corpulence === "Obésité modérée" || corpulence === "Obésité sévère" || corpulence === "Obésité morbide")
                {
                    page2.dial.couleurCercle  = "red";
                }
                else{
                    page2.dial.couleurCercle  = "green";
                }
            }
        }

        Page1Form {
            id: page1
            labelValPoids.text: sliderPoids.value
            labelValTaille.text: sliderTaille.value
            switchSexe.onCheckedChanged:
            {
                if(switchSexe.text == "Homme")
                {
                    switchSexe.text = "Femme";
                }
                else {
                    switchSexe.text = "Homme";
                }
            }
            sliderPoids.onValueChanged:
            {
                labelValPoids.text = sliderPoids.value.toFixed(2);
            }
            sliderTaille.onValueChanged:
            {
                labelValTaille.text = sliderTaille.value.toFixed(2);
            }
        }

        Page2Form {
            id: page2
            buttonLorentz.onClicked:
            {
                var sexe;
                if(page1.switchSexe.text==="Homme")
                {
                    sexe = "Homme";
                }
                else {
                    sexe = "Femme";
                }

                labelPoidsIdeal.text = MesFonctions.lorentz(page1.sliderTaille.value,sexe).toFixed(2);
            }
            buttonDevine.onClicked:
            {
                var sexe;
                if(page1.switchSexe.text==="Homme")
                {
                    sexe = "Homme";
                }
                else {
                    sexe = "Femme";
                }

                labelPoidsIdeal.text = MesFonctions.devine(page1.sliderTaille.value,sexe).toFixed(2);
            }
            buttonAge.onClicked:
            {
                var sexe;

                if(page1.switchSexe.text==="Homme")
                {
                    sexe = "Homme";
                }
                else {
                    sexe = "Femme";
                }

                labelPoidsIdeal.text = MesFonctions.lorentzAge(page1.sliderTaille.value,page1.spinBoxAge.value).toFixed(2);
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

        TabButton {
            text: qsTr("Informations Personnelles")
        }
        TabButton {
            text: qsTr("IMC et Poids idéal")
        }
    }
}
