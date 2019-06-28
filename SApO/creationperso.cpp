#include "creationperso.h"
#include "ui_creationperso.h"

CreationPerso::CreationPerso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreationPerso)
{
    ui->setupUi(this);

    player.setMedia(QUrl("qrc:/sons/musique_creation_perso.mp3"));
    player.setVolume(50);
    player.play();
}

CreationPerso::~CreationPerso()
{
    delete ui;
}

QString CreationPerso::obtenirNom()
{
    return nom;
}

QString CreationPerso::obtenirClasse()
{
    return classe;
}

QString CreationPerso::obtenirPrenom()
{
    return prenom;
}

QString CreationPerso::obtenirAge()
{
    return age;
}

QString CreationPerso::obtenirTaille()
{
    return taille;
}

QString CreationPerso::obtenirPoids()
{
    return poids;
}

QString CreationPerso::obtenirChoixArmeDeuxMains()
{
    return armeDeuxMains;
}

void CreationPerso::on_pushButtonEnter_clicked()
{
    player.setMedia(QUrl("qrc:/Sons/link-start-reupload.mp3"));
    player.setVolume(75);
    player.play();

    nom=ui->lineEditNom->text();
    prenom=ui->lineEditPrenom->text();
    classe=ui->comboBoxClasse->currentText();
    age=QString::number(ui->spinBoxAge->value());
    taille=QString::number(ui->doubleSpinBoxTaille->value());
    poids=QString::number(ui->spinBoxPoids->value());
    armeDeuxMains=ui->comboBoxArmeDeuxMains->currentText();


    emit infoPerso(ui->comboBoxClasse->currentText(),ui->lineEditNom->text(),ui->lineEditPrenom->text(),QString::number(ui->spinBoxAge->value()),
                   QString::number(ui->doubleSpinBoxTaille->value()),QString::number(ui->spinBoxPoids->value()),ui->comboBoxArmeDeuxMains->currentText(),
                   ui->comboBoxChoixArmeUneMainDroite->currentText(),ui->comboBoxChoixArmeMainGauche->currentText(),ui->comboBoxChoixArmeDeuxMains->currentText());
    this->accept();

    QMessageBox bienvenue;
    bienvenue.setText("A New Challenger Entering To The Aincrad Arena");
    bienvenue.exec();
}



void CreationPerso::on_comboBoxClasse_currentIndexChanged(int index)
{
    int classe=ui->comboBoxClasse->itemData(index).toInt();


        if(ui->comboBoxClasse->currentText()=="Berserk")
        {
            ui->comboBoxChoixArmeDeuxMains->setEnabled(true);
            ui->comboBoxChoixArmeDeuxMains->clear();
            ui->comboBoxChoixArmeUneMainDroite->setEnabled(false);
            ui->comboBoxChoixArmeMainGauche->setEnabled(false);
            ui->comboBoxChoixArmeDeuxMains->addItem("Epée batarde");
            ui->comboBoxChoixArmeDeuxMains->addItem("Katana");
            ui->comboBoxChoixArmeDeuxMains->addItem("Claymore");
            ui->comboBoxChoixArmeDeuxMains->addItem("Flamberge");
        }

        if(ui->comboBoxClasse->currentText()=="Bretteur")
        {
            ui->comboBoxChoixArmeDeuxMains->setEnabled(false);
            ui->comboBoxChoixArmeUneMainDroite->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->clear();
            ui->comboBoxChoixArmeMainGauche->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->addItem("Dague");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Wakizashi");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Gaive");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Xiphos");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Cladio");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Dague");
            ui->comboBoxChoixArmeMainGauche->addItem("Wakizashi");
            ui->comboBoxChoixArmeMainGauche->addItem("Gaive");
            ui->comboBoxChoixArmeMainGauche->addItem("Xiphos");
            ui->comboBoxChoixArmeMainGauche->addItem("Cladio");
            ui->comboBoxChoixArmeMainGauche->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Rien");
        }
        if(ui->comboBoxClasse->currentText()=="Paladin")
        {
            ui->comboBoxChoixArmeUneMainDroite->clear();
            ui->comboBoxChoixArmeMainGauche->clear();
            ui->comboBoxChoixArmeDeuxMains->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->addItem("Dague");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Wakizashi");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Gaive");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Xiphos");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Cladio");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Bouclier");
            ui->comboBoxChoixArmeDeuxMains->clear();
            ui->comboBoxChoixArmeDeuxMains->addItem("Epée batarde");
            ui->comboBoxChoixArmeDeuxMains->addItem("Katana");
            ui->comboBoxChoixArmeDeuxMains->addItem("Claymore");
            ui->comboBoxChoixArmeDeuxMains->addItem("Flamberge");
        }
        if(ui->comboBoxClasse->currentText()=="Assassin")
        {
            ui->comboBoxChoixArmeUneMainDroite->clear();
            ui->comboBoxChoixArmeUneMainDroite->setEnabled(true);
            ui->comboBoxChoixArmeDeuxMains->setEnabled(false);
            ui->comboBoxChoixArmeMainGauche->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->addItem("Dague");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Wakizashi");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Gaive");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Xiphos");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Cladio");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Rien");
        }
        if (ui->comboBoxClasse->currentText()=="Guerrier")
        {
            ui->comboBoxChoixArmeUneMainDroite->clear();
            ui->comboBoxChoixArmeMainGauche->setEnabled(true);
            ui->comboBoxChoixArmeDeuxMains->setEnabled(false);
            ui->comboBoxChoixArmeUneMainDroite->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->addItem("Dague");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Wakizashi");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Gaive");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Xiphos");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Cladio");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Bouclier");
            ui->comboBoxChoixArmeMainGauche->addItem("Rien");
        }
        if (ui->comboBoxClasse->currentText()=="Samourai")
        {
            ui->comboBoxChoixArmeUneMainDroite->clear();
            ui->comboBoxChoixArmeMainGauche->setEnabled(false);
            ui->comboBoxChoixArmeDeuxMains->clear();
            ui->comboBoxChoixArmeDeuxMains->setEnabled(true);
            ui->comboBoxChoixArmeUneMainDroite->addItem("Dague");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Wakizashi");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Gaive");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Xiphos");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Cladio");
            ui->comboBoxChoixArmeUneMainDroite->addItem("Rapiere");
            ui->comboBoxChoixArmeMainGauche->addItem("Rien");
            ui->comboBoxChoixArmeDeuxMains->addItem("Epée batarde");
            ui->comboBoxChoixArmeDeuxMains->addItem("Katana");
            ui->comboBoxChoixArmeDeuxMains->addItem("Claymore");
            ui->comboBoxChoixArmeDeuxMains->addItem("Flamberge");
        }
    }


