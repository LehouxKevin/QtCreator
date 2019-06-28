#include "signature.h"
#include "ui_signature.h"

Signature::Signature(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signature)
{
    ui->setupUi(this);
}

Signature::~Signature()
{
    delete ui;
    nbTemps = 4;
    nbMesure = 4;
}
/**
 * @brief Signature::RecupererSignature
 * @param nbTempsT
 * @param nbMesureT
 * @return nbTempsT,nbMesureT
 * @details Retourne par référence le nombre de temps
 * et de mesure.
 */
void Signature::RecupererSignature(int &nbTempsT, int &nbMesureT)
{
    nbTempsT = nbTemps;
    nbMesureT = nbMesure;
}

void Signature::NouvelleSignature(int newNbTemps, int newNbMesure)
{
    nbTemps = newNbTemps;
    nbMesure = newNbMesure;
}
/**
 * @brief Signature::on_pushButtonValider_clicked
 * @return rien
 * @details Emet le signal Valide.
 */
void Signature::on_pushButtonValider_clicked()
{
    emit Valide();
}
/**
 * @brief Signature::on_pushButtonUnTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 1.
 */
void Signature::on_toolButtonUnTemps_clicked()
{
    nbTemps = 1;
}
/**
 * @brief Signature::on_pushButtonDeuxTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 2.
 */
void Signature::on_toolButtonDeuxTemps_clicked()
{
    nbTemps = 2;
}
/**
 * @brief Signature::on_pushButtonTroisTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 3.
 */
void Signature::on_toolButtonTroisTemps_clicked()
{
    nbTemps = 3;
}
/**
 * @brief Signature::on_pushButtonQuatreTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 4.
 */
void Signature::on_toolButtonQuatreTemps_clicked()
{
    nbTemps = 4;
}
/**
 * @brief Signature::on_pushButtonCinqTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 5.
 */
void Signature::on_toolButtonCinqTemps_clicked()
{
    nbTemps = 5;
}
/**
 * @brief Signature::on_pushButtonSixTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 6.
 */
void Signature::on_toolButtonSiTemps_clicked()
{
    nbTemps = 6;
}
/**
 * @brief Signature::on_pushButtonSeptTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 7.
 */
void Signature::on_toolButtonSeptTemps_clicked()
{
    nbTemps = 7;
}
/**
 * @brief Signature::on_pushButtonHuitTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 8.
 */
void Signature::on_toolButtonHuitTemps_clicked()
{
    nbTemps = 8;
}
/**
 * @brief Signature::on_pushButtonNeufTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 9.
 */
void Signature::on_toolButtonNeufTemps_clicked()
{
    nbTemps = 9;
}
/**
 * @brief Signature::on_pushButtonDixTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 10.
 */
void Signature::on_toolButtonDixTemps_clicked()
{
    nbTemps = 10;
}
/**
 * @brief Signature::on_pushButtonOnzeTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 11.
 */
void Signature::on_toolButtonOnzeTemps_clicked()
{
    nbTemps = 11;
}
/**
 * @brief Signature::on_pushButtonDouzeTemps_clicked
 * @return rien
 * @details Met le nombre de temps à 12.
 */
void Signature::on_toolButtonDouzeTemps_clicked()
{
    nbTemps = 12;
}
/**
 * @brief Signature::on_toolButtonUneMesure_clicked
 * @return rien
 * @details Met le nombre de mesure à 1.
 */
void Signature::on_toolButtonUneMesure_clicked()
{
    nbMesure = 1;
}
/**
 * @brief Signature::on_toolButtonDeuxMesure_clicked
 * @return rien
 * @details Met le nombre de mesure à 2.
 */
void Signature::on_toolButtonDeuxMesure_clicked()
{
    nbMesure = 2;
}
/**
 * @brief Signature::on_toolButtonQuatreMesure_clicked
 * @return rien
 * @details Met le nombre de mesure à 4.
 */
void Signature::on_toolButtonQuatreMsure_clicked()
{
    nbMesure = 4;
}
/**
 * @brief Signature::on_toolButtonHuitMesure_clicked
 * @return rien
 * @details Met le nombre de mesure à 8.
 */
void Signature::on_toolButtonHuitMesure_clicked()
{
    nbMesure = 8;
}
