/********************************************************************************
** Form generated from reading UI file 'testgestionstock.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTGESTIONSTOCK_H
#define UI_TESTGESTIONSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestGestionStock
{
public:
    QPushButton *pushButtonNouveau;
    QPushButton *pushButtonRetrait;
    QPushButton *pushButtonSuppression;
    QPushButton *pushButtonQuitter;
    QLabel *labelStock;
    QLabel *labelRetenus;
    QListWidget *listWidgetStock;
    QListWidget *listWidgetRouleaux;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelDiametre;
    QLineEdit *lineEditDiametre;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelReference;
    QLineEdit *lineEditReference;

    void setupUi(QWidget *TestGestionStock)
    {
        if (TestGestionStock->objectName().isEmpty())
            TestGestionStock->setObjectName(QStringLiteral("TestGestionStock"));
        TestGestionStock->resize(587, 509);
        pushButtonNouveau = new QPushButton(TestGestionStock);
        pushButtonNouveau->setObjectName(QStringLiteral("pushButtonNouveau"));
        pushButtonNouveau->setGeometry(QRect(20, 160, 151, 25));
        pushButtonRetrait = new QPushButton(TestGestionStock);
        pushButtonRetrait->setObjectName(QStringLiteral("pushButtonRetrait"));
        pushButtonRetrait->setGeometry(QRect(20, 200, 151, 25));
        pushButtonSuppression = new QPushButton(TestGestionStock);
        pushButtonSuppression->setObjectName(QStringLiteral("pushButtonSuppression"));
        pushButtonSuppression->setGeometry(QRect(20, 240, 151, 25));
        pushButtonQuitter = new QPushButton(TestGestionStock);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(20, 320, 151, 25));
        labelStock = new QLabel(TestGestionStock);
        labelStock->setObjectName(QStringLiteral("labelStock"));
        labelStock->setGeometry(QRect(210, 50, 161, 17));
        labelRetenus = new QLabel(TestGestionStock);
        labelRetenus->setObjectName(QStringLiteral("labelRetenus"));
        labelRetenus->setGeometry(QRect(400, 50, 141, 17));
        listWidgetStock = new QListWidget(TestGestionStock);
        listWidgetStock->setObjectName(QStringLiteral("listWidgetStock"));
        listWidgetStock->setGeometry(QRect(210, 80, 161, 401));
        listWidgetRouleaux = new QListWidget(TestGestionStock);
        listWidgetRouleaux->setObjectName(QStringLiteral("listWidgetRouleaux"));
        listWidgetRouleaux->setGeometry(QRect(400, 80, 161, 401));
        widget = new QWidget(TestGestionStock);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 90, 181, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelDiametre = new QLabel(widget);
        labelDiametre->setObjectName(QStringLiteral("labelDiametre"));

        horizontalLayout->addWidget(labelDiametre);

        lineEditDiametre = new QLineEdit(widget);
        lineEditDiametre->setObjectName(QStringLiteral("lineEditDiametre"));

        horizontalLayout->addWidget(lineEditDiametre);

        widget1 = new QWidget(TestGestionStock);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 50, 181, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelReference = new QLabel(widget1);
        labelReference->setObjectName(QStringLiteral("labelReference"));

        horizontalLayout_2->addWidget(labelReference);

        lineEditReference = new QLineEdit(widget1);
        lineEditReference->setObjectName(QStringLiteral("lineEditReference"));

        horizontalLayout_2->addWidget(lineEditReference);


        retranslateUi(TestGestionStock);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), TestGestionStock, SLOT(close()));

        QMetaObject::connectSlotsByName(TestGestionStock);
    } // setupUi

    void retranslateUi(QWidget *TestGestionStock)
    {
        TestGestionStock->setWindowTitle(QApplication::translate("TestGestionStock", "TestGestionStock", nullptr));
        pushButtonNouveau->setText(QApplication::translate("TestGestionStock", "Nouveau", nullptr));
        pushButtonRetrait->setText(QApplication::translate("TestGestionStock", "Retrait", nullptr));
        pushButtonSuppression->setText(QApplication::translate("TestGestionStock", "Suppression", nullptr));
        pushButtonQuitter->setText(QApplication::translate("TestGestionStock", "Quitter", nullptr));
        labelStock->setText(QApplication::translate("TestGestionStock", "Rouleaux en stock", nullptr));
        labelRetenus->setText(QApplication::translate("TestGestionStock", "Rouleaux retenus", nullptr));
        labelDiametre->setText(QApplication::translate("TestGestionStock", "Diam\303\250tre :", nullptr));
        labelReference->setText(QApplication::translate("TestGestionStock", "R\303\251f\303\251rence :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestGestionStock: public Ui_TestGestionStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTGESTIONSTOCK_H
