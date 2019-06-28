/********************************************************************************
** Form generated from reading UI file 'partieoperative.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIEOPERATIVE_H
#define UI_PARTIEOPERATIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartieOperative
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxCapteur1;
    QCheckBox *checkBoxCapteur2;
    QCheckBox *checkBoxCapteur3;
    QCheckBox *checkBoxCapteur4;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonNouvelleBarquette;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCodeProduit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditCodeProduit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumeroEjecteur;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditNumeroEjecteur;
    QPushButton *pushButtonDebutProduction;
    QPushButton *pushButtonArretProduction;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *PartieOperative)
    {
        if (PartieOperative->objectName().isEmpty())
            PartieOperative->setObjectName(QStringLiteral("PartieOperative"));
        PartieOperative->resize(608, 295);
        groupBox = new QGroupBox(PartieOperative);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 111, 161));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 84, 112));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxCapteur1 = new QCheckBox(widget);
        checkBoxCapteur1->setObjectName(QStringLiteral("checkBoxCapteur1"));

        verticalLayout->addWidget(checkBoxCapteur1);

        checkBoxCapteur2 = new QCheckBox(widget);
        checkBoxCapteur2->setObjectName(QStringLiteral("checkBoxCapteur2"));

        verticalLayout->addWidget(checkBoxCapteur2);

        checkBoxCapteur3 = new QCheckBox(widget);
        checkBoxCapteur3->setObjectName(QStringLiteral("checkBoxCapteur3"));

        verticalLayout->addWidget(checkBoxCapteur3);

        checkBoxCapteur4 = new QCheckBox(widget);
        checkBoxCapteur4->setObjectName(QStringLiteral("checkBoxCapteur4"));

        verticalLayout->addWidget(checkBoxCapteur4);

        groupBox_2 = new QGroupBox(PartieOperative);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 40, 401, 161));
        pushButtonNouvelleBarquette = new QPushButton(groupBox_2);
        pushButtonNouvelleBarquette->setObjectName(QStringLiteral("pushButtonNouvelleBarquette"));
        pushButtonNouvelleBarquette->setGeometry(QRect(130, 120, 161, 25));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 70, 351, 27));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCodeProduit = new QLabel(widget1);
        labelCodeProduit->setObjectName(QStringLiteral("labelCodeProduit"));

        horizontalLayout->addWidget(labelCodeProduit);

        horizontalSpacer = new QSpacerItem(148, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditCodeProduit = new QLineEdit(widget1);
        lineEditCodeProduit->setObjectName(QStringLiteral("lineEditCodeProduit"));

        horizontalLayout->addWidget(lineEditCodeProduit);

        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 30, 351, 27));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNumeroEjecteur = new QLabel(widget2);
        labelNumeroEjecteur->setObjectName(QStringLiteral("labelNumeroEjecteur"));

        horizontalLayout_2->addWidget(labelNumeroEjecteur);

        horizontalSpacer_2 = new QSpacerItem(118, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditNumeroEjecteur = new QLineEdit(widget2);
        lineEditNumeroEjecteur->setObjectName(QStringLiteral("lineEditNumeroEjecteur"));

        horizontalLayout_2->addWidget(lineEditNumeroEjecteur);

        pushButtonDebutProduction = new QPushButton(PartieOperative);
        pushButtonDebutProduction->setObjectName(QStringLiteral("pushButtonDebutProduction"));
        pushButtonDebutProduction->setGeometry(QRect(60, 230, 141, 25));
        pushButtonArretProduction = new QPushButton(PartieOperative);
        pushButtonArretProduction->setObjectName(QStringLiteral("pushButtonArretProduction"));
        pushButtonArretProduction->setGeometry(QRect(210, 230, 141, 25));
        pushButtonQuitter = new QPushButton(PartieOperative);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(480, 230, 91, 25));

        retranslateUi(PartieOperative);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), PartieOperative, SLOT(close()));

        QMetaObject::connectSlotsByName(PartieOperative);
    } // setupUi

    void retranslateUi(QWidget *PartieOperative)
    {
        PartieOperative->setWindowTitle(QApplication::translate("PartieOperative", "PartieOperative", nullptr));
        groupBox->setTitle(QApplication::translate("PartieOperative", "Etat des capteurs", nullptr));
        checkBoxCapteur1->setText(QApplication::translate("PartieOperative", "Capteur 1", nullptr));
        checkBoxCapteur2->setText(QApplication::translate("PartieOperative", "Capteur 2", nullptr));
        checkBoxCapteur3->setText(QApplication::translate("PartieOperative", "Capteur 3", nullptr));
        checkBoxCapteur4->setText(QApplication::translate("PartieOperative", "Capteur 4", nullptr));
        groupBox_2->setTitle(QApplication::translate("PartieOperative", "Barquette", nullptr));
        pushButtonNouvelleBarquette->setText(QApplication::translate("PartieOperative", "Nouvelle Barquette", nullptr));
        labelCodeProduit->setText(QApplication::translate("PartieOperative", "Code produit :", nullptr));
        labelNumeroEjecteur->setText(QApplication::translate("PartieOperative", "Num\303\251ro d'\303\251jecteur :", nullptr));
        pushButtonDebutProduction->setText(QApplication::translate("PartieOperative", "D\303\251but de production", nullptr));
        pushButtonArretProduction->setText(QApplication::translate("PartieOperative", "Arr\303\252t de production", nullptr));
        pushButtonQuitter->setText(QApplication::translate("PartieOperative", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PartieOperative: public Ui_PartieOperative {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIEOPERATIVE_H
