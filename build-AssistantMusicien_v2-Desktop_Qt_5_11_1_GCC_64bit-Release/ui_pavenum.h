/********************************************************************************
** Form generated from reading UI file 'pavenum.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAVENUM_H
#define UI_PAVENUM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaveNum
{
public:
    QLineEdit *lineEditBpm;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonUn;
    QPushButton *pushButtonDeux;
    QPushButton *pushButtonTrois;
    QPushButton *pushButtonQuatre;
    QPushButton *pushButtonCinq;
    QPushButton *pushButtonSix;
    QPushButton *pushButtonSept;
    QPushButton *pushButtonHuit;
    QPushButton *pushButtonNeuf;
    QPushButton *pushButtonZero;
    QPushButton *pushButtonValide;

    void setupUi(QWidget *PaveNum)
    {
        if (PaveNum->objectName().isEmpty())
            PaveNum->setObjectName(QStringLiteral("PaveNum"));
        PaveNum->resize(344, 483);
        PaveNum->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        lineEditBpm = new QLineEdit(PaveNum);
        lineEditBpm->setObjectName(QStringLiteral("lineEditBpm"));
        lineEditBpm->setGeometry(QRect(30, 30, 271, 61));
        pushButtonSupprimer = new QPushButton(PaveNum);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));
        pushButtonSupprimer->setGeometry(QRect(230, 380, 71, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon);
        pushButtonSupprimer->setIconSize(QSize(50, 50));
        pushButtonUn = new QPushButton(PaveNum);
        pushButtonUn->setObjectName(QStringLiteral("pushButtonUn"));
        pushButtonUn->setGeometry(QRect(30, 120, 71, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/num1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUn->setIcon(icon1);
        pushButtonUn->setIconSize(QSize(50, 50));
        pushButtonDeux = new QPushButton(PaveNum);
        pushButtonDeux->setObjectName(QStringLiteral("pushButtonDeux"));
        pushButtonDeux->setGeometry(QRect(130, 120, 71, 61));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/num2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDeux->setIcon(icon2);
        pushButtonDeux->setIconSize(QSize(50, 50));
        pushButtonTrois = new QPushButton(PaveNum);
        pushButtonTrois->setObjectName(QStringLiteral("pushButtonTrois"));
        pushButtonTrois->setGeometry(QRect(230, 120, 71, 61));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/num3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonTrois->setIcon(icon3);
        pushButtonTrois->setIconSize(QSize(50, 50));
        pushButtonQuatre = new QPushButton(PaveNum);
        pushButtonQuatre->setObjectName(QStringLiteral("pushButtonQuatre"));
        pushButtonQuatre->setGeometry(QRect(30, 210, 71, 61));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/num4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQuatre->setIcon(icon4);
        pushButtonQuatre->setIconSize(QSize(50, 50));
        pushButtonCinq = new QPushButton(PaveNum);
        pushButtonCinq->setObjectName(QStringLiteral("pushButtonCinq"));
        pushButtonCinq->setGeometry(QRect(130, 210, 71, 61));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/num5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCinq->setIcon(icon5);
        pushButtonCinq->setIconSize(QSize(50, 50));
        pushButtonSix = new QPushButton(PaveNum);
        pushButtonSix->setObjectName(QStringLiteral("pushButtonSix"));
        pushButtonSix->setGeometry(QRect(230, 210, 71, 61));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/num6.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSix->setIcon(icon6);
        pushButtonSix->setIconSize(QSize(50, 50));
        pushButtonSept = new QPushButton(PaveNum);
        pushButtonSept->setObjectName(QStringLiteral("pushButtonSept"));
        pushButtonSept->setGeometry(QRect(30, 300, 71, 61));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/num7.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSept->setIcon(icon7);
        pushButtonSept->setIconSize(QSize(50, 50));
        pushButtonHuit = new QPushButton(PaveNum);
        pushButtonHuit->setObjectName(QStringLiteral("pushButtonHuit"));
        pushButtonHuit->setGeometry(QRect(130, 300, 71, 61));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/num8.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonHuit->setIcon(icon8);
        pushButtonHuit->setIconSize(QSize(50, 50));
        pushButtonNeuf = new QPushButton(PaveNum);
        pushButtonNeuf->setObjectName(QStringLiteral("pushButtonNeuf"));
        pushButtonNeuf->setGeometry(QRect(230, 300, 71, 61));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/num9.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNeuf->setIcon(icon9);
        pushButtonNeuf->setIconSize(QSize(50, 50));
        pushButtonZero = new QPushButton(PaveNum);
        pushButtonZero->setObjectName(QStringLiteral("pushButtonZero"));
        pushButtonZero->setGeometry(QRect(130, 380, 71, 61));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/num0.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonZero->setIcon(icon10);
        pushButtonZero->setIconSize(QSize(50, 50));
        pushButtonValide = new QPushButton(PaveNum);
        pushButtonValide->setObjectName(QStringLiteral("pushButtonValide"));
        pushButtonValide->setGeometry(QRect(30, 380, 71, 61));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/valide.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValide->setIcon(icon11);
        pushButtonValide->setIconSize(QSize(50, 50));

        retranslateUi(PaveNum);
        QObject::connect(pushButtonValide, SIGNAL(clicked()), PaveNum, SLOT(close()));

        QMetaObject::connectSlotsByName(PaveNum);
    } // setupUi

    void retranslateUi(QWidget *PaveNum)
    {
        PaveNum->setWindowTitle(QApplication::translate("PaveNum", "Form", nullptr));
        pushButtonSupprimer->setText(QString());
        pushButtonUn->setText(QString());
        pushButtonDeux->setText(QString());
        pushButtonTrois->setText(QString());
        pushButtonQuatre->setText(QString());
        pushButtonCinq->setText(QString());
        pushButtonSix->setText(QString());
        pushButtonSept->setText(QString());
        pushButtonHuit->setText(QString());
        pushButtonNeuf->setText(QString());
        pushButtonZero->setText(QString());
        pushButtonValide->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PaveNum: public Ui_PaveNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAVENUM_H
