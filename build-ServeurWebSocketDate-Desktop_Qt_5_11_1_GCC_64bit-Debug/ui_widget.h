/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labelInformations;
    QTextEdit *textEditInformations;
    QPushButton *pushButtonLancer;
    QPushButton *pushButtonArreter;
    QLineEdit *lineEditPort;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        labelInformations = new QLabel(Widget);
        labelInformations->setObjectName(QStringLiteral("labelInformations"));
        labelInformations->setGeometry(QRect(30, 30, 131, 17));
        textEditInformations = new QTextEdit(Widget);
        textEditInformations->setObjectName(QStringLiteral("textEditInformations"));
        textEditInformations->setGeometry(QRect(30, 60, 151, 191));
        pushButtonLancer = new QPushButton(Widget);
        pushButtonLancer->setObjectName(QStringLiteral("pushButtonLancer"));
        pushButtonLancer->setGeometry(QRect(260, 220, 111, 25));
        pushButtonArreter = new QPushButton(Widget);
        pushButtonArreter->setObjectName(QStringLiteral("pushButtonArreter"));
        pushButtonArreter->setGeometry(QRect(260, 250, 111, 25));
        lineEditPort = new QLineEdit(Widget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(270, 160, 91, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelInformations->setText(QApplication::translate("Widget", "Informations Serveur", nullptr));
        pushButtonLancer->setText(QApplication::translate("Widget", "Lancer Serveur", nullptr));
        pushButtonArreter->setText(QApplication::translate("Widget", "Arreter Serveur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
