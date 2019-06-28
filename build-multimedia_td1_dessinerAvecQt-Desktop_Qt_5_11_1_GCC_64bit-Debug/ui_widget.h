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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonExo1;
    QGraphicsView *maVue;
    QPushButton *pushButtonExo2;
    QPushButton *pushButtonMenage;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonExo3;
    QPushButton *pushButtonExo4;
    QPushButton *pushButtonExo5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(699, 459);
        pushButtonExo1 = new QPushButton(Widget);
        pushButtonExo1->setObjectName(QStringLiteral("pushButtonExo1"));
        pushButtonExo1->setGeometry(QRect(160, 350, 80, 25));
        maVue = new QGraphicsView(Widget);
        maVue->setObjectName(QStringLiteral("maVue"));
        maVue->setGeometry(QRect(40, 20, 501, 321));
        pushButtonExo2 = new QPushButton(Widget);
        pushButtonExo2->setObjectName(QStringLiteral("pushButtonExo2"));
        pushButtonExo2->setGeometry(QRect(250, 350, 80, 25));
        pushButtonMenage = new QPushButton(Widget);
        pushButtonMenage->setObjectName(QStringLiteral("pushButtonMenage"));
        pushButtonMenage->setGeometry(QRect(580, 20, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(580, 50, 80, 25));
        pushButtonExo3 = new QPushButton(Widget);
        pushButtonExo3->setObjectName(QStringLiteral("pushButtonExo3"));
        pushButtonExo3->setGeometry(QRect(340, 350, 80, 25));
        pushButtonExo4 = new QPushButton(Widget);
        pushButtonExo4->setObjectName(QStringLiteral("pushButtonExo4"));
        pushButtonExo4->setGeometry(QRect(200, 390, 80, 25));
        pushButtonExo5 = new QPushButton(Widget);
        pushButtonExo5->setObjectName(QStringLiteral("pushButtonExo5"));
        pushButtonExo5->setGeometry(QRect(300, 390, 80, 25));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonExo1->setText(QApplication::translate("Widget", "Exo 1", nullptr));
        pushButtonExo2->setText(QApplication::translate("Widget", "Exo 2", nullptr));
        pushButtonMenage->setText(QApplication::translate("Widget", "M\303\251nage", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        pushButtonExo3->setText(QApplication::translate("Widget", "Exo 3", nullptr));
        pushButtonExo4->setText(QApplication::translate("Widget", "Exo 4", nullptr));
        pushButtonExo5->setText(QApplication::translate("Widget", "Exo 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
