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

    /*** Setup tableau info ***/

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
    int ligne=0;    // numero de la ligne
    while(requete.next())
    {
        // ajouter une ligne au tableau
          ui->tableWidgetInfos->insertRow(ui->tableWidgetInfos->rowCount());

          int col=0;      // numero de la colonne
          // ajouter un nom
          QTableWidgetItem *nomItem = new QTableWidgetItem(requete.value("nom").toString());
          ui->tableWidgetInfos->setItem(ligne,col,nomItem);
          col++;
          // ajouter un prenom
          QTableWidgetItem *prenomItem = new QTableWidgetItem(requete.value("prenom").toString());
          ui->tableWidgetInfos->setItem(ligne,col,prenomItem);
          col++;
          // ajouter le numero de compte
          QTableWidgetItem *idCompteItem = new QTableWidgetItem(requete.value("idCompte").toString());
          ui->tableWidgetInfos->setItem(ligne,col,idCompteItem);
          col++;
          // ajouter le solde
          QTableWidgetItem *soldeItem = new QTableWidgetItem(requete.value("solde").toString());
          ui->tableWidgetInfos->setItem(ligne,col,soldeItem);
          ligne++;
    }
}
