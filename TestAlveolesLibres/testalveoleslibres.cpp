#include "testalveoleslibres.h"
#include "ui_testalveoleslibres.h"

#define NBLIGNES 4
#define NBCOLONNES 5

TestAlveolesLibres::TestAlveolesLibres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestAlveolesLibres)
{
    ui->setupUi(this);
    ui->pushButtonLiberer->setDisabled(true);
    alveoles = new AlveolesLibres(NBLIGNES,NBCOLONNES);

    for(const int & entier : *alveoles)
    {
        ui->listWidgetNumero->addItem(QString :: number(entier));
    }
}

TestAlveolesLibres::~TestAlveolesLibres()
{
    delete ui;
}

void TestAlveolesLibres::AfficherAlveolesLibres()
{
    ui->listWidgetNumero->clear();
    for(int & numAlveole : *alveoles)
        ui->listWidgetNumero->addItem(QString::number(numAlveole));
}

void TestAlveolesLibres::on_pushButtonReserver_clicked()
{
    if (!alveoles->empty())
    {
        int numeroRangee=0,numeroColonne=0;
        ui->pushButtonLiberer->setDisabled(false);

        if(alveoles->Reserver(numeroRangee,numeroColonne))
        {
            int nombreDeLignes=ui->listWidgetNumero->count();

            QString texte = QString::number(numeroRangee) + "," + QString::number(numeroColonne);
            ui->listWidgetRangeeColonne->addItem(texte);
            ui->listWidgetNumero->takeItem(nombreDeLignes-1);
            AfficherAlveolesLibres();
        }
        else {
            ui->listWidgetNumero->setDisabled(true);
            ui->pushButtonReserver->setDisabled(true);
        }


     }
}

void TestAlveolesLibres::on_pushButtonLiberer_clicked()
{
    int numeroRangee=0,numeroColonne=0;
    if(ui->listWidgetRangeeColonne->currentItem())
    {
        /*int numeroAlveole = ui->listWidgetRangeeColonne->currentItem()->text().toInt();
        numeroRangee = ((numeroAlveole -1) / (alveoles->nbColonnes) + 1;
        numeroColonne = (numeroAlveole - 1) % (alveoles->nbColonnes + 1);
        qDebug()<< "Numero alveole"<<numeroAlveole<<"  Rangee"<<numeroRangee<<"  Colonne" << numeroColonne;
        alveoles->Liberer(numeroRangee,numeroColonne);*/

        QListWidgetItem *item = ui->listWidgetRangeeColonne->currentItem();
        QString texte = item->text();
        delete item;
        QStringList coord = texte.split(",");
        alveoles->Liberer(coord[0].toInt(),coord[1].toInt());
        AfficherAlveolesLibres();
        ui->listWidgetRangeeColonne->setCurrentRow(-1);
    }
    else {
        QMessageBox messageBox;
        messageBox.setText("Veuillez sélectionner une alvéole à libérer");
        messageBox.exec();
    }

}

