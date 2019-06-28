/********************************************************************************
** Form generated from reading UI file 'nbnote.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NBNOTE_H
#define UI_NBNOTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NbNote
{
public:
    QPushButton *pushButtonNoir;
    QPushButton *pushButtonDeuxCroche;
    QPushButton *pushButtonTroisCroche;
    QPushButton *pushButtonQuatreDCroche;
    QPushButton *pushButtonCinqDCroche;
    QPushButton *pushButtonPasSub;
    QPushButton *pushButtonValider;
    QLabel *labelNoir;
    QLabel *labelDeuxCroche;
    QLabel *labelTroisCroche;
    QLabel *labelQuatreDCroche;
    QLabel *labelCinqDCroche;

    void setupUi(QWidget *NbNote)
    {
        if (NbNote->objectName().isEmpty())
            NbNote->setObjectName(QStringLiteral("NbNote"));
        NbNote->resize(442, 380);
        NbNote->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        pushButtonNoir = new QPushButton(NbNote);
        pushButtonNoir->setObjectName(QStringLiteral("pushButtonNoir"));
        pushButtonNoir->setGeometry(QRect(30, 160, 61, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/num1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNoir->setIcon(icon);
        pushButtonNoir->setIconSize(QSize(50, 50));
        pushButtonDeuxCroche = new QPushButton(NbNote);
        pushButtonDeuxCroche->setObjectName(QStringLiteral("pushButtonDeuxCroche"));
        pushButtonDeuxCroche->setGeometry(QRect(110, 160, 61, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/num2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDeuxCroche->setIcon(icon1);
        pushButtonDeuxCroche->setIconSize(QSize(50, 50));
        pushButtonTroisCroche = new QPushButton(NbNote);
        pushButtonTroisCroche->setObjectName(QStringLiteral("pushButtonTroisCroche"));
        pushButtonTroisCroche->setGeometry(QRect(190, 160, 61, 61));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/num3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonTroisCroche->setIcon(icon2);
        pushButtonTroisCroche->setIconSize(QSize(50, 50));
        pushButtonQuatreDCroche = new QPushButton(NbNote);
        pushButtonQuatreDCroche->setObjectName(QStringLiteral("pushButtonQuatreDCroche"));
        pushButtonQuatreDCroche->setGeometry(QRect(270, 160, 61, 61));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/num4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQuatreDCroche->setIcon(icon3);
        pushButtonQuatreDCroche->setIconSize(QSize(50, 50));
        pushButtonCinqDCroche = new QPushButton(NbNote);
        pushButtonCinqDCroche->setObjectName(QStringLiteral("pushButtonCinqDCroche"));
        pushButtonCinqDCroche->setGeometry(QRect(350, 160, 61, 61));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/num5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCinqDCroche->setIcon(icon4);
        pushButtonCinqDCroche->setIconSize(QSize(50, 50));
        pushButtonPasSub = new QPushButton(NbNote);
        pushButtonPasSub->setObjectName(QStringLiteral("pushButtonPasSub"));
        pushButtonPasSub->setGeometry(QRect(130, 240, 181, 34));
        pushButtonValider = new QPushButton(NbNote);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));
        pushButtonValider->setGeometry(QRect(190, 280, 61, 61));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/valide.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValider->setIcon(icon5);
        pushButtonValider->setIconSize(QSize(50, 50));
        labelNoir = new QLabel(NbNote);
        labelNoir->setObjectName(QStringLiteral("labelNoir"));
        labelNoir->setGeometry(QRect(40, 60, 41, 81));
        labelNoir->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/NoteNoirModifier.png")));
        labelDeuxCroche = new QLabel(NbNote);
        labelDeuxCroche->setObjectName(QStringLiteral("labelDeuxCroche"));
        labelDeuxCroche->setGeometry(QRect(120, 50, 61, 91));
        labelDeuxCroche->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/NoteCrocheModifier.png")));
        labelTroisCroche = new QLabel(NbNote);
        labelTroisCroche->setObjectName(QStringLiteral("labelTroisCroche"));
        labelTroisCroche->setGeometry(QRect(200, 50, 61, 91));
        labelTroisCroche->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/NoteCrocheModifier.png")));
        labelQuatreDCroche = new QLabel(NbNote);
        labelQuatreDCroche->setObjectName(QStringLiteral("labelQuatreDCroche"));
        labelQuatreDCroche->setGeometry(QRect(270, 60, 61, 81));
        labelQuatreDCroche->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/NoteDoubleCrocheModifier.png")));
        labelCinqDCroche = new QLabel(NbNote);
        labelCinqDCroche->setObjectName(QStringLiteral("labelCinqDCroche"));
        labelCinqDCroche->setGeometry(QRect(350, 60, 61, 81));
        labelCinqDCroche->setPixmap(QPixmap(QString::fromUtf8(":/Images/images/NoteDoubleCrocheModifier.png")));

        retranslateUi(NbNote);
        QObject::connect(pushButtonValider, SIGNAL(clicked()), NbNote, SLOT(close()));

        QMetaObject::connectSlotsByName(NbNote);
    } // setupUi

    void retranslateUi(QWidget *NbNote)
    {
        NbNote->setWindowTitle(QApplication::translate("NbNote", "Form", nullptr));
        pushButtonNoir->setText(QString());
        pushButtonDeuxCroche->setText(QString());
        pushButtonTroisCroche->setText(QString());
        pushButtonQuatreDCroche->setText(QString());
        pushButtonCinqDCroche->setText(QString());
        pushButtonPasSub->setText(QApplication::translate("NbNote", "Pas de subdivision", nullptr));
        pushButtonValider->setText(QString());
        labelNoir->setText(QString());
        labelDeuxCroche->setText(QString());
        labelTroisCroche->setText(QString());
        labelQuatreDCroche->setText(QString());
        labelCinqDCroche->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NbNote: public Ui_NbNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NBNOTE_H
