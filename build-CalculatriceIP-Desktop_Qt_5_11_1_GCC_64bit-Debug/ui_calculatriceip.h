/********************************************************************************
** Form generated from reading UI file 'calculatriceip.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICEIP_H
#define UI_CALCULATRICEIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceIP
{
public:
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *CalculatriceIP)
    {
        if (CalculatriceIP->objectName().isEmpty())
            CalculatriceIP->setObjectName(QStringLiteral("CalculatriceIP"));
        CalculatriceIP->resize(400, 300);
        pushButtonQuitter = new QPushButton(CalculatriceIP);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(280, 240, 80, 25));

        retranslateUi(CalculatriceIP);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), CalculatriceIP, SLOT(close()));

        QMetaObject::connectSlotsByName(CalculatriceIP);
    } // setupUi

    void retranslateUi(QWidget *CalculatriceIP)
    {
        CalculatriceIP->setWindowTitle(QApplication::translate("CalculatriceIP", "CalculatriceIP", nullptr));
        pushButtonQuitter->setText(QApplication::translate("CalculatriceIP", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceIP: public Ui_CalculatriceIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICEIP_H
