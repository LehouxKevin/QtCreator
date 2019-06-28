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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonVoir;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumero;
    QLineEdit *lineEditNumero;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labeNom;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditNom;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pushButtonVoir = new QPushButton(Widget);
        pushButtonVoir->setObjectName(QStringLiteral("pushButtonVoir"));
        pushButtonVoir->setGeometry(QRect(50, 70, 131, 25));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 251, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNumero = new QLabel(widget);
        labelNumero->setObjectName(QStringLiteral("labelNumero"));

        horizontalLayout->addWidget(labelNumero);

        lineEditNumero = new QLineEdit(widget);
        lineEditNumero->setObjectName(QStringLiteral("lineEditNumero"));

        horizontalLayout->addWidget(lineEditNumero);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 120, 251, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labeNom = new QLabel(widget1);
        labeNom->setObjectName(QStringLiteral("labeNom"));

        horizontalLayout_2->addWidget(labeNom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lineEditNom = new QLineEdit(widget1);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout_2->addWidget(lineEditNom);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonVoir->setText(QApplication::translate("Widget", "VOIR NOM", nullptr));
        labelNumero->setText(QApplication::translate("Widget", "Numero departement  :", nullptr));
        labeNom->setText(QApplication::translate("Widget", "Nom :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
