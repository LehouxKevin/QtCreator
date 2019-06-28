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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonMoins;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButtonClear;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDiviser;
    QLineEdit *lineEditAfficheur;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonPlus = new QPushButton(Widget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));

        gridLayout->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButtonMoins = new QPushButton(Widget);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));

        gridLayout->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(Widget);
        pushButtonMultiplier->setObjectName(QStringLiteral("pushButtonMultiplier"));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButtonClear = new QPushButton(Widget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButton0 = new QPushButton(Widget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButtonEgal = new QPushButton(Widget);
        pushButtonEgal->setObjectName(QStringLiteral("pushButtonEgal"));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonDiviser = new QPushButton(Widget);
        pushButtonDiviser->setObjectName(QStringLiteral("pushButtonDiviser"));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        lineEditAfficheur = new QLineEdit(Widget);
        lineEditAfficheur->setObjectName(QStringLiteral("lineEditAfficheur"));

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton7->setText(QApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QApplication::translate("Widget", "9", nullptr));
        pushButtonPlus->setText(QApplication::translate("Widget", "+", nullptr));
        pushButton4->setText(QApplication::translate("Widget", "4", nullptr));
        pushButton5->setText(QApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QApplication::translate("Widget", "6", nullptr));
        pushButtonMoins->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton1->setText(QApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QApplication::translate("Widget", "3", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("Widget", "*", nullptr));
        pushButtonClear->setText(QApplication::translate("Widget", "C", nullptr));
        pushButton0->setText(QApplication::translate("Widget", "0", nullptr));
        pushButtonEgal->setText(QApplication::translate("Widget", "=", nullptr));
        pushButtonDiviser->setText(QApplication::translate("Widget", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
