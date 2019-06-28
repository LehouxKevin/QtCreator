#include "pavenum.h"
#include "ui_pavenum.h"
#include <QIntValidator>

PaveNum::PaveNum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaveNum)
{
    ui->setupUi(this);
    QIntValidator *antiLettre = new QIntValidator (1,360,ui->lineEditBpm);
    ui->lineEditBpm->setValidator(antiLettre);
}

PaveNum::~PaveNum()
{
    delete ui;
}
/**
 * @brief PaveNum::RecupererBpm
 * @return Bpm
 * @details Récupére le tempo et le retourne.
 */
int PaveNum::RecupererBpm()
{
    return ui->lineEditBpm->text().toInt();
}
/**
 * @brief PaveNum::on_pushButtonUn_clicked
 * @return rien
 * @details Insert le chiffre 1 dans le line edit.
 */
void PaveNum::on_pushButtonUn_clicked()
{
    ui->lineEditBpm->insert("1");
}
/**
 * @brief PaveNum::on_pushButtonDeux_clicked
 * @return rien
 * @details Insert le chiffre 2 dans le line edit.
 */
void PaveNum::on_pushButtonDeux_clicked()
{
    ui->lineEditBpm->insert("2");
}
/**
 * @brief PaveNum::on_pushButtonTrois_clicked
 * @return rien
 * @details Insert le chiffre 3 dans le line edit.
 */
void PaveNum::on_pushButtonTrois_clicked()
{
    ui->lineEditBpm->insert("3");
}
/**
 * @brief PaveNum::on_pushButtonQuatre_clicked
 * @return rien
 * @details Insert le chiffre 4 dans le line edit.
 */
void PaveNum::on_pushButtonQuatre_clicked()
{
    ui->lineEditBpm->insert("4");
}
/**
 * @brief PaveNum::on_pushButtonCinq_clicked
 * @return rien
 * @details Insert le chiffre 5 dans le line edit.
 */
void PaveNum::on_pushButtonCinq_clicked()
{
    ui->lineEditBpm->insert("5");
}
/**
 * @brief PaveNum::on_pushButtonSix_clicked
 * @return rien
 * @details Insert le chiffre 6 dans le line edit.
 */
void PaveNum::on_pushButtonSix_clicked()
{
    ui->lineEditBpm->insert("6");
}
/**
 * @brief PaveNum::on_pushButtonSept_clicked
 * @return rien
 * @details Insert le chiffre 7 dans le line edit.
 */
void PaveNum::on_pushButtonSept_clicked()
{
    ui->lineEditBpm->insert("7");
}
/**
 * @brief PaveNum::on_pushButtonHuit_clicked
 * @return rien
 * @details Insert le chiffre 8 dans le line edit.
 */
void PaveNum::on_pushButtonHuit_clicked()
{
    ui->lineEditBpm->insert("8");
}
/**
 * @brief PaveNum::on_pushButtonNeuf_clicked
 * @return rien
 * @details Insert le chiffre 9 dans le line edit.
 */
void PaveNum::on_pushButtonNeuf_clicked()
{
    ui->lineEditBpm->insert("9");
}
/**
 * @brief PaveNum::on_pushButtonValide_clicked
 * @return rien
 * @details Emet le signal Valide.
 */
void PaveNum::on_pushButtonValide_clicked()
{
    emit Valide();
}
/**
 * @brief PaveNum::on_pushButtonZero_clicked
 * @return rien
 * @details Insert le chiffre 0 dans le line edit.
 */
void PaveNum::on_pushButtonZero_clicked()
{
    ui->lineEditBpm->insert("0");
}
/**
 * @brief PaveNum::on_pushButtonSupprimer_clicked
 * @return rien
 * @details Supprime le texte du line edit.
 */
void PaveNum::on_pushButtonSupprimer_clicked()
{
    ui->lineEditBpm->clear();
}
