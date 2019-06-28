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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labelNumeroDept;
    QLineEdit *lineEditNumeroDept;
    QPushButton *pushButtonObtenirNomDept;
    QLabel *labelNomDept;
    QLineEdit *lineEditNomDept;
    QComboBox *comboBoxRegions;
    QComboBox *comboBoxDepartements;
    QComboBox *comboBoxVilles;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(685, 230);
        labelNumeroDept = new QLabel(Widget);
        labelNumeroDept->setObjectName(QStringLiteral("labelNumeroDept"));
        labelNumeroDept->setGeometry(QRect(20, 10, 221, 17));
        lineEditNumeroDept = new QLineEdit(Widget);
        lineEditNumeroDept->setObjectName(QStringLiteral("lineEditNumeroDept"));
        lineEditNumeroDept->setGeometry(QRect(240, 10, 131, 25));
        pushButtonObtenirNomDept = new QPushButton(Widget);
        pushButtonObtenirNomDept->setObjectName(QStringLiteral("pushButtonObtenirNomDept"));
        pushButtonObtenirNomDept->setGeometry(QRect(390, 10, 251, 25));
        labelNomDept = new QLabel(Widget);
        labelNomDept->setObjectName(QStringLiteral("labelNomDept"));
        labelNomDept->setGeometry(QRect(10, 60, 141, 16));
        lineEditNomDept = new QLineEdit(Widget);
        lineEditNomDept->setObjectName(QStringLiteral("lineEditNomDept"));
        lineEditNomDept->setEnabled(true);
        lineEditNomDept->setGeometry(QRect(150, 60, 181, 25));
        comboBoxRegions = new QComboBox(Widget);
        comboBoxRegions->setObjectName(QStringLiteral("comboBoxRegions"));
        comboBoxRegions->setGeometry(QRect(30, 120, 181, 25));
        comboBoxDepartements = new QComboBox(Widget);
        comboBoxDepartements->setObjectName(QStringLiteral("comboBoxDepartements"));
        comboBoxDepartements->setGeometry(QRect(230, 120, 181, 25));
        comboBoxVilles = new QComboBox(Widget);
        comboBoxVilles->setObjectName(QStringLiteral("comboBoxVilles"));
        comboBoxVilles->setGeometry(QRect(430, 120, 181, 25));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 180, 131, 25));

        retranslateUi(Widget);
        QObject::connect(pushButton, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNumeroDept->setText(QApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement :", nullptr));
        pushButtonObtenirNomDept->setText(QApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
        labelNomDept->setText(QApplication::translate("Widget", "Nom du departement :", nullptr));
        pushButton->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
