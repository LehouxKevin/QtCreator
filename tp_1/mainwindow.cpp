#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonLinux_clicked()
{
    ui->textBrowserAffichage->append("Bouton Linux");
}

void MainWindow::on_pushButtonWindows_clicked()
{
    ui->textBrowserAffichage->append("Bouton Windows");
}

void MainWindow::on_pushButtonLion_clicked()
{
    ui->textBrowserAffichage->append("Bouton OS X Lion");
}

void MainWindow::on_radioButtonWindows_clicked()
{
    ui->textBrowserAffichage->append("Radio Windows");
}

void MainWindow::on_radioButtonLion_clicked()
{
    ui->textBrowserAffichage->append("Radio OS X Lion");
}

void MainWindow::on_radioButtonLinux_clicked()
{
    ui->textBrowserAffichage->append("Radio Linux");
}

void MainWindow::on_checkBoxWindows_clicked()
{
    if(ui->checkBoxWindows->checkState())
    {
        ui->textBrowserAffichage->append("Windows coche");
    }
    else {
        ui->textBrowserAffichage->append("Windows decoche");
    }
}

void MainWindow::on_checkBoxLion_clicked()
{
    if(ui->checkBoxLion->checkState())
    {
        ui->textBrowserAffichage->append("OS X Lion coche");
    }
    else {
        ui->textBrowserAffichage->append("OS X Lion decoche");
    }
}

void MainWindow::on_checkBoxLinux_clicked()
{
    if(ui->checkBoxLinux->checkState())
    {
        ui->textBrowserAffichage->append("Linux coche");
    }
    else {
        ui->textBrowserAffichage->append("Linux decoche");
    }
}

void MainWindow::on_lineEditCode_textChanged(const QString &arg1)
{
    ui->textBrowserAffichage->append(arg1);
}

void MainWindow::on_comboBox_OS_currentIndexChanged(const QString &arg1)
{
    ui->textBrowserAffichage->append(arg1);
}

void MainWindow::on_actionC_triggered()
{
    ui->textBrowserAffichage->append("C");
}

void MainWindow::on_actionJAVA_triggered()
{
    ui->textBrowserAffichage->append("JAVA");
}

void MainWindow::on_actionCpp_triggered()
{
    ui->textBrowserAffichage->append("C++");
}

void MainWindow::on_actionPHP_triggered()
{
    ui->textBrowserAffichage->append("PHP");
}

void MainWindow::on_actionJavascript_triggered()
{
    ui->textBrowserAffichage->append("Javascript");
}
