#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->groupBoxInfosCompte->setEnabled(false);
    ui->lineEditIP->setText("172.18.58.14");
    ui->lineEditNomBdd->setText("banque");
    ui->lineEditLogin->setText("snir");
    ui->lineEditMotDePasse->setText("snir");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonConnexion_clicked()
{
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName(ui->lineEditIP->text());
    bd.setDatabaseName(ui->lineEditNomBdd->text());
    bd.setUserName(ui->lineEditLogin->text());
    bd.setPassword(ui->lineEditMotDePasse->text());
    if(!bd.open())
    {
        qDebug()<<"pb acces bd"<<bd.lastError();
        QMessageBox message;
        //message.setText("Problème de connexion à la base de donnée |"+ui->lineEditNomBdd->text()+"|");
        message.setText(bd.lastError().text());
        message.exec();
    }
    else {
        qDebug()<<"acces bd ok";
        ui->groupBoxInfosCompte->setEnabled(true);
        ui->groupBoxConnexion->setEnabled(false);
    }
}

void Widget::on_pushButtonAfficherInfos_clicked()
{
    QSqlQuery requete("select * from comptes;" );
    if(!requete.exec())
    {
        qDebug()<<"pb requete"<<requete.lastError();
    }

    while(requete.next())
    {
        ui->textEditAffichage->append(requete.value("nom").toString());
        ui->textEditAffichage->append(requete.value("prenom").toString());
        ui->textEditAffichage->append(requete.value("idCompte").toString());
        ui->textEditAffichage->append(requete.value("solde").toString());
    }
}
