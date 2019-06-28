#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    int colonne=0, ligne=0;
    int i=0;
    grille=new QGridLayout();
    afficheur= new QLineEdit();
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    grille->addWidget(afficheur, ligne, colonne,1,10);   //(y,x, rowspan, colspan)

    for(int i=0;i<NBTOUCHES;i++)
    {
        touches[i] = new QPushButton();
        touches[i]->setText(tableDesSymboles[i]);
        connect(touches[i],&QPushButton::clicked,this,&Widget::onQPushButtonClicked);
    }
    for(ligne=1;ligne<4;ligne++)
    {
        for(int colonne=0;colonne<9;colonne++)
        {
            grille->addWidget(touches[i],ligne,colonne);
            i++;
        }
        colonne=0;
    }
    ligne=5;
    i=26;
    for(colonne=-1;colonne<9;colonne++)
    {
        grille->addWidget(touches[i],ligne,colonne);
        i++;
    }
    grille->addWidget(touches[36],7,9,1,1);

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
    if(touche->text() != "entree")
    {
        afficheur->insert(touche->text());
    }
    else {
        afficheur->clear();
    }

}

