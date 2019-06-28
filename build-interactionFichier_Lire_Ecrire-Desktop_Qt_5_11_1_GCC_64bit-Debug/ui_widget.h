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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonLire;
    QPushButton *pushButtonEcrire;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pushButtonLire = new QPushButton(Widget);
        pushButtonLire->setObjectName(QStringLiteral("pushButtonLire"));
        pushButtonLire->setGeometry(QRect(60, 30, 161, 25));
        pushButtonEcrire = new QPushButton(Widget);
        pushButtonEcrire->setObjectName(QStringLiteral("pushButtonEcrire"));
        pushButtonEcrire->setGeometry(QRect(60, 80, 161, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonLire->setText(QApplication::translate("Widget", "Lire", nullptr));
        pushButtonEcrire->setText(QApplication::translate("Widget", "Ecrire", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
