#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->setTabEnabled(1,false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonSuite_clicked()
{
    afficherInfos();
}

void Widget::afficherInfos()
{
    double imcs[NBIMC] = {16.5 , 18.5 , 25 , 30 , 35 , 40};
    QString corpulences[NBCORPULENCE] = {"Famine" , "Maigreur" , "Normale" , "Surpoids" , "Obésité modérée" , "Obésité sévère" , "Obésité morbide"};
    double imc = 0;
    nom = ui->lineEditNom->text();
    prenom = ui->lineEditPrenom->text();
    age = ui->spinBoxAge->value();
    poids = ui->doubleSpinBoxPoids->value();
    taille = ui->doubleSpinBoxTaille->value();
    imc = poids / (taille * taille);
    ui->textEditAffichage->clear();
    ui->textEditAffichage->append("Bonjour " + nom + " " + prenom + "\n");
    ui->textEditAffichage->append("Votre indice de masse corporel est de : " + QString::number(imc) + "\n");

    int indiceCorpulence = 0;
    for (int i = 0 ; i < NBIMC - 1 ; i++)
    {
        if(imc > imcs[i] && imc <= imcs[i+1])
        {
            indiceCorpulence = i + 1;
        }
    }

    if(imc < 16.5)
    {
        indiceCorpulence = 0;
    }
    if(imc > 40)
    {
        indiceCorpulence = NBCORPULENCE - 1;
    }

    ui->textEditAffichage->append("Votre corpulence est qualifiée de " + corpulences[indiceCorpulence] + "\n");
    ui->tabWidget->setTabEnabled(1,true);
    ui->tabWidget->setCurrentIndex(1);
}

void Widget::on_pushButtonDevine_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonSexeF->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButtonSexeH->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEditAffichage->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAffichage->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAffichage->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_pushButtonLorentz_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonSexeF->isChecked()) {
        poidsIdeal = taille * 100 - 100 - ((taille*100-150)/2.5);
    }
    if (ui->radioButtonSexeH->isChecked()) {
        poidsIdeal = taille * 100 - 100 - ((taille*100-150)/4);
    }
    if (poidsIdeal > 0) {
        ui->textEditAffichage->append("\nVotre poids ideal avec la formule de lorentz : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAffichage->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAffichage->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_pushButtonLorentzAge_clicked()
{
    double poidsIdeal = 0;
    poidsIdeal = 50 + ((taille*100-150)/4) + (((double)age - 20)/4);
    if (poidsIdeal > 0) {
        ui->textEditAffichage->append("\nVotre poids ideal avec la formule de lorentz en tenant compte de l'age mais pas du sexe : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAffichage->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEditAffichage->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}
