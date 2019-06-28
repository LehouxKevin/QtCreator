#include "banquemainwindow.h"
#include "ui_banquemainwindow.h"

BanqueMainWindow::BanqueMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BanqueMainWindow)
{
    ui->setupUi(this);

    //ServeurBanque *leServeur = new ServeurBanque(parent);
    leServeur = new ServeurBanque(nullptr);
    leServeur->Start();
}

BanqueMainWindow::~BanqueMainWindow()
{
    leServeur->Stop();
    delete ui;  
}
