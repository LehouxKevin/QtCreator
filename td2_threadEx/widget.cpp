#include "widget.h"
#include "ui_widget.h"
#include "monthread.h"

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
    for(int i=0;i<5;i++)
    {
        tab[i]=new MonThread(QString::number(i));
        QObject::connect(tab[i],&MonThread::monId,this,&Widget::on_MonThreadMonId);
    }
    for(int i=0;i<5;i++)
    {
        tab[i]->start();
    }

}

void Widget::on_MonThreadMonId(quint64 threadId)
{
    ui->textBrowserAffichage->append(QString::number(threadId,16));
}
