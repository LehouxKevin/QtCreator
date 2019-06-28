/********************************************************************************
** Form generated from reading UI file 'gestionnairelistes.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONNAIRELISTES_H
#define UI_GESTIONNAIRELISTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionnaireListes
{
public:
    QGroupBox *groupBoxListeLecture;
    QLineEdit *lineEditListe;
    QLabel *label_9;
    QLineEdit *lineEditDureeTotale;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEditNbTitres;
    QPushButton *pushButtonNouveauConcert;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonEnregistrer;
    QGroupBox *groupBox;
    QPushButton *pushButtonSauvegarder;
    QPushButton *pushButtonOuvrirTitre;
    QPushButton *pushButtonModifier;
    QLineEdit *lineEditPartition;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditInterprete;
    QLineEdit *lineEditTempo;
    QLabel *label_4;
    QLineEdit *lineEditDuree;
    QLabel *label_5;
    QLineEdit *lineEditTonalite;
    QPushButton *pushButtonModifierAudio;
    QPushButton *pushButtonLancerAudio;
    QLabel *label_6;
    QLineEdit *lineEditAudio;
    QPushButton *pushButtonModifierPartition;
    QPushButton *pushButtonLancerPartition;
    QPushButton *pushButtonModifierEnregistrement;
    QPushButton *pushButtonLancerEnregistrement;
    QLabel *label_8;
    QLineEdit *lineEditEnregistrement;
    QPushButton *pushButtonRenommer;
    QPushButton *pushButtonNouveau;
    QGroupBox *groupBoxOrganisation;
    QPushButton *pushButtonDescendre;
    QPushButton *pushButtonMonter;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonLancerSetAudio;
    QPushButton *pushButtonLancerSetPartition;
    QPushButton *pushButtonLancerSetEnregistrement;
    QListWidget *listWidgetListe;
    QPushButton *pushButtonAjouterListe;

    void setupUi(QWidget *GestionnaireListes)
    {
        if (GestionnaireListes->objectName().isEmpty())
            GestionnaireListes->setObjectName(QStringLiteral("GestionnaireListes"));
        GestionnaireListes->resize(1457, 816);
        groupBoxListeLecture = new QGroupBox(GestionnaireListes);
        groupBoxListeLecture->setObjectName(QStringLiteral("groupBoxListeLecture"));
        groupBoxListeLecture->setGeometry(QRect(20, 20, 631, 211));
        lineEditListe = new QLineEdit(groupBoxListeLecture);
        lineEditListe->setObjectName(QStringLiteral("lineEditListe"));
        lineEditListe->setGeometry(QRect(120, 50, 340, 30));
        lineEditListe->setMinimumSize(QSize(340, 30));
        lineEditListe->setMaximumSize(QSize(335, 30));
        lineEditListe->setReadOnly(true);
        label_9 = new QLabel(groupBoxListeLecture);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(480, 50, 120, 30));
        lineEditDureeTotale = new QLineEdit(groupBoxListeLecture);
        lineEditDureeTotale->setObjectName(QStringLiteral("lineEditDureeTotale"));
        lineEditDureeTotale->setGeometry(QRect(480, 80, 120, 27));
        label_10 = new QLabel(groupBoxListeLecture);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(15, 50, 91, 30));
        label_11 = new QLabel(groupBoxListeLecture);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(480, 120, 120, 30));
        lineEditNbTitres = new QLineEdit(groupBoxListeLecture);
        lineEditNbTitres->setObjectName(QStringLiteral("lineEditNbTitres"));
        lineEditNbTitres->setGeometry(QRect(480, 150, 120, 30));
        lineEditNbTitres->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonNouveauConcert = new QPushButton(groupBoxListeLecture);
        pushButtonNouveauConcert->setObjectName(QStringLiteral("pushButtonNouveauConcert"));
        pushButtonNouveauConcert->setGeometry(QRect(20, 100, 80, 80));
        pushButtonNouveauConcert->setMinimumSize(QSize(80, 80));
        pushButtonNouveauConcert->setMaximumSize(QSize(80, 80));
        pushButtonNouveauConcert->setToolTipDuration(3);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Nouvelle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNouveauConcert->setIcon(icon);
        pushButtonNouveauConcert->setIconSize(QSize(80, 80));
        pushButtonAjouter = new QPushButton(groupBoxListeLecture);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setGeometry(QRect(140, 100, 80, 80));
        pushButtonAjouter->setMinimumSize(QSize(80, 80));
        pushButtonAjouter->setMaximumSize(QSize(80, 80));
        pushButtonAjouter->setToolTipDuration(3);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Ajouter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouter->setIcon(icon1);
        pushButtonAjouter->setIconSize(QSize(80, 80));
        pushButtonOuvrir = new QPushButton(groupBoxListeLecture);
        pushButtonOuvrir->setObjectName(QStringLiteral("pushButtonOuvrir"));
        pushButtonOuvrir->setGeometry(QRect(260, 100, 80, 80));
        pushButtonOuvrir->setMinimumSize(QSize(80, 80));
        pushButtonOuvrir->setMaximumSize(QSize(80, 80));
        pushButtonOuvrir->setToolTipDuration(3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Ouvrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOuvrir->setIcon(icon2);
        pushButtonOuvrir->setIconSize(QSize(80, 80));
        pushButtonEnregistrer = new QPushButton(groupBoxListeLecture);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(380, 100, 80, 80));
        pushButtonEnregistrer->setMinimumSize(QSize(80, 80));
        pushButtonEnregistrer->setMaximumSize(QSize(80, 80));
        pushButtonEnregistrer->setToolTipDuration(3);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/Enregistrer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnregistrer->setIcon(icon3);
        pushButtonEnregistrer->setIconSize(QSize(80, 80));
        groupBox = new QGroupBox(GestionnaireListes);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 260, 631, 531));
        pushButtonSauvegarder = new QPushButton(groupBox);
        pushButtonSauvegarder->setObjectName(QStringLiteral("pushButtonSauvegarder"));
        pushButtonSauvegarder->setGeometry(QRect(420, 440, 80, 80));
        pushButtonSauvegarder->setMinimumSize(QSize(80, 80));
        pushButtonSauvegarder->setMaximumSize(QSize(80, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/sauvegarde.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSauvegarder->setIcon(icon4);
        pushButtonSauvegarder->setIconSize(QSize(80, 80));
        pushButtonSauvegarder->setFlat(true);
        pushButtonOuvrirTitre = new QPushButton(groupBox);
        pushButtonOuvrirTitre->setObjectName(QStringLiteral("pushButtonOuvrirTitre"));
        pushButtonOuvrirTitre->setGeometry(QRect(320, 440, 80, 80));
        pushButtonOuvrirTitre->setMinimumSize(QSize(80, 80));
        pushButtonOuvrirTitre->setMaximumSize(QSize(80, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/Charger.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOuvrirTitre->setIcon(icon5);
        pushButtonOuvrirTitre->setIconSize(QSize(80, 80));
        pushButtonOuvrirTitre->setFlat(true);
        pushButtonModifier = new QPushButton(groupBox);
        pushButtonModifier->setObjectName(QStringLiteral("pushButtonModifier"));
        pushButtonModifier->setGeometry(QRect(220, 440, 80, 80));
        pushButtonModifier->setMinimumSize(QSize(80, 80));
        pushButtonModifier->setMaximumSize(QSize(80, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/modifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifier->setIcon(icon6);
        pushButtonModifier->setIconSize(QSize(80, 80));
        pushButtonModifier->setFlat(true);
        lineEditPartition = new QLineEdit(groupBox);
        lineEditPartition->setObjectName(QStringLiteral("lineEditPartition"));
        lineEditPartition->setGeometry(QRect(120, 275, 400, 30));
        lineEditPartition->setMinimumSize(QSize(400, 30));
        lineEditPartition->setMaximumSize(QSize(400, 30));
        lineEditPartition->setReadOnly(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 250, 200, 19));
        label_7->setMinimumSize(QSize(200, 0));
        label_7->setMaximumSize(QSize(50, 16777215));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 45, 100, 30));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 80, 100, 30));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 115, 80, 30));
        label_3->setMinimumSize(QSize(80, 30));
        label_3->setMaximumSize(QSize(80, 30));
        lineEditNom = new QLineEdit(groupBox);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setGeometry(QRect(120, 45, 480, 30));
        lineEditNom->setMinimumSize(QSize(480, 0));
        lineEditNom->setMaximumSize(QSize(450, 16777215));
        lineEditInterprete = new QLineEdit(groupBox);
        lineEditInterprete->setObjectName(QStringLiteral("lineEditInterprete"));
        lineEditInterprete->setGeometry(QRect(120, 80, 480, 30));
        lineEditInterprete->setMinimumSize(QSize(480, 30));
        lineEditInterprete->setMaximumSize(QSize(450, 30));
        lineEditTempo = new QLineEdit(groupBox);
        lineEditTempo->setObjectName(QStringLiteral("lineEditTempo"));
        lineEditTempo->setGeometry(QRect(120, 115, 100, 30));
        lineEditTempo->setMinimumSize(QSize(100, 30));
        lineEditTempo->setMaximumSize(QSize(100, 30));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 115, 60, 30));
        label_4->setMinimumSize(QSize(60, 30));
        label_4->setMaximumSize(QSize(60, 30));
        lineEditDuree = new QLineEdit(groupBox);
        lineEditDuree->setObjectName(QStringLiteral("lineEditDuree"));
        lineEditDuree->setGeometry(QRect(500, 115, 100, 30));
        lineEditDuree->setMinimumSize(QSize(100, 30));
        lineEditDuree->setMaximumSize(QSize(100, 30));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 115, 60, 30));
        label_5->setMinimumSize(QSize(60, 30));
        label_5->setMaximumSize(QSize(60, 30));
        lineEditTonalite = new QLineEdit(groupBox);
        lineEditTonalite->setObjectName(QStringLiteral("lineEditTonalite"));
        lineEditTonalite->setGeometry(QRect(300, 115, 100, 30));
        lineEditTonalite->setMinimumSize(QSize(100, 30));
        lineEditTonalite->setMaximumSize(QSize(100, 30));
        pushButtonModifierAudio = new QPushButton(groupBox);
        pushButtonModifierAudio->setObjectName(QStringLiteral("pushButtonModifierAudio"));
        pushButtonModifierAudio->setGeometry(QRect(540, 160, 80, 80));
        pushButtonModifierAudio->setMinimumSize(QSize(80, 80));
        pushButtonModifierAudio->setMaximumSize(QSize(80, 80));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/modificationDossier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifierAudio->setIcon(icon7);
        pushButtonModifierAudio->setIconSize(QSize(80, 80));
        pushButtonModifierAudio->setFlat(true);
        pushButtonLancerAudio = new QPushButton(groupBox);
        pushButtonLancerAudio->setObjectName(QStringLiteral("pushButtonLancerAudio"));
        pushButtonLancerAudio->setGeometry(QRect(15, 160, 80, 80));
        pushButtonLancerAudio->setMinimumSize(QSize(80, 80));
        pushButtonLancerAudio->setMaximumSize(QSize(80, 80));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/audio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLancerAudio->setIcon(icon8);
        pushButtonLancerAudio->setIconSize(QSize(80, 80));
        pushButtonLancerAudio->setFlat(true);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 165, 171, 19));
        lineEditAudio = new QLineEdit(groupBox);
        lineEditAudio->setObjectName(QStringLiteral("lineEditAudio"));
        lineEditAudio->setGeometry(QRect(120, 190, 400, 30));
        lineEditAudio->setMinimumSize(QSize(400, 30));
        lineEditAudio->setMaximumSize(QSize(400, 30));
        lineEditAudio->setReadOnly(true);
        pushButtonModifierPartition = new QPushButton(groupBox);
        pushButtonModifierPartition->setObjectName(QStringLiteral("pushButtonModifierPartition"));
        pushButtonModifierPartition->setGeometry(QRect(540, 250, 80, 80));
        pushButtonModifierPartition->setMinimumSize(QSize(80, 80));
        pushButtonModifierPartition->setMaximumSize(QSize(80, 80));
        pushButtonModifierPartition->setIcon(icon7);
        pushButtonModifierPartition->setIconSize(QSize(80, 80));
        pushButtonModifierPartition->setFlat(true);
        pushButtonLancerPartition = new QPushButton(groupBox);
        pushButtonLancerPartition->setObjectName(QStringLiteral("pushButtonLancerPartition"));
        pushButtonLancerPartition->setGeometry(QRect(15, 250, 80, 80));
        pushButtonLancerPartition->setMinimumSize(QSize(80, 80));
        pushButtonLancerPartition->setMaximumSize(QSize(80, 80));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/note.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLancerPartition->setIcon(icon9);
        pushButtonLancerPartition->setIconSize(QSize(80, 80));
        pushButtonLancerPartition->setFlat(true);
        pushButtonModifierEnregistrement = new QPushButton(groupBox);
        pushButtonModifierEnregistrement->setObjectName(QStringLiteral("pushButtonModifierEnregistrement"));
        pushButtonModifierEnregistrement->setGeometry(QRect(540, 340, 92, 86));
        pushButtonModifierEnregistrement->setMinimumSize(QSize(80, 80));
        pushButtonModifierEnregistrement->setIcon(icon7);
        pushButtonModifierEnregistrement->setIconSize(QSize(80, 80));
        pushButtonModifierEnregistrement->setFlat(true);
        pushButtonLancerEnregistrement = new QPushButton(groupBox);
        pushButtonLancerEnregistrement->setObjectName(QStringLiteral("pushButtonLancerEnregistrement"));
        pushButtonLancerEnregistrement->setGeometry(QRect(15, 340, 80, 80));
        pushButtonLancerEnregistrement->setMinimumSize(QSize(80, 80));
        pushButtonLancerEnregistrement->setMaximumSize(QSize(80, 80));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/Enregistrement.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLancerEnregistrement->setIcon(icon10);
        pushButtonLancerEnregistrement->setIconSize(QSize(80, 80));
        pushButtonLancerEnregistrement->setFlat(true);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 335, 241, 19));
        lineEditEnregistrement = new QLineEdit(groupBox);
        lineEditEnregistrement->setObjectName(QStringLiteral("lineEditEnregistrement"));
        lineEditEnregistrement->setGeometry(QRect(120, 360, 400, 30));
        lineEditEnregistrement->setMinimumSize(QSize(400, 30));
        lineEditEnregistrement->setMaximumSize(QSize(400, 16777215));
        lineEditEnregistrement->setReadOnly(true);
        pushButtonRenommer = new QPushButton(groupBox);
        pushButtonRenommer->setObjectName(QStringLiteral("pushButtonRenommer"));
        pushButtonRenommer->setGeometry(QRect(540, 440, 80, 80));
        pushButtonRenommer->setMinimumSize(QSize(80, 80));
        pushButtonRenommer->setMaximumSize(QSize(80, 80));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/renommer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRenommer->setIcon(icon11);
        pushButtonRenommer->setIconSize(QSize(80, 80));
        pushButtonRenommer->setFlat(true);
        pushButtonNouveau = new QPushButton(groupBox);
        pushButtonNouveau->setObjectName(QStringLiteral("pushButtonNouveau"));
        pushButtonNouveau->setGeometry(QRect(120, 440, 80, 80));
        pushButtonNouveau->setMinimumSize(QSize(80, 80));
        pushButtonNouveau->setMaximumSize(QSize(80, 80));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/nouveau.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNouveau->setIcon(icon12);
        pushButtonNouveau->setIconSize(QSize(80, 80));
        pushButtonNouveau->setFlat(true);
        label_2->raise();
        label_3->raise();
        lineEditNom->raise();
        lineEditInterprete->raise();
        lineEditTempo->raise();
        label_4->raise();
        lineEditDuree->raise();
        label_5->raise();
        lineEditTonalite->raise();
        pushButtonModifierAudio->raise();
        pushButtonLancerAudio->raise();
        label_6->raise();
        lineEditAudio->raise();
        pushButtonModifierPartition->raise();
        pushButtonLancerPartition->raise();
        pushButtonModifierEnregistrement->raise();
        pushButtonLancerEnregistrement->raise();
        label_8->raise();
        lineEditEnregistrement->raise();
        pushButtonSauvegarder->raise();
        pushButtonOuvrirTitre->raise();
        pushButtonModifier->raise();
        lineEditPartition->raise();
        label_7->raise();
        label->raise();
        pushButtonRenommer->raise();
        pushButtonNouveau->raise();
        groupBoxOrganisation = new QGroupBox(GestionnaireListes);
        groupBoxOrganisation->setObjectName(QStringLiteral("groupBoxOrganisation"));
        groupBoxOrganisation->setGeometry(QRect(670, 20, 581, 771));
        pushButtonDescendre = new QPushButton(groupBoxOrganisation);
        pushButtonDescendre->setObjectName(QStringLiteral("pushButtonDescendre"));
        pushButtonDescendre->setGeometry(QRect(15, 140, 80, 80));
        pushButtonDescendre->setMinimumSize(QSize(80, 80));
        pushButtonDescendre->setMaximumSize(QSize(80, 80));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/Apps-Go-Down-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDescendre->setIcon(icon13);
        pushButtonDescendre->setIconSize(QSize(80, 80));
        pushButtonDescendre->setFlat(true);
        pushButtonMonter = new QPushButton(groupBoxOrganisation);
        pushButtonMonter->setObjectName(QStringLiteral("pushButtonMonter"));
        pushButtonMonter->setGeometry(QRect(15, 50, 80, 80));
        pushButtonMonter->setMinimumSize(QSize(80, 80));
        pushButtonMonter->setMaximumSize(QSize(80, 80));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/Apps-Go-Up-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMonter->setIcon(icon14);
        pushButtonMonter->setIconSize(QSize(80, 80));
        pushButtonMonter->setFlat(true);
        pushButtonSupprimer = new QPushButton(groupBoxOrganisation);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));
        pushButtonSupprimer->setGeometry(QRect(15, 230, 80, 80));
        pushButtonSupprimer->setMinimumSize(QSize(80, 80));
        pushButtonSupprimer->setMaximumSize(QSize(80, 80));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/Actions-edit-delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon15);
        pushButtonSupprimer->setIconSize(QSize(80, 80));
        pushButtonSupprimer->setFlat(true);
        pushButtonLancerSetAudio = new QPushButton(groupBoxOrganisation);
        pushButtonLancerSetAudio->setObjectName(QStringLiteral("pushButtonLancerSetAudio"));
        pushButtonLancerSetAudio->setGeometry(QRect(15, 480, 80, 80));
        pushButtonLancerSetAudio->setMinimumSize(QSize(80, 80));
        pushButtonLancerSetAudio->setMaximumSize(QSize(80, 80));
        pushButtonLancerSetAudio->setIcon(icon8);
        pushButtonLancerSetAudio->setIconSize(QSize(80, 80));
        pushButtonLancerSetAudio->setFlat(true);
        pushButtonLancerSetPartition = new QPushButton(groupBoxOrganisation);
        pushButtonLancerSetPartition->setObjectName(QStringLiteral("pushButtonLancerSetPartition"));
        pushButtonLancerSetPartition->setGeometry(QRect(15, 570, 80, 80));
        pushButtonLancerSetPartition->setMinimumSize(QSize(80, 80));
        pushButtonLancerSetPartition->setMaximumSize(QSize(80, 80));
        pushButtonLancerSetPartition->setIcon(icon9);
        pushButtonLancerSetPartition->setIconSize(QSize(80, 80));
        pushButtonLancerSetPartition->setFlat(true);
        pushButtonLancerSetEnregistrement = new QPushButton(groupBoxOrganisation);
        pushButtonLancerSetEnregistrement->setObjectName(QStringLiteral("pushButtonLancerSetEnregistrement"));
        pushButtonLancerSetEnregistrement->setGeometry(QRect(15, 660, 80, 80));
        pushButtonLancerSetEnregistrement->setMinimumSize(QSize(80, 80));
        pushButtonLancerSetEnregistrement->setMaximumSize(QSize(80, 80));
        pushButtonLancerSetEnregistrement->setIcon(icon10);
        pushButtonLancerSetEnregistrement->setIconSize(QSize(80, 80));
        pushButtonLancerSetEnregistrement->setFlat(true);
        listWidgetListe = new QListWidget(groupBoxOrganisation);
        listWidgetListe->setObjectName(QStringLiteral("listWidgetListe"));
        listWidgetListe->setGeometry(QRect(120, 50, 441, 700));
        QFont font;
        font.setPointSize(14);
        listWidgetListe->setFont(font);
        pushButtonAjouterListe = new QPushButton(groupBoxOrganisation);
        pushButtonAjouterListe->setObjectName(QStringLiteral("pushButtonAjouterListe"));
        pushButtonAjouterListe->setGeometry(QRect(20, 350, 80, 80));
        pushButtonAjouterListe->setMinimumSize(QSize(80, 80));
        pushButtonAjouterListe->setMaximumSize(QSize(80, 80));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/AjouterListe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouterListe->setIcon(icon16);
        pushButtonAjouterListe->setIconSize(QSize(80, 80));
        pushButtonAjouterListe->setFlat(true);

        retranslateUi(GestionnaireListes);

        QMetaObject::connectSlotsByName(GestionnaireListes);
    } // setupUi

    void retranslateUi(QWidget *GestionnaireListes)
    {
        GestionnaireListes->setWindowTitle(QApplication::translate("GestionnaireListes", "Form", nullptr));
        groupBoxListeLecture->setTitle(QApplication::translate("GestionnaireListes", "Concert", nullptr));
        label_9->setText(QApplication::translate("GestionnaireListes", "Dur\303\251e Total :", nullptr));
        label_10->setText(QApplication::translate("GestionnaireListes", "Nom du set :", nullptr));
        label_11->setText(QApplication::translate("GestionnaireListes", "Nombre de titres :", nullptr));
        lineEditNbTitres->setText(QApplication::translate("GestionnaireListes", "0", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonNouveauConcert->setToolTip(QApplication::translate("GestionnaireListes", "<html><head/><body><p>Nouvelle Liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonNouveauConcert->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonAjouter->setToolTip(QApplication::translate("GestionnaireListes", "<html><head/><body><p>Ajout de chansons</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAjouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonOuvrir->setToolTip(QApplication::translate("GestionnaireListes", "<html><head/><body><p>Ouverture d'une liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonOuvrir->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonEnregistrer->setToolTip(QApplication::translate("GestionnaireListes", "<html><head/><body><p>Enregistrement de la liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonEnregistrer->setText(QString());
        groupBox->setTitle(QApplication::translate("GestionnaireListes", "Titre", nullptr));
        pushButtonSauvegarder->setText(QString());
        pushButtonOuvrirTitre->setText(QString());
        pushButtonModifier->setText(QString());
        label_7->setText(QApplication::translate("GestionnaireListes", "Chemin de la partition : ", nullptr));
        label->setText(QApplication::translate("GestionnaireListes", "Nom :", nullptr));
        label_2->setText(QApplication::translate("GestionnaireListes", "Interpr\303\250te :", nullptr));
        label_3->setText(QApplication::translate("GestionnaireListes", "Tempo :", nullptr));
        label_4->setText(QApplication::translate("GestionnaireListes", "Dur\303\251e :", nullptr));
        label_5->setText(QApplication::translate("GestionnaireListes", "Tonalit\303\251 :", nullptr));
        pushButtonModifierAudio->setText(QString());
        pushButtonLancerAudio->setText(QString());
        label_6->setText(QApplication::translate("GestionnaireListes", "Chemin du fichier audio : ", nullptr));
        pushButtonModifierPartition->setText(QString());
        pushButtonLancerPartition->setText(QString());
        pushButtonModifierEnregistrement->setText(QString());
        pushButtonLancerEnregistrement->setText(QString());
        label_8->setText(QApplication::translate("GestionnaireListes", "Chemin du fichier enregistrement : ", nullptr));
        pushButtonRenommer->setText(QString());
        pushButtonNouveau->setText(QString());
        groupBoxOrganisation->setTitle(QApplication::translate("GestionnaireListes", "Organisation du concert", nullptr));
        pushButtonDescendre->setText(QString());
        pushButtonMonter->setText(QString());
        pushButtonSupprimer->setText(QString());
        pushButtonLancerSetAudio->setText(QString());
        pushButtonLancerSetPartition->setText(QString());
        pushButtonLancerSetEnregistrement->setText(QString());
        pushButtonAjouterListe->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionnaireListes: public Ui_GestionnaireListes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONNAIRELISTES_H
