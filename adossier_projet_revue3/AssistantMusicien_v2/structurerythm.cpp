#include "structurerythm.h"
#include "ui_structurerythm.h"
#include <QDebug>

StructureRythm::StructureRythm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StructureRythm)
{
    ui->setupUi(this);
    imagesNotes[0] = QPixmap("://images/NoteNoirModifier.png");
    imagesNotes[1] = QPixmap("://images/NoteNoirPModifier.png");
    imagesNotes[2] = QPixmap("://images/NoteBlancheModifier.png");
    imagesNotes[3] = QPixmap("://images/NoteBlanchePModifier.png");
    imagesNotes[4] = QPixmap("://images/NoteRondeModifié.png");
    imagesNotes[5] = QPixmap("://images/NoteCrocheModifier.png");
}

StructureRythm::~StructureRythm()
{
    delete ui;
}
/**
 * @brief StructureRythm::RecupererStrucuture
 * @return structure
 * @details Retourne la strucure rythmique.
 */
QString StructureRythm::RecupererStrucuture()
{
    return structure;
}
/**
 * @brief StructureRythm::RecupererStrucuture
 * @param newNbTemps
 * @return rien
 * @details Met à jour le nombre de temps et réinitialise
 * le nombre de temps restant et bloque les notes incompatiblent.
 */
void StructureRythm::IndiquerSignature(int newNbTemps,int newNbMesure)
{
    nbTemps = newNbTemps;
    nbTempsRestant = newNbTemps;
    nbMesure = newNbMesure;
    BloquerNotes();
    ResetStructure();
}
/**
 * @brief StructureRythm::BloquerNotes
 * @return rien
 * @details Verifie le nombre de note restant et grise les boutons
 * dont la note est supérieur au temps restant.
 */
void StructureRythm::BloquerNotes()
{
    if(nbTempsRestant < 4)
    {
        ui->pushButtonRonde->setDisabled(true);
    }
    if(nbTempsRestant < 1)
    {
        ui->pushButtonNoir->setDisabled(true);
    }
    if(nbMesure != 8)
    {
        ui->pushButtonNoirP->setDisabled(true);
        ui->pushButtonCroche->setDisabled(true);
    }
    if(nbMesure == 1)
    {
        ui->pushButtonNoir->setDisabled(true);
        ui->pushButtonBlanche->setDisabled(true);
        ui->pushButtonBLancheP->setDisabled(true);
    }
    if(nbMesure == 2)
    {
        ui->pushButtonNoir->setDisabled(true);
    }
    if((nbTempsRestant < 1.5))
    {
        ui->pushButtonNoirP->setDisabled(true);
    }
    if(nbTempsRestant < 2)
    {
        ui->pushButtonBlanche->setDisabled(true);
    }
    if(nbTempsRestant < 3)
    {
        ui->pushButtonBLancheP->setDisabled(true);
    }
    if(nbTempsRestant < 0.5)
    {
        ui->pushButtonCroche->setDisabled(true);
    }
}

void StructureRythm::ResetStructure()
{
    nbTempsRestant = nbTemps;
    switch (nbMesure) {
    case 1:
        nbTempsRestant*=4;
        break;
    case 2:
        nbTempsRestant*=2;
        break;
    case 4:
        nbTempsRestant*=1;
        break;
    case 8:
        nbTempsRestant/=2;
    break;
    }
    structure = "";
    ui->pushButtonNoir->setEnabled(true);
    ui->pushButtonBLancheP->setEnabled(true);
    ui->pushButtonBlanche->setEnabled(true);
    ui->pushButtonNoirP->setEnabled(true);
    ui->pushButtonCroche->setEnabled(true);
    BloquerNotes();
    //Vide le layout
    while (ui->horizontalLayout->count()) {
        for (int p = 0; p < ui->horizontalLayout->count(); p++) {
            QWidget *w = ui->horizontalLayout->itemAt(p)->widget();
            if(w != nullptr)
            {
                w->setVisible(false);
                ui->horizontalLayout->removeWidget(w);
            }
        }
    }
}

void StructureRythm::NouvelleStructure(QString newStructure)
{
    structure = newStructure;
}
/**
 * @brief StructureRythm::on_pushButtonRonde_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une ronde dans le layout
 */
void StructureRythm::on_pushButtonRonde_clicked()
{
    if(nbTempsRestant >= 4)
    {
        structure +="7";
        nbTempsRestant-=4;
        QLabel *ronde = new QLabel;
        ronde->setPixmap(imagesNotes[4]);
        ui->horizontalLayout->addWidget(ronde);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonNoir_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une noir dans le layout
 */
void StructureRythm::on_pushButtonNoir_clicked()
{
    if(nbTempsRestant >= 1)
    {
        structure +="3";
        nbTempsRestant-=1;
        QLabel *noir = new QLabel;
        noir->setPixmap(imagesNotes[0]);
        ui->horizontalLayout->addWidget(noir);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonNoirP_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une noir pointée dans le layout
 */
void StructureRythm::on_pushButtonNoirP_clicked()
{
    if(nbTempsRestant >= 1.5)
    {
        structure +="4";
        nbTempsRestant-=1.5;
        QLabel *noirP = new QLabel;
        noirP->setPixmap(imagesNotes[1]);
        ui->horizontalLayout->addWidget(noirP);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonBlanche_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une blanche dans le layout
 */
void StructureRythm::on_pushButtonBlanche_clicked()
{
    if(nbTempsRestant >= 2)
    {
        structure +="5";
        nbTempsRestant-=2;
        QLabel *blanche = new QLabel;
        blanche->setPixmap(imagesNotes[2]);
        ui->horizontalLayout->addWidget(blanche);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonBlancheP_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une blanche pointée dans le layout
 */
void StructureRythm::on_pushButtonBLancheP_clicked()
{
    if(nbTempsRestant >= 3)
    {
        structure +="6";
        nbTempsRestant-=3;
        QLabel *blancheP = new QLabel;
        blancheP->setPixmap(imagesNotes[3]);
        ui->horizontalLayout->addWidget(blancheP);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonCroche_clicked
 * @return rien
 * @details Ajoute à la trame le numéro de la note correspondante et
 * affiche une croche dans le layout
 */
void StructureRythm::on_pushButtonCroche_clicked()
{
    if(nbTempsRestant >= 0.5)
    {
        structure +="1";
        nbTempsRestant-=0.5;
        QLabel *croche = new QLabel;
        croche->setPixmap(imagesNotes[5]);
        ui->horizontalLayout->addWidget(croche);
    }
    BloquerNotes();
}
/**
 * @brief StructureRythm::on_pushButtonValider_clicked
 * @return rien
 * @details Le signal Valide est emit si le nombre de note correspond
 * au nombre de temps
 */
void StructureRythm::on_pushButtonValider_clicked()
{
    if(nbTempsRestant <= 0)
    {
        emit Valide();
    }
}
/**
 * @brief StructureRythm::on_pushButtonReset_clicked
 * @return rien
 * @details Le nombre de temps est réinitialisé, les boutons
 * redeviennent cliquable et la layout est vidé.
 */
void StructureRythm::on_pushButtonReset_clicked()
{
    ResetStructure();
}
