/********************************************************************************
** Form generated from reading UI file 'signature.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNATURE_H
#define UI_SIGNATURE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signature
{
public:
    QGroupBox *groupBoxNbTemps;
    QToolButton *toolButtonUnTemps;
    QToolButton *toolButtonDeuxTemps;
    QToolButton *toolButtonTroisTemps;
    QToolButton *toolButtonQuatreTemps;
    QToolButton *toolButtonCinqTemps;
    QToolButton *toolButtonSiTemps;
    QToolButton *toolButtonSeptTemps;
    QToolButton *toolButtonHuitTemps;
    QToolButton *toolButtonNeufTemps;
    QToolButton *toolButtonDixTemps;
    QToolButton *toolButtonOnzeTemps;
    QToolButton *toolButtonDouzeTemps;
    QGroupBox *groupBox_2;
    QToolButton *toolButtonUneMesure;
    QToolButton *toolButtonQuatreMsure;
    QToolButton *toolButtonHuitMesure;
    QToolButton *toolButtonDeuxMesure;
    QPushButton *pushButtonValider;

    void setupUi(QWidget *Signature)
    {
        if (Signature->objectName().isEmpty())
            Signature->setObjectName(QStringLiteral("Signature"));
        Signature->resize(637, 449);
        Signature->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        groupBoxNbTemps = new QGroupBox(Signature);
        groupBoxNbTemps->setObjectName(QStringLiteral("groupBoxNbTemps"));
        groupBoxNbTemps->setGeometry(QRect(10, 0, 611, 161));
        toolButtonUnTemps = new QToolButton(groupBoxNbTemps);
        toolButtonUnTemps->setObjectName(QStringLiteral("toolButtonUnTemps"));
        toolButtonUnTemps->setGeometry(QRect(10, 70, 34, 33));
        toolButtonDeuxTemps = new QToolButton(groupBoxNbTemps);
        toolButtonDeuxTemps->setObjectName(QStringLiteral("toolButtonDeuxTemps"));
        toolButtonDeuxTemps->setGeometry(QRect(60, 70, 34, 33));
        toolButtonTroisTemps = new QToolButton(groupBoxNbTemps);
        toolButtonTroisTemps->setObjectName(QStringLiteral("toolButtonTroisTemps"));
        toolButtonTroisTemps->setGeometry(QRect(110, 70, 34, 33));
        toolButtonQuatreTemps = new QToolButton(groupBoxNbTemps);
        toolButtonQuatreTemps->setObjectName(QStringLiteral("toolButtonQuatreTemps"));
        toolButtonQuatreTemps->setGeometry(QRect(160, 70, 34, 33));
        toolButtonCinqTemps = new QToolButton(groupBoxNbTemps);
        toolButtonCinqTemps->setObjectName(QStringLiteral("toolButtonCinqTemps"));
        toolButtonCinqTemps->setGeometry(QRect(210, 70, 34, 33));
        toolButtonSiTemps = new QToolButton(groupBoxNbTemps);
        toolButtonSiTemps->setObjectName(QStringLiteral("toolButtonSiTemps"));
        toolButtonSiTemps->setGeometry(QRect(260, 70, 34, 33));
        toolButtonSeptTemps = new QToolButton(groupBoxNbTemps);
        toolButtonSeptTemps->setObjectName(QStringLiteral("toolButtonSeptTemps"));
        toolButtonSeptTemps->setGeometry(QRect(310, 70, 34, 33));
        toolButtonHuitTemps = new QToolButton(groupBoxNbTemps);
        toolButtonHuitTemps->setObjectName(QStringLiteral("toolButtonHuitTemps"));
        toolButtonHuitTemps->setGeometry(QRect(360, 70, 34, 33));
        toolButtonNeufTemps = new QToolButton(groupBoxNbTemps);
        toolButtonNeufTemps->setObjectName(QStringLiteral("toolButtonNeufTemps"));
        toolButtonNeufTemps->setGeometry(QRect(410, 70, 34, 33));
        toolButtonDixTemps = new QToolButton(groupBoxNbTemps);
        toolButtonDixTemps->setObjectName(QStringLiteral("toolButtonDixTemps"));
        toolButtonDixTemps->setGeometry(QRect(460, 70, 34, 33));
        toolButtonOnzeTemps = new QToolButton(groupBoxNbTemps);
        toolButtonOnzeTemps->setObjectName(QStringLiteral("toolButtonOnzeTemps"));
        toolButtonOnzeTemps->setGeometry(QRect(510, 70, 34, 33));
        toolButtonDouzeTemps = new QToolButton(groupBoxNbTemps);
        toolButtonDouzeTemps->setObjectName(QStringLiteral("toolButtonDouzeTemps"));
        toolButtonDouzeTemps->setGeometry(QRect(560, 70, 34, 33));
        groupBox_2 = new QGroupBox(Signature);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 180, 611, 181));
        toolButtonUneMesure = new QToolButton(groupBox_2);
        toolButtonUneMesure->setObjectName(QStringLiteral("toolButtonUneMesure"));
        toolButtonUneMesure->setGeometry(QRect(200, 40, 34, 33));
        toolButtonQuatreMsure = new QToolButton(groupBox_2);
        toolButtonQuatreMsure->setObjectName(QStringLiteral("toolButtonQuatreMsure"));
        toolButtonQuatreMsure->setGeometry(QRect(200, 120, 34, 33));
        toolButtonHuitMesure = new QToolButton(groupBox_2);
        toolButtonHuitMesure->setObjectName(QStringLiteral("toolButtonHuitMesure"));
        toolButtonHuitMesure->setGeometry(QRect(360, 120, 34, 33));
        toolButtonDeuxMesure = new QToolButton(groupBox_2);
        toolButtonDeuxMesure->setObjectName(QStringLiteral("toolButtonDeuxMesure"));
        toolButtonDeuxMesure->setGeometry(QRect(360, 40, 34, 33));
        pushButtonValider = new QPushButton(Signature);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));
        pushButtonValider->setGeometry(QRect(290, 380, 61, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/valide.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValider->setIcon(icon);
        pushButtonValider->setIconSize(QSize(50, 50));

        retranslateUi(Signature);
        QObject::connect(pushButtonValider, SIGNAL(clicked()), Signature, SLOT(close()));

        QMetaObject::connectSlotsByName(Signature);
    } // setupUi

    void retranslateUi(QWidget *Signature)
    {
        Signature->setWindowTitle(QApplication::translate("Signature", "Form", nullptr));
        groupBoxNbTemps->setTitle(QApplication::translate("Signature", "Nombre de temps", nullptr));
        toolButtonUnTemps->setText(QApplication::translate("Signature", "1", nullptr));
        toolButtonDeuxTemps->setText(QApplication::translate("Signature", "2", nullptr));
        toolButtonTroisTemps->setText(QApplication::translate("Signature", "3", nullptr));
        toolButtonQuatreTemps->setText(QApplication::translate("Signature", "4", nullptr));
        toolButtonCinqTemps->setText(QApplication::translate("Signature", "5", nullptr));
        toolButtonSiTemps->setText(QApplication::translate("Signature", "6", nullptr));
        toolButtonSeptTemps->setText(QApplication::translate("Signature", "7", nullptr));
        toolButtonHuitTemps->setText(QApplication::translate("Signature", "8", nullptr));
        toolButtonNeufTemps->setText(QApplication::translate("Signature", "9", nullptr));
        toolButtonDixTemps->setText(QApplication::translate("Signature", "10", nullptr));
        toolButtonOnzeTemps->setText(QApplication::translate("Signature", "11", nullptr));
        toolButtonDouzeTemps->setText(QApplication::translate("Signature", "12", nullptr));
        groupBox_2->setTitle(QApplication::translate("Signature", "Nombre de mesure", nullptr));
        toolButtonUneMesure->setText(QApplication::translate("Signature", "1", nullptr));
        toolButtonQuatreMsure->setText(QApplication::translate("Signature", "4", nullptr));
        toolButtonHuitMesure->setText(QApplication::translate("Signature", "8", nullptr));
        toolButtonDeuxMesure->setText(QApplication::translate("Signature", "2", nullptr));
        pushButtonValider->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signature: public Ui_Signature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNATURE_H
