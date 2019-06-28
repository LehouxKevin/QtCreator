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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexion;
    QPushButton *pushButtonConnexion;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditNomBdd;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditMotDePasse;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelIP;
    QSpacerItem *verticalSpacer;
    QLabel *labelNomBdd;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelLogin;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelMotDePasse;
    QGroupBox *groupBoxInfosCompte;
    QPushButton *pushButtonAfficherInfos;
    QTextEdit *textEditAffichage;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(745, 557);
        groupBoxConnexion = new QGroupBox(Widget);
        groupBoxConnexion->setObjectName(QStringLiteral("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(20, 10, 691, 241));
        pushButtonConnexion = new QPushButton(groupBoxConnexion);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(430, 80, 211, 25));
        lineEditIP = new QLineEdit(groupBoxConnexion);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(130, 60, 141, 25));
        lineEditNomBdd = new QLineEdit(groupBoxConnexion);
        lineEditNomBdd->setObjectName(QStringLiteral("lineEditNomBdd"));
        lineEditNomBdd->setGeometry(QRect(130, 90, 141, 25));
        lineEditLogin = new QLineEdit(groupBoxConnexion);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(130, 120, 141, 25));
        lineEditMotDePasse = new QLineEdit(groupBoxConnexion);
        lineEditMotDePasse->setObjectName(QStringLiteral("lineEditMotDePasse"));
        lineEditMotDePasse->setGeometry(QRect(130, 150, 141, 25));
        widget = new QWidget(groupBoxConnexion);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 60, 85, 112));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelIP = new QLabel(widget);
        labelIP->setObjectName(QStringLiteral("labelIP"));

        verticalLayout->addWidget(labelIP);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelNomBdd = new QLabel(widget);
        labelNomBdd->setObjectName(QStringLiteral("labelNomBdd"));

        verticalLayout->addWidget(labelNomBdd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelLogin = new QLabel(widget);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));

        verticalLayout->addWidget(labelLogin);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        labelMotDePasse = new QLabel(widget);
        labelMotDePasse->setObjectName(QStringLiteral("labelMotDePasse"));

        verticalLayout->addWidget(labelMotDePasse);

        groupBoxInfosCompte = new QGroupBox(Widget);
        groupBoxInfosCompte->setObjectName(QStringLiteral("groupBoxInfosCompte"));
        groupBoxInfosCompte->setGeometry(QRect(50, 260, 651, 261));
        pushButtonAfficherInfos = new QPushButton(groupBoxInfosCompte);
        pushButtonAfficherInfos->setObjectName(QStringLiteral("pushButtonAfficherInfos"));
        pushButtonAfficherInfos->setGeometry(QRect(150, 30, 321, 25));
        textEditAffichage = new QTextEdit(groupBoxInfosCompte);
        textEditAffichage->setObjectName(QStringLiteral("textEditAffichage"));
        textEditAffichage->setGeometry(QRect(40, 70, 561, 181));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexion->setTitle(QApplication::translate("Widget", "Connexion", nullptr));
        pushButtonConnexion->setText(QApplication::translate("Widget", "Connexion \303\240 la base de donn\303\251es", nullptr));
        labelIP->setText(QApplication::translate("Widget", "Adresse IP", nullptr));
        labelNomBdd->setText(QApplication::translate("Widget", "Nom de la bdd", nullptr));
        labelLogin->setText(QApplication::translate("Widget", "Login", nullptr));
        labelMotDePasse->setText(QApplication::translate("Widget", "Mot de passe", nullptr));
        groupBoxInfosCompte->setTitle(QApplication::translate("Widget", "Affichage infos comptes", nullptr));
        pushButtonAfficherInfos->setText(QApplication::translate("Widget", "Afficher les informations de tous les comptes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
