#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wConnexion=new Connexion();
    if(wConnexion->exec() == 0) // 0 Si signal reject
    {
        qDebug()<<"refuser";
        close();
    }
    else { // 1 Si signal accept
        qDebug()<<"accepter";
        //listeBases=wConnexion->ObtenirListeBases();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonInserer_clicked()
{

}

void MainWindow::on_pushButtonSupprimer_clicked()
{

}

void MainWindow::on_actionConnexion_triggered()
{
    ui->comboBoxBase->clear();
    ui->comboBoxBase->addItem("Choisissez une base");
    ui->comboBoxBase->addItems(wConnexion->ObtenirListeBases());

}

void MainWindow::on_actionQuitter_triggered()
{
    close();
}

void MainWindow::on_comboBoxBase_currentIndexChanged(const QString &arg1)
{
    if(arg1 != "Choisissez une base")
    {
        lireTables();
        ui->comboBoxTable->addItem("Choisissez une table");
    }
}

void MainWindow::on_comboBoxTable_currentIndexChanged(const QString &arg1)
{

}

void MainWindow::lireTables()
{
    //ui->comboBoxBase->currentText()
    QStringList tables = wConnexion->ObtenirDb().tables(QSql::AllTables);
    qDebug()<<wConnexion->ObtenirDb().tables(QSql::AllTables);
    ui->comboBoxTable->clear();
    ui->comboBoxTable->addItems(tables);
}
