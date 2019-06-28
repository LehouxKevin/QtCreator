#include "widget.h"
#include "ui_widget.h"



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    layoutQ = new QHBoxLayout();

    mdiAera = new QMdiArea(this);
    //setCentralWidget(mdiAera);
    layoutQ->addWidget(mdiAera);

    bouton = new QPushButton();
    bouton->setText("bonjour");

    pSub = mdiAera->addSubWindow(bouton);

    setLayout(layoutQ);

    mdiAera->showMaximized();
    pSub->showMaximized();
    showMaximized();
}

Widget::~Widget()
{
    delete ui;
}
