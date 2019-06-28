#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    int colonne=0, ligne=0;
    int i=1;
    grille=new QGridLayout();
    afficheur= new QLineEdit();
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    grille->addWidget(afficheur, ligne, colonne,1,4);   //(y,x, rowspan, colspan)


    for(int i=0;i<NBTOUCHES;i++)
    {
        touches[i] = new QPushButton();
        touches[i]->setText(tableDesSymboles[i]);
        connect(touches[i],&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    }
    for(ligne=3;ligne>0;ligne--)
    {
        for(int colonne=0;colonne<3;colonne++)
        {
            grille->addWidget(touches[i],ligne,colonne);
            i++;
        }
        colonne=0;
    }
    ligne=4;
    colonne=3;
    // placement touches operation
    for(int i=12;i<16;i++)
    {
        grille->addWidget(touches[i],ligne,colonne);
        ligne--;
    }
    grille->addWidget(touches[10],4,0);
    grille->addWidget(touches[0],4,1);
    grille->addWidget(touches[11],4,2);

    this->setLayout(grille);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQPushButtonClicked()
{
    QPushButton *touche;
    touche=qobject_cast<QPushButton*>(sender());
    if(touche->text() != "=" && touche->text() != "c")
    {
        afficheur->insert(touche->text());
    }
    else {
        if(touche->text() == "=") // =
        {
            QScriptEngine operation;
            QScriptValue result = operation.evaluate(afficheur->text());
            afficheur->clear();
            afficheur->insert(result.toString());
        }
        else { // c
            afficheur->clear();
        }
    }
}
