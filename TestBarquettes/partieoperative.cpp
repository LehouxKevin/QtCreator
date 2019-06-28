#include "partieoperative.h"
#include "ui_partieoperative.h"

PartieOperative::PartieOperative(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PartieOperative)
{
    ui->setupUi(this);
    connect(&timerPo,&QTimer::timeout,this,&PartieOperative::on_timerPo_timeout);
    etatCapteur=0;
    memoEtatCapteur=0;
}

PartieOperative::~PartieOperative()
{
    delete ui;
}

void PartieOperative::on_pushButtonDebutProduction_clicked()
{
    timerPo.start(250);
}

void PartieOperative::on_pushButtonNouvelleBarquette_clicked()
{
    if(ui->lineEditNumeroEjecteur->width()>0 && ui->lineEditCodeProduit->width()>0)
    {
        int numEjec = ui->lineEditNumeroEjecteur->text().toInt();
        int codeProd = ui->lineEditCodeProduit->text().toInt();
        Barquette *pBarquette = new Barquette(numEjec,codeProd);
        qDebug()<<"Barquette créée : ejecteur n°"<<numEjec<<" code : "<< codeProd;
        fileBarquettes.enqueue(pBarquette);
    }
}

void PartieOperative::on_timerPo_timeout()
{
    if(ui->checkBoxCapteur1->isChecked())
    {
        etatCapteur |= 0x01;
    }
    else
    {
        etatCapteur &= ~0x01; //0xFE;
    }
    if(ui->checkBoxCapteur2->isChecked())
    {
        etatCapteur |= 0x02;
    }
    else
    {
        etatCapteur &= ~0x02; //0xFD;
    }
    if(ui->checkBoxCapteur3->isChecked())
    {
        etatCapteur |= 0x04;
    }
    else
    {
        etatCapteur &= ~0x04; //0xFB;
    }
    if(ui->checkBoxCapteur4->isChecked())
    {
        etatCapteur |= 0x08;
    }
    else
    {
        etatCapteur &= ~0x08; //0xF7;
    }
    if(etatCapteur !=memoEtatCapteur)
    {
        emit CapteurChange(memoEtatCapteur);
    }
    if((memoEtatCapteur & 0x01 !=etatCapteur & 0x01 )&&(memoEtatCapteur & 0x01 != 0))
    {
        if(!fileBarquettes.isEmpty())
        {
            Barquette *pBarquette = fileBarquettes.dequeue();
            tapis.append(pBarquette);
            pBarquette->start();
        }
    }
    memoEtatCapteur=etatCapteur;
}
