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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonLireTexte;
    QTextBrowser *textBrowserAffichage;
    QPushButton *pushButtonEcrireTexte;
    QLabel *labelFichierTexte;
    QLabel *labelFichierBinaire;
    QPushButton *pushButtonLireBinaire;
    QPushButton *pushButtonEcrireBinaire;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(675, 500);
        pushButtonLireTexte = new QPushButton(Widget);
        pushButtonLireTexte->setObjectName(QStringLiteral("pushButtonLireTexte"));
        pushButtonLireTexte->setGeometry(QRect(20, 30, 80, 25));
        textBrowserAffichage = new QTextBrowser(Widget);
        textBrowserAffichage->setObjectName(QStringLiteral("textBrowserAffichage"));
        textBrowserAffichage->setGeometry(QRect(20, 100, 631, 351));
        textBrowserAffichage->setReadOnly(false);
        pushButtonEcrireTexte = new QPushButton(Widget);
        pushButtonEcrireTexte->setObjectName(QStringLiteral("pushButtonEcrireTexte"));
        pushButtonEcrireTexte->setGeometry(QRect(120, 30, 80, 25));
        labelFichierTexte = new QLabel(Widget);
        labelFichierTexte->setObjectName(QStringLiteral("labelFichierTexte"));
        labelFichierTexte->setGeometry(QRect(20, 0, 101, 17));
        labelFichierBinaire = new QLabel(Widget);
        labelFichierBinaire->setObjectName(QStringLiteral("labelFichierBinaire"));
        labelFichierBinaire->setGeometry(QRect(270, 0, 121, 17));
        pushButtonLireBinaire = new QPushButton(Widget);
        pushButtonLireBinaire->setObjectName(QStringLiteral("pushButtonLireBinaire"));
        pushButtonLireBinaire->setGeometry(QRect(260, 30, 80, 25));
        pushButtonEcrireBinaire = new QPushButton(Widget);
        pushButtonEcrireBinaire->setObjectName(QStringLiteral("pushButtonEcrireBinaire"));
        pushButtonEcrireBinaire->setGeometry(QRect(350, 30, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(560, 30, 80, 25));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonLireTexte->setText(QApplication::translate("Widget", "Lire", nullptr));
        pushButtonEcrireTexte->setText(QApplication::translate("Widget", "Ecrire", nullptr));
        labelFichierTexte->setText(QApplication::translate("Widget", "Fichier texte :", nullptr));
        labelFichierBinaire->setText(QApplication::translate("Widget", "Fichier binaire :", nullptr));
        pushButtonLireBinaire->setText(QApplication::translate("Widget", "Lire", nullptr));
        pushButtonEcrireBinaire->setText(QApplication::translate("Widget", "Ecrire", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
