#include "nbnote.h"
#include "ui_nbnote.h"

NbNote::NbNote(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NbNote)
{
    ui->setupUi(this);
    imagesNotes[0] = QPixmap("://images/NoteDoubleCrocheModifier.png");
    imagesNotes[1] = QPixmap("://images/NoteCrocheModifier.png");
    imagesNotes[2] = QPixmap("://images/NoteCrochePModifier.png");
    imagesNotes[3] = QPixmap("://images/NoteNoirModifier.png");
    imagesNotes[4] = QPixmap("://images/NoteNoirPModifier.png");
    imagesNotes[5] = QPixmap("://images/NoteBlancheModifier.png");
    imagesNotes[6] = QPixmap("://images/NoteBlanchePModifier.png");
    imagesNotes[7] = QPixmap("://images/NoteRondeModifié.png");
}

NbNote::~NbNote()
{
    delete ui;
}
/**
 * @brief NbNote::RecupererNbnote
 * @return nbNote
 * @details Retourne le nombre de note.
 */
int NbNote::RecupererNbnote()
{
    return nbNote;
}

void NbNote::IndiquerNbMesure(int nbMesure)
{
    ui->pushButtonQuatreDCroche->setEnabled(true);
    ui->pushButtonCinqDCroche->setEnabled(true);
    switch (nbMesure) {
    case 1:
        ui->labelNoir->setPixmap(imagesNotes[7]);
        ui->labelDeuxCroche->setPixmap(imagesNotes[5]);
        ui->labelTroisCroche->setPixmap(imagesNotes[5]);
        ui->labelQuatreDCroche->setPixmap(imagesNotes[3]);
        ui->labelCinqDCroche->setPixmap(imagesNotes[3]);
        break;
    case 2:
        ui->labelNoir->setPixmap(imagesNotes[5]);
        ui->labelDeuxCroche->setPixmap(imagesNotes[3]);
        ui->labelTroisCroche->setPixmap(imagesNotes[3]);
        ui->labelQuatreDCroche->setPixmap(imagesNotes[1]);
        ui->labelCinqDCroche->setPixmap(imagesNotes[1]);
        break;
    case 4:
        ui->labelNoir->setPixmap(imagesNotes[3]);
        ui->labelDeuxCroche->setPixmap(imagesNotes[1]);
        ui->labelTroisCroche->setPixmap(imagesNotes[1]);
        ui->labelQuatreDCroche->setPixmap(imagesNotes[0]);
        ui->labelCinqDCroche->setPixmap(imagesNotes[0]);
        break;
    case 8:
        ui->labelNoir->setPixmap(imagesNotes[1]);
        ui->labelDeuxCroche->setPixmap(imagesNotes[0]);
        ui->labelTroisCroche->setPixmap(imagesNotes[0]);
        ui->labelQuatreDCroche->setPixmap(QPixmap(""));
        ui->labelCinqDCroche->setPixmap(QPixmap(""));
        ui->pushButtonQuatreDCroche->setDisabled(true);
        ui->pushButtonCinqDCroche->setDisabled(true);
        break;
    }  
}

void NbNote::NouveauNbNote(int newNbNote)
{
    nbNote = newNbNote;
}
/**
 * @brief NbNote::on_pushButtonNoir_clicked
 * @return rien
 * @details Met le nombre de note à 1.
 */
void NbNote::on_pushButtonNoir_clicked()
{
    nbNote = 1;
}
/**
 * @brief NbNote::on_pushButtonDeuxCroche_clicked
 * @return rien
 * @details Met le nombre de note à 2.
 */
void NbNote::on_pushButtonDeuxCroche_clicked()
{
    nbNote = 2;
}
/**
 * @brief NbNote::on_pushButtonTroisCroche_clicked
 * @return rien
 * @details Met le nombre de note à 3.
 */
void NbNote::on_pushButtonTroisCroche_clicked()
{
    nbNote = 3;
}
/**
 * @brief NbNote::on_pushButtonQuatreDCroche_clicked
 * @return rien
 * @details Met le nombre de note à 4.
 */
void NbNote::on_pushButtonQuatreDCroche_clicked()
{
    nbNote = 4;
}
/**
 * @brief NbNote::on_pushButtonCinqDCroche_clicked
 * @return rien
 * @details Met le nombre de note à 5.
 */
void NbNote::on_pushButtonCinqDCroche_clicked()
{
    nbNote = 5;
}
/**
 * @brief NbNote::on_pushButtonPasSub_clicked
 * @return rien
 * @details Met le nombre de note à 0.
 */
void NbNote::on_pushButtonPasSub_clicked()
{
    nbNote = 0;
}
/**
 * @brief NbNote::on_pushButtonValider_clicked
 * @return rien
 * @details Emet le signal Vailde.
 */
void NbNote::on_pushButtonValider_clicked()
{
    emit Valide();
}
