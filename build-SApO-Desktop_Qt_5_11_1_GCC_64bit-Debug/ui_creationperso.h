/********************************************************************************
** Form generated from reading UI file 'creationperso.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONPERSO_H
#define UI_CREATIONPERSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreationPerso
{
public:
    QLabel *labelBienvenue;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelChoixClasse;
    QComboBox *comboBoxClasse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPoids;
    QSpinBox *spinBoxPoids;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelArmeDeuxMains;
    QComboBox *comboBoxArmeDeuxMains;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelChoixArmeUneMain;
    QComboBox *comboBoxChoixArmeUneMainDroite;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonEnter;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelChoixArmeDeuxMains;
    QComboBox *comboBoxChoixArmeDeuxMains;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelChoixArmeMainGauche;
    QComboBox *comboBoxChoixArmeMainGauche;

    void setupUi(QDialog *CreationPerso)
    {
        if (CreationPerso->objectName().isEmpty())
            CreationPerso->setObjectName(QStringLiteral("CreationPerso"));
        CreationPerso->resize(423, 500);
        labelBienvenue = new QLabel(CreationPerso);
        labelBienvenue->setObjectName(QStringLiteral("labelBienvenue"));
        labelBienvenue->setGeometry(QRect(140, 10, 141, 17));
        layoutWidget = new QWidget(CreationPerso);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 401, 451));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelChoixClasse = new QLabel(layoutWidget);
        labelChoixClasse->setObjectName(QStringLiteral("labelChoixClasse"));

        horizontalLayout->addWidget(labelChoixClasse);

        comboBoxClasse = new QComboBox(layoutWidget);
        comboBoxClasse->addItem(QString());
        comboBoxClasse->addItem(QString());
        comboBoxClasse->addItem(QString());
        comboBoxClasse->addItem(QString());
        comboBoxClasse->addItem(QString());
        comboBoxClasse->addItem(QString());
        comboBoxClasse->setObjectName(QStringLiteral("comboBoxClasse"));

        horizontalLayout->addWidget(comboBoxClasse);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelNom = new QLabel(layoutWidget);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        horizontalLayout_2->addWidget(labelNom);

        lineEditNom = new QLineEdit(layoutWidget);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setEnabled(true);

        horizontalLayout_2->addWidget(lineEditNom);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelPrenom = new QLabel(layoutWidget);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        horizontalLayout_3->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(layoutWidget);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));
        lineEditPrenom->setEnabled(true);

        horizontalLayout_3->addWidget(lineEditPrenom);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelAge = new QLabel(layoutWidget);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        horizontalLayout_4->addWidget(labelAge);

        spinBoxAge = new QSpinBox(layoutWidget);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setEnabled(true);
        spinBoxAge->setMinimum(16);
        spinBoxAge->setValue(16);

        horizontalLayout_4->addWidget(spinBoxAge);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelTaille = new QLabel(layoutWidget);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        horizontalLayout_5->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setEnabled(true);
        doubleSpinBoxTaille->setMinimum(0.4);
        doubleSpinBoxTaille->setMaximum(2.2);
        doubleSpinBoxTaille->setSingleStep(0.01);
        doubleSpinBoxTaille->setValue(0.4);

        horizontalLayout_5->addWidget(doubleSpinBoxTaille);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelPoids = new QLabel(layoutWidget);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        horizontalLayout_6->addWidget(labelPoids);

        spinBoxPoids = new QSpinBox(layoutWidget);
        spinBoxPoids->setObjectName(QStringLiteral("spinBoxPoids"));
        spinBoxPoids->setEnabled(true);
        spinBoxPoids->setMinimum(45);
        spinBoxPoids->setMaximum(200);

        horizontalLayout_6->addWidget(spinBoxPoids);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelArmeDeuxMains = new QLabel(layoutWidget);
        labelArmeDeuxMains->setObjectName(QStringLiteral("labelArmeDeuxMains"));

        horizontalLayout_7->addWidget(labelArmeDeuxMains);

        comboBoxArmeDeuxMains = new QComboBox(layoutWidget);
        comboBoxArmeDeuxMains->addItem(QString());
        comboBoxArmeDeuxMains->addItem(QString());
        comboBoxArmeDeuxMains->setObjectName(QStringLiteral("comboBoxArmeDeuxMains"));
        comboBoxArmeDeuxMains->setEnabled(true);

        horizontalLayout_7->addWidget(comboBoxArmeDeuxMains);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelChoixArmeUneMain = new QLabel(layoutWidget);
        labelChoixArmeUneMain->setObjectName(QStringLiteral("labelChoixArmeUneMain"));

        horizontalLayout_8->addWidget(labelChoixArmeUneMain);

        comboBoxChoixArmeUneMainDroite = new QComboBox(layoutWidget);
        comboBoxChoixArmeUneMainDroite->setObjectName(QStringLiteral("comboBoxChoixArmeUneMainDroite"));
        comboBoxChoixArmeUneMainDroite->setEnabled(true);

        horizontalLayout_8->addWidget(comboBoxChoixArmeUneMainDroite);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_9->addWidget(pushButtonQuitter);

        pushButtonEnter = new QPushButton(layoutWidget);
        pushButtonEnter->setObjectName(QStringLiteral("pushButtonEnter"));

        horizontalLayout_9->addWidget(pushButtonEnter);


        gridLayout->addLayout(horizontalLayout_9, 10, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelChoixArmeDeuxMains = new QLabel(layoutWidget);
        labelChoixArmeDeuxMains->setObjectName(QStringLiteral("labelChoixArmeDeuxMains"));

        horizontalLayout_10->addWidget(labelChoixArmeDeuxMains);

        comboBoxChoixArmeDeuxMains = new QComboBox(layoutWidget);
        comboBoxChoixArmeDeuxMains->setObjectName(QStringLiteral("comboBoxChoixArmeDeuxMains"));

        horizontalLayout_10->addWidget(comboBoxChoixArmeDeuxMains);


        gridLayout->addLayout(horizontalLayout_10, 9, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelChoixArmeMainGauche = new QLabel(layoutWidget);
        labelChoixArmeMainGauche->setObjectName(QStringLiteral("labelChoixArmeMainGauche"));

        horizontalLayout_11->addWidget(labelChoixArmeMainGauche);

        comboBoxChoixArmeMainGauche = new QComboBox(layoutWidget);
        comboBoxChoixArmeMainGauche->setObjectName(QStringLiteral("comboBoxChoixArmeMainGauche"));

        horizontalLayout_11->addWidget(comboBoxChoixArmeMainGauche);


        gridLayout->addLayout(horizontalLayout_11, 8, 0, 1, 1);


        retranslateUi(CreationPerso);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), CreationPerso, SLOT(close()));

        QMetaObject::connectSlotsByName(CreationPerso);
    } // setupUi

    void retranslateUi(QDialog *CreationPerso)
    {
        CreationPerso->setWindowTitle(QApplication::translate("CreationPerso", "CreationPerso", nullptr));
        labelBienvenue->setText(QApplication::translate("CreationPerso", "Bienvenue Combattant", nullptr));
        labelChoixClasse->setText(QApplication::translate("CreationPerso", "Choix de la classe :", nullptr));
        comboBoxClasse->setItemText(0, QApplication::translate("CreationPerso", "Bretteur", nullptr));
        comboBoxClasse->setItemText(1, QApplication::translate("CreationPerso", "Paladin", nullptr));
        comboBoxClasse->setItemText(2, QApplication::translate("CreationPerso", "Berserk", nullptr));
        comboBoxClasse->setItemText(3, QApplication::translate("CreationPerso", "Assassin", nullptr));
        comboBoxClasse->setItemText(4, QApplication::translate("CreationPerso", "Guerrier", nullptr));
        comboBoxClasse->setItemText(5, QApplication::translate("CreationPerso", "Samourai", nullptr));

        labelNom->setText(QApplication::translate("CreationPerso", "Nom :", nullptr));
        labelPrenom->setText(QApplication::translate("CreationPerso", "Prenom :", nullptr));
        labelAge->setText(QApplication::translate("CreationPerso", "Age :", nullptr));
        labelTaille->setText(QApplication::translate("CreationPerso", "Taille :", nullptr));
        labelPoids->setText(QApplication::translate("CreationPerso", "Poids :", nullptr));
        labelArmeDeuxMains->setText(QApplication::translate("CreationPerso", "Arme \303\240 deux mains :", nullptr));
        comboBoxArmeDeuxMains->setItemText(0, QApplication::translate("CreationPerso", "Non", nullptr));
        comboBoxArmeDeuxMains->setItemText(1, QApplication::translate("CreationPerso", "Oui", nullptr));

        labelChoixArmeUneMain->setText(QApplication::translate("CreationPerso", "Choix de l'arme une main droite", nullptr));
        pushButtonQuitter->setText(QApplication::translate("CreationPerso", "Exit", nullptr));
        pushButtonEnter->setText(QApplication::translate("CreationPerso", "Enter", nullptr));
        labelChoixArmeDeuxMains->setText(QApplication::translate("CreationPerso", "Choix de l'arme \303\240 deux mains", nullptr));
        labelChoixArmeMainGauche->setText(QApplication::translate("CreationPerso", "Choix de l'arme une main gauche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreationPerso: public Ui_CreationPerso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONPERSO_H
