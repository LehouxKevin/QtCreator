#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_pushButtonLancer_clicked()
{
    MonThread *tab[5];
    qDebug()<<"nb thread " << MonThread::nbThread;
    for(int i=0;i<5;i++)
    {
        tab[i]=new MonThread(QString::number(i));
        QObject::connect(tab[i],&MonThread::monId,this,&Widget::on_MonThreadMonId);
    }

    qDebug()<<"nb thread après boucle" << MonThread::nbThread;
    tab[0]->start();
    tab[1]->start();
    tab[2]->start();
    tab[3]->start();
    tab[4]->start();
}

void Widget::on_MonThreadMonId(quint64 threadId)
{
    ui->textBrowserAffichage->append(QString::number(threadId,16));
}
