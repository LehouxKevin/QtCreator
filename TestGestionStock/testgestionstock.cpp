#include "testgestionstock.h"
#include "ui_testgestionstock.h"


TestGestionStock::TestGestionStock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestGestionStock)
{
    ui->setupUi(this);
    ui->pushButtonSuppression->setEnabled(false);
    ui->lineEditDiametre->setText("100");

}

TestGestionStock::~TestGestionStock()
{

    delete ui;

}

void TestGestionStock::on_pushButtonNouveau_clicked()
{
    QMessageBox messageBox;
    QString message;

    if(ui->lineEditDiametre->text().length()>0 && ui->lineEditReference->text().length()>0)
    {
        string reference = ui->lineEditReference->text().toStdString();
        short diametre = ui->lineEditDiametre->text().toShort();

        Rouleau *rouleau = new Rouleau(reference,diametre);
        leStock.AjouterRouleau(rouleau);
        ui->listWidgetStock->addItem(QString::fromStdString(reference) + " - " + QString::number(diametre));
        if(ui->listWidgetStock->count()>0)
        {
            ui->pushButtonSuppression->setEnabled(true);
        }
        else
        {
            if(ui->listWidgetStock->count()==0)
            {
                ui->pushButtonSuppression->setEnabled(false);
            }
        }
    }
    else {
        if(ui->lineEditReference->text().length()==0)
        {
            message = message + "| Entrez une référence |";
        }
        if(ui->lineEditDiametre->text().length()==0)
        {
            message = message + "| Entrez un diamètre |";
        }
        messageBox.setText(message);
        messageBox.exec();
    }
}

void TestGestionStock::on_pushButtonRetrait_clicked()
{
    QList <Rouleau*>listeRouleaux;
    short diametre=0;
   /* do {
        foreach(Rouleau *rouleau, leStock) // A verifier
        {
            if(rouleau->ObtenirDiametre()>=diametre) // Ne pas prendre le diametre le plus elever mais le plus recurent
            {
                if(rouleau->ObtenirDiametre()==diametre)
                {
                    listeRouleaux.append(rouleau);
                }
                if(rouleau->ObtenirDiametre()>diametre)
                {
                    diametre = rouleau->ObtenirDiametre();
                    listeRouleaux.clear();
                }
            }
     }
    }while(listeRouleaux.length()>=6);
*/
    foreach(Rouleau *rouleau, leStock)
    {
        ui->listWidgetRouleaux->addItem(QString::fromStdString(rouleau->ObtenirReference()) + " - " + QString::number(rouleau->ObtenirDiametre()));
    }
}

void TestGestionStock::on_pushButtonSuppression_clicked()
{
    if(ui->listWidgetRouleaux->count()>0)
    {
        ui->listWidgetRouleaux->clear();
    }

}
