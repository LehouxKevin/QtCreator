#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QDebug>
#include <QFileDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonLireBinaire_clicked()
{
    QString nomFichier=QFileDialog::getOpenFileName(this,tr("Ouvrir fichier"),".",tr("Fichiers images (*.png *.jpg *.gif);;Fichier texte (*.txt);;Fichier binaire (*.bin);;Tous les fichiers (*)"));

    QFile fichierEntreeBinaire(nomFichier);
    if (!fichierEntreeBinaire.open(QIODevice::ReadOnly))
    {
        qDebug()<<fichierEntreeBinaire.errorString();
    }
    else
    {
        // association de mon fichier à un flux binaire
        QDataStream in(&fichierEntreeBinaire);
        // lire le fichier binaire
        QString nom;
        QString prenom;
        int age;
        double taille;
        QChar sexe;
        in>>nom>>prenom>>age>>taille>>sexe;
        ui->textBrowserAffichage->clear();
        ui->textBrowserAffichage->append("Nom : " + nom);
        ui->textBrowserAffichage->append("Prenom : " + prenom);
        ui->textBrowserAffichage->append("Age : " + QString::number(age));
        ui->textBrowserAffichage->append("Taille : " + QString::number(taille));
        QString tmp;
        ui->textBrowserAffichage->append("Sexe : " + tmp.append(sexe));

        fichierEntreeBinaire.close();
    }
}

void Widget::on_pushButtonEcrireBinaire_clicked()
{
    QFile fichierSortieBinaire("test.bin");
    if (!fichierSortieBinaire.open(QIODevice::WriteOnly))
    {
        qDebug()<<fichierSortieBinaire.errorString();
    }
    else
    {
        // association de mon fichier à un flux binaire
        QDataStream out(&fichierSortieBinaire);
        QString nomOut="Bidochon";
        QString prenomOut("Robert");
        int ageOut=54;
        double tailleOut=1.65;
        QChar sexeOut='M';
        out<<nomOut<<prenomOut<<ageOut<<tailleOut<<sexeOut;

        ui->textBrowserAffichage->clear();
        ui->textBrowserAffichage->append("Ecriture reussie");

        fichierSortieBinaire.close();
    }
}

void Widget::on_pushButtonLireTexte_clicked()
{
    ui->textBrowserAffichage->clear();
    QFile fichier("texte.txt");
    if (!fichier.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<fichier.errorString();
    }
    else {
        // association de mon fichier à un flux
        QTextStream in(&fichier);
        // lire chaque ligne du fichier jusqu'à la fin
        while (!in.atEnd())
        {
            QString line = in.readLine();
            qDebug()<<line;
            ui->textBrowserAffichage->append(line);
        }
    }
}

void Widget::on_pushButtonEcrireTexte_clicked()
{
    QFile fichier("texte.txt");
    if (!fichier.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<fichier.errorString();
    }
    else {
        // association de mon fichier à un flux
        QTextStream out(&fichier);
        QString message = ui->textBrowserAffichage->toPlainText();
        out << message;
        fichier.close();
    }

}
