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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionnaireListes
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButtonNouveauConcert;
    QPushButton *pushButtonSauvegarderConcert;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNomSet;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditNomSet;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayoutDureeTotal;
    QLabel *labelDureeTotal;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditDureeTotal;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayoutNbTitre;
    QLabel *labelNbTitres;
    QLineEdit *lineEditNbTitres;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDateConcert;
    QDateEdit *dateEditDateConcert;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelGenreConcert;
    QLineEdit *lineEditGenreSet;
    QLabel *labelListeSet;
    QPushButton *pushButtonSupprimerSet;
    QComboBox *comboBoxListeSet;
    QStackedWidget *stackedWidget;
    QWidget *pageOrganisationConcert;
    QLabel *labelOrganisationDuConcert;
    QPushButton *pushButtonRehausserMusique;
    QPushButton *pushButtonAbaisserMusique;
    QPushButton *pushButtonRetirerMusique;
    QPushButton *pushButtonEnvoyerMusique;
    QPushButton *pushButtonAjoutFichiers;
    QPushButton *pushButtonEnvoyerPlaylist;
    QListWidget *listWidgetListeMusique;
    QListWidget *listWidgetAffichageSet;
    QPushButton *pushButtonModifierTitre;
    QLineEdit *lineEditRechercheParTitre;
    QLineEdit *lineEditRechercheParInterprete;
    QLabel *labelOrganisationDuConcert_2;
    QPushButton *pushButtonSupprimerTitre;
    QPushButton *pushButtonEnvoyerPlaylistPartition;
    QWidget *pageAjoutFichiers;
    QLabel *labelAjoutFichier;
    QPushButton *pushButtonAudio;
    QPushButton *pushButtonPartition;
    QPushButton *pushButtonEnregistrement;
    QLineEdit *lineEditCheminFichierAudio;
    QLineEdit *lineEditCheminFichierPartition;
    QLineEdit *lineEditCheminFichierEnregistrement;
    QLabel *labelCheminFichierAudio;
    QLabel *labelCheminFichierPartition;
    QLabel *labelCheminFichierEnregistrement;
    QPushButton *pushButtonObtenirCheminFichierAudio;
    QPushButton *pushButtonObtenirCheminFichierPartition;
    QPushButton *pushButtonObtenirCheminEnregistrement;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelTempo;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditTempo;
    QLabel *labelDuree;
    QLineEdit *lineEditDuree;
    QLabel *labelTonalite;
    QLineEdit *lineEditTonalite;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayoutInterprete;
    QLabel *labelInterprete;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditInterprete;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayoutNom;
    QLabel *labelNom;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEditNom;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonNote;
    QPushButton *pushButtonRythme;
    QLabel *labelCheminFichierRythme;
    QLineEdit *lineEditCheminFichierRythme;
    QPushButton *pushButtonObtenirCheminFichierRythme;
    QTextEdit *textEditNote;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonValiderLesModifications;
    QFrame *frame;

    void setupUi(QWidget *GestionnaireListes)
    {
        if (GestionnaireListes->objectName().isEmpty())
            GestionnaireListes->setObjectName(QStringLiteral("GestionnaireListes"));
        GestionnaireListes->resize(1800, 1030);
        GestionnaireListes->setMinimumSize(QSize(0, 0));
        GestionnaireListes->setMaximumSize(QSize(16777215, 16777215));
        GestionnaireListes->setSizeIncrement(QSize(0, 0));
        GestionnaireListes->setLayoutDirection(Qt::LeftToRight);
        GestionnaireListes->setAutoFillBackground(false);
        groupBox = new QGroupBox(GestionnaireListes);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 1721, 191));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        pushButtonNouveauConcert = new QPushButton(groupBox);
        pushButtonNouveauConcert->setObjectName(QStringLiteral("pushButtonNouveauConcert"));
        pushButtonNouveauConcert->setGeometry(QRect(10, 90, 90, 90));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNouveauConcert->setIcon(icon);
        pushButtonNouveauConcert->setIconSize(QSize(70, 70));
        pushButtonSauvegarderConcert = new QPushButton(groupBox);
        pushButtonSauvegarderConcert->setObjectName(QStringLiteral("pushButtonSauvegarderConcert"));
        pushButtonSauvegarderConcert->setGeometry(QRect(130, 90, 90, 90));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSauvegarderConcert->setIcon(icon1);
        pushButtonSauvegarderConcert->setIconSize(QSize(70, 70));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 771, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNomSet = new QLabel(layoutWidget);
        labelNomSet->setObjectName(QStringLiteral("labelNomSet"));
        labelNomSet->setFont(font);

        horizontalLayout->addWidget(labelNomSet);

        horizontalSpacer = new QSpacerItem(60, 10, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditNomSet = new QLineEdit(layoutWidget);
        lineEditNomSet->setObjectName(QStringLiteral("lineEditNomSet"));
        lineEditNomSet->setFont(font);

        horizontalLayout->addWidget(lineEditNomSet);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1320, 40, 382, 41));
        horizontalLayoutDureeTotal = new QHBoxLayout(layoutWidget1);
        horizontalLayoutDureeTotal->setObjectName(QStringLiteral("horizontalLayoutDureeTotal"));
        horizontalLayoutDureeTotal->setContentsMargins(0, 0, 0, 0);
        labelDureeTotal = new QLabel(layoutWidget1);
        labelDureeTotal->setObjectName(QStringLiteral("labelDureeTotal"));
        labelDureeTotal->setFont(font);

        horizontalLayoutDureeTotal->addWidget(labelDureeTotal);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayoutDureeTotal->addItem(horizontalSpacer_5);

        lineEditDureeTotal = new QLineEdit(layoutWidget1);
        lineEditDureeTotal->setObjectName(QStringLiteral("lineEditDureeTotal"));
        lineEditDureeTotal->setFont(font);

        horizontalLayoutDureeTotal->addWidget(lineEditDureeTotal);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(1320, 90, 381, 41));
        horizontalLayoutNbTitre = new QHBoxLayout(layoutWidget2);
        horizontalLayoutNbTitre->setObjectName(QStringLiteral("horizontalLayoutNbTitre"));
        horizontalLayoutNbTitre->setContentsMargins(0, 0, 0, 0);
        labelNbTitres = new QLabel(layoutWidget2);
        labelNbTitres->setObjectName(QStringLiteral("labelNbTitres"));
        labelNbTitres->setFont(font);

        horizontalLayoutNbTitre->addWidget(labelNbTitres);

        lineEditNbTitres = new QLineEdit(layoutWidget2);
        lineEditNbTitres->setObjectName(QStringLiteral("lineEditNbTitres"));
        lineEditNbTitres->setFont(font);

        horizontalLayoutNbTitre->addWidget(lineEditNbTitres);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(840, 40, 401, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelDateConcert = new QLabel(layoutWidget3);
        labelDateConcert->setObjectName(QStringLiteral("labelDateConcert"));
        labelDateConcert->setFont(font);

        horizontalLayout_2->addWidget(labelDateConcert);

        dateEditDateConcert = new QDateEdit(layoutWidget3);
        dateEditDateConcert->setObjectName(QStringLiteral("dateEditDateConcert"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEditDateConcert->sizePolicy().hasHeightForWidth());
        dateEditDateConcert->setSizePolicy(sizePolicy);
        dateEditDateConcert->setFont(font);
        dateEditDateConcert->setWrapping(false);
        dateEditDateConcert->setFrame(true);
        dateEditDateConcert->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEditDateConcert);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(1320, 140, 381, 37));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelGenreConcert = new QLabel(layoutWidget4);
        labelGenreConcert->setObjectName(QStringLiteral("labelGenreConcert"));
        labelGenreConcert->setFont(font);

        horizontalLayout_3->addWidget(labelGenreConcert);

        lineEditGenreSet = new QLineEdit(layoutWidget4);
        lineEditGenreSet->setObjectName(QStringLiteral("lineEditGenreSet"));
        lineEditGenreSet->setFont(font);

        horizontalLayout_3->addWidget(lineEditGenreSet);

        labelListeSet = new QLabel(groupBox);
        labelListeSet->setObjectName(QStringLiteral("labelListeSet"));
        labelListeSet->setGeometry(QRect(240, 70, 211, 17));
        labelListeSet->setFont(font);
        pushButtonSupprimerSet = new QPushButton(groupBox);
        pushButtonSupprimerSet->setObjectName(QStringLiteral("pushButtonSupprimerSet"));
        pushButtonSupprimerSet->setGeometry(QRect(570, 144, 211, 41));
        pushButtonSupprimerSet->setFont(font);
        comboBoxListeSet = new QComboBox(groupBox);
        comboBoxListeSet->setObjectName(QStringLiteral("comboBoxListeSet"));
        comboBoxListeSet->setGeometry(QRect(240, 94, 541, 41));
        comboBoxListeSet->setFont(font);
        stackedWidget = new QStackedWidget(GestionnaireListes);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 230, 1721, 771));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        pageOrganisationConcert = new QWidget();
        pageOrganisationConcert->setObjectName(QStringLiteral("pageOrganisationConcert"));
        labelOrganisationDuConcert = new QLabel(pageOrganisationConcert);
        labelOrganisationDuConcert->setObjectName(QStringLiteral("labelOrganisationDuConcert"));
        labelOrganisationDuConcert->setGeometry(QRect(990, 10, 361, 31));
        labelOrganisationDuConcert->setFont(font);
        pushButtonRehausserMusique = new QPushButton(pageOrganisationConcert);
        pushButtonRehausserMusique->setObjectName(QStringLiteral("pushButtonRehausserMusique"));
        pushButtonRehausserMusique->setGeometry(QRect(1590, 90, 100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/long-arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRehausserMusique->setIcon(icon2);
        pushButtonRehausserMusique->setIconSize(QSize(80, 90));
        pushButtonAbaisserMusique = new QPushButton(pageOrganisationConcert);
        pushButtonAbaisserMusique->setObjectName(QStringLiteral("pushButtonAbaisserMusique"));
        pushButtonAbaisserMusique->setGeometry(QRect(1590, 200, 100, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/long-arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAbaisserMusique->setIcon(icon3);
        pushButtonAbaisserMusique->setIconSize(QSize(80, 90));
        pushButtonRetirerMusique = new QPushButton(pageOrganisationConcert);
        pushButtonRetirerMusique->setObjectName(QStringLiteral("pushButtonRetirerMusique"));
        pushButtonRetirerMusique->setGeometry(QRect(1590, 310, 100, 100));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRetirerMusique->setIcon(icon4);
        pushButtonRetirerMusique->setIconSize(QSize(80, 90));
        pushButtonEnvoyerMusique = new QPushButton(pageOrganisationConcert);
        pushButtonEnvoyerMusique->setObjectName(QStringLiteral("pushButtonEnvoyerMusique"));
        pushButtonEnvoyerMusique->setGeometry(QRect(750, 310, 110, 110));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/circled-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnvoyerMusique->setIcon(icon5);
        pushButtonEnvoyerMusique->setIconSize(QSize(90, 90));
        pushButtonAjoutFichiers = new QPushButton(pageOrganisationConcert);
        pushButtonAjoutFichiers->setObjectName(QStringLiteral("pushButtonAjoutFichiers"));
        pushButtonAjoutFichiers->setGeometry(QRect(610, 640, 110, 110));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/opened-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjoutFichiers->setIcon(icon6);
        pushButtonAjoutFichiers->setIconSize(QSize(90, 90));
        pushButtonEnvoyerPlaylist = new QPushButton(pageOrganisationConcert);
        pushButtonEnvoyerPlaylist->setObjectName(QStringLiteral("pushButtonEnvoyerPlaylist"));
        pushButtonEnvoyerPlaylist->setGeometry(QRect(1590, 470, 100, 100));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/send-playlist.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnvoyerPlaylist->setIcon(icon7);
        pushButtonEnvoyerPlaylist->setIconSize(QSize(90, 90));
        listWidgetListeMusique = new QListWidget(pageOrganisationConcert);
        listWidgetListeMusique->setObjectName(QStringLiteral("listWidgetListeMusique"));
        listWidgetListeMusique->setGeometry(QRect(20, 50, 580, 701));
        listWidgetListeMusique->setFont(font);
        listWidgetAffichageSet = new QListWidget(pageOrganisationConcert);
        listWidgetAffichageSet->setObjectName(QStringLiteral("listWidgetAffichageSet"));
        listWidgetAffichageSet->setGeometry(QRect(990, 50, 580, 701));
        listWidgetAffichageSet->setFont(font);
        pushButtonModifierTitre = new QPushButton(pageOrganisationConcert);
        pushButtonModifierTitre->setObjectName(QStringLiteral("pushButtonModifierTitre"));
        pushButtonModifierTitre->setGeometry(QRect(730, 640, 171, 51));
        pushButtonModifierTitre->setFont(font);
        lineEditRechercheParTitre = new QLineEdit(pageOrganisationConcert);
        lineEditRechercheParTitre->setObjectName(QStringLiteral("lineEditRechercheParTitre"));
        lineEditRechercheParTitre->setGeometry(QRect(610, 580, 291, 41));
        lineEditRechercheParTitre->setFont(font);
        lineEditRechercheParInterprete = new QLineEdit(pageOrganisationConcert);
        lineEditRechercheParInterprete->setObjectName(QStringLiteral("lineEditRechercheParInterprete"));
        lineEditRechercheParInterprete->setGeometry(QRect(610, 520, 291, 41));
        lineEditRechercheParInterprete->setFont(font);
        labelOrganisationDuConcert_2 = new QLabel(pageOrganisationConcert);
        labelOrganisationDuConcert_2->setObjectName(QStringLiteral("labelOrganisationDuConcert_2"));
        labelOrganisationDuConcert_2->setGeometry(QRect(20, 10, 221, 31));
        labelOrganisationDuConcert_2->setFont(font);
        pushButtonSupprimerTitre = new QPushButton(pageOrganisationConcert);
        pushButtonSupprimerTitre->setObjectName(QStringLiteral("pushButtonSupprimerTitre"));
        pushButtonSupprimerTitre->setGeometry(QRect(730, 700, 171, 51));
        pushButtonSupprimerTitre->setFont(font);
        pushButtonEnvoyerPlaylistPartition = new QPushButton(pageOrganisationConcert);
        pushButtonEnvoyerPlaylistPartition->setObjectName(QStringLiteral("pushButtonEnvoyerPlaylistPartition"));
        pushButtonEnvoyerPlaylistPartition->setGeometry(QRect(1590, 590, 100, 100));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/envoyer_liste-partition.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnvoyerPlaylistPartition->setIcon(icon8);
        pushButtonEnvoyerPlaylistPartition->setIconSize(QSize(90, 90));
        stackedWidget->addWidget(pageOrganisationConcert);
        pageAjoutFichiers = new QWidget();
        pageAjoutFichiers->setObjectName(QStringLiteral("pageAjoutFichiers"));
        labelAjoutFichier = new QLabel(pageAjoutFichiers);
        labelAjoutFichier->setObjectName(QStringLiteral("labelAjoutFichier"));
        labelAjoutFichier->setGeometry(QRect(20, 10, 211, 17));
        labelAjoutFichier->setFont(font);
        pushButtonAudio = new QPushButton(pageAjoutFichiers);
        pushButtonAudio->setObjectName(QStringLiteral("pushButtonAudio"));
        pushButtonAudio->setGeometry(QRect(20, 220, 110, 110));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/voice.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAudio->setIcon(icon9);
        pushButtonAudio->setIconSize(QSize(70, 70));
        pushButtonPartition = new QPushButton(pageAjoutFichiers);
        pushButtonPartition->setObjectName(QStringLiteral("pushButtonPartition"));
        pushButtonPartition->setGeometry(QRect(20, 340, 110, 110));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/musical.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPartition->setIcon(icon10);
        pushButtonPartition->setIconSize(QSize(70, 70));
        pushButtonEnregistrement = new QPushButton(pageAjoutFichiers);
        pushButtonEnregistrement->setObjectName(QStringLiteral("pushButtonEnregistrement"));
        pushButtonEnregistrement->setGeometry(QRect(20, 460, 110, 110));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/microphone.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnregistrement->setIcon(icon11);
        pushButtonEnregistrement->setIconSize(QSize(70, 70));
        lineEditCheminFichierAudio = new QLineEdit(pageAjoutFichiers);
        lineEditCheminFichierAudio->setObjectName(QStringLiteral("lineEditCheminFichierAudio"));
        lineEditCheminFichierAudio->setGeometry(QRect(140, 280, 1421, 40));
        lineEditCheminFichierAudio->setFont(font);
        lineEditCheminFichierPartition = new QLineEdit(pageAjoutFichiers);
        lineEditCheminFichierPartition->setObjectName(QStringLiteral("lineEditCheminFichierPartition"));
        lineEditCheminFichierPartition->setEnabled(true);
        lineEditCheminFichierPartition->setGeometry(QRect(140, 390, 1421, 40));
        lineEditCheminFichierPartition->setFont(font);
        lineEditCheminFichierEnregistrement = new QLineEdit(pageAjoutFichiers);
        lineEditCheminFichierEnregistrement->setObjectName(QStringLiteral("lineEditCheminFichierEnregistrement"));
        lineEditCheminFichierEnregistrement->setEnabled(true);
        lineEditCheminFichierEnregistrement->setGeometry(QRect(150, 510, 1411, 40));
        lineEditCheminFichierEnregistrement->setFont(font);
        labelCheminFichierAudio = new QLabel(pageAjoutFichiers);
        labelCheminFichierAudio->setObjectName(QStringLiteral("labelCheminFichierAudio"));
        labelCheminFichierAudio->setGeometry(QRect(140, 240, 291, 31));
        labelCheminFichierAudio->setFont(font);
        labelCheminFichierPartition = new QLabel(pageAjoutFichiers);
        labelCheminFichierPartition->setObjectName(QStringLiteral("labelCheminFichierPartition"));
        labelCheminFichierPartition->setGeometry(QRect(140, 350, 331, 31));
        labelCheminFichierPartition->setFont(font);
        labelCheminFichierEnregistrement = new QLabel(pageAjoutFichiers);
        labelCheminFichierEnregistrement->setObjectName(QStringLiteral("labelCheminFichierEnregistrement"));
        labelCheminFichierEnregistrement->setGeometry(QRect(150, 460, 341, 31));
        labelCheminFichierEnregistrement->setFont(font);
        pushButtonObtenirCheminFichierAudio = new QPushButton(pageAjoutFichiers);
        pushButtonObtenirCheminFichierAudio->setObjectName(QStringLiteral("pushButtonObtenirCheminFichierAudio"));
        pushButtonObtenirCheminFichierAudio->setGeometry(QRect(1600, 220, 110, 110));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/open-path.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonObtenirCheminFichierAudio->setIcon(icon12);
        pushButtonObtenirCheminFichierAudio->setIconSize(QSize(70, 70));
        pushButtonObtenirCheminFichierPartition = new QPushButton(pageAjoutFichiers);
        pushButtonObtenirCheminFichierPartition->setObjectName(QStringLiteral("pushButtonObtenirCheminFichierPartition"));
        pushButtonObtenirCheminFichierPartition->setGeometry(QRect(1600, 340, 110, 110));
        pushButtonObtenirCheminFichierPartition->setIcon(icon12);
        pushButtonObtenirCheminFichierPartition->setIconSize(QSize(70, 70));
        pushButtonObtenirCheminEnregistrement = new QPushButton(pageAjoutFichiers);
        pushButtonObtenirCheminEnregistrement->setObjectName(QStringLiteral("pushButtonObtenirCheminEnregistrement"));
        pushButtonObtenirCheminEnregistrement->setGeometry(QRect(1600, 460, 110, 110));
        pushButtonObtenirCheminEnregistrement->setIcon(icon12);
        pushButtonObtenirCheminEnregistrement->setIconSize(QSize(70, 70));
        layoutWidget5 = new QWidget(pageAjoutFichiers);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 140, 891, 37));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelTempo = new QLabel(layoutWidget5);
        labelTempo->setObjectName(QStringLiteral("labelTempo"));
        labelTempo->setFont(font);

        horizontalLayout_8->addWidget(labelTempo);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        lineEditTempo = new QLineEdit(layoutWidget5);
        lineEditTempo->setObjectName(QStringLiteral("lineEditTempo"));
        lineEditTempo->setFont(font);

        horizontalLayout_8->addWidget(lineEditTempo);

        labelDuree = new QLabel(layoutWidget5);
        labelDuree->setObjectName(QStringLiteral("labelDuree"));
        labelDuree->setFont(font);

        horizontalLayout_8->addWidget(labelDuree);

        lineEditDuree = new QLineEdit(layoutWidget5);
        lineEditDuree->setObjectName(QStringLiteral("lineEditDuree"));
        lineEditDuree->setFont(font);

        horizontalLayout_8->addWidget(lineEditDuree);

        labelTonalite = new QLabel(layoutWidget5);
        labelTonalite->setObjectName(QStringLiteral("labelTonalite"));
        labelTonalite->setFont(font);

        horizontalLayout_8->addWidget(labelTonalite);

        lineEditTonalite = new QLineEdit(layoutWidget5);
        lineEditTonalite->setObjectName(QStringLiteral("lineEditTonalite"));
        lineEditTonalite->setFont(font);

        horizontalLayout_8->addWidget(lineEditTonalite);

        layoutWidget6 = new QWidget(pageAjoutFichiers);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 100, 891, 37));
        horizontalLayoutInterprete = new QHBoxLayout(layoutWidget6);
        horizontalLayoutInterprete->setObjectName(QStringLiteral("horizontalLayoutInterprete"));
        horizontalLayoutInterprete->setContentsMargins(0, 0, 0, 0);
        labelInterprete = new QLabel(layoutWidget6);
        labelInterprete->setObjectName(QStringLiteral("labelInterprete"));
        labelInterprete->setFont(font);

        horizontalLayoutInterprete->addWidget(labelInterprete);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayoutInterprete->addItem(horizontalSpacer_2);

        lineEditInterprete = new QLineEdit(layoutWidget6);
        lineEditInterprete->setObjectName(QStringLiteral("lineEditInterprete"));
        lineEditInterprete->setFont(font);

        horizontalLayoutInterprete->addWidget(lineEditInterprete);

        layoutWidget7 = new QWidget(pageAjoutFichiers);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 60, 891, 37));
        horizontalLayoutNom = new QHBoxLayout(layoutWidget7);
        horizontalLayoutNom->setObjectName(QStringLiteral("horizontalLayoutNom"));
        horizontalLayoutNom->setContentsMargins(0, 0, 0, 0);
        labelNom = new QLabel(layoutWidget7);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        labelNom->setFont(font);

        horizontalLayoutNom->addWidget(labelNom);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayoutNom->addItem(horizontalSpacer_3);

        lineEditNom = new QLineEdit(layoutWidget7);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setFont(font);

        horizontalLayoutNom->addWidget(lineEditNom);

        pushButtonAjouter = new QPushButton(pageAjoutFichiers);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setGeometry(QRect(1480, 700, 100, 50));
        pushButtonAjouter->setFont(font);
        pushButtonNote = new QPushButton(pageAjoutFichiers);
        pushButtonNote->setObjectName(QStringLiteral("pushButtonNote"));
        pushButtonNote->setGeometry(QRect(1120, 70, 110, 110));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/task.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNote->setIcon(icon13);
        pushButtonNote->setIconSize(QSize(70, 70));
        pushButtonRythme = new QPushButton(pageAjoutFichiers);
        pushButtonRythme->setObjectName(QStringLiteral("pushButtonRythme"));
        pushButtonRythme->setGeometry(QRect(20, 580, 110, 110));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/metronome2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRythme->setIcon(icon14);
        pushButtonRythme->setIconSize(QSize(70, 70));
        labelCheminFichierRythme = new QLabel(pageAjoutFichiers);
        labelCheminFichierRythme->setObjectName(QStringLiteral("labelCheminFichierRythme"));
        labelCheminFichierRythme->setGeometry(QRect(150, 600, 301, 31));
        labelCheminFichierRythme->setFont(font);
        lineEditCheminFichierRythme = new QLineEdit(pageAjoutFichiers);
        lineEditCheminFichierRythme->setObjectName(QStringLiteral("lineEditCheminFichierRythme"));
        lineEditCheminFichierRythme->setGeometry(QRect(150, 644, 1411, 40));
        lineEditCheminFichierRythme->setFont(font);
        pushButtonObtenirCheminFichierRythme = new QPushButton(pageAjoutFichiers);
        pushButtonObtenirCheminFichierRythme->setObjectName(QStringLiteral("pushButtonObtenirCheminFichierRythme"));
        pushButtonObtenirCheminFichierRythme->setGeometry(QRect(1600, 580, 110, 110));
        pushButtonObtenirCheminFichierRythme->setIcon(icon12);
        pushButtonObtenirCheminFichierRythme->setIconSize(QSize(70, 70));
        textEditNote = new QTextEdit(pageAjoutFichiers);
        textEditNote->setObjectName(QStringLiteral("textEditNote"));
        textEditNote->setGeometry(QRect(1250, 60, 411, 130));
        textEditNote->setFont(font);
        pushButtonAnnuler = new QPushButton(pageAjoutFichiers);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        pushButtonAnnuler->setGeometry(QRect(1360, 700, 100, 50));
        pushButtonAnnuler->setFont(font);
        pushButtonValiderLesModifications = new QPushButton(pageAjoutFichiers);
        pushButtonValiderLesModifications->setObjectName(QStringLiteral("pushButtonValiderLesModifications"));
        pushButtonValiderLesModifications->setGeometry(QRect(130, 710, 291, 50));
        pushButtonValiderLesModifications->setFont(font);
        stackedWidget->addWidget(pageAjoutFichiers);
        frame = new QFrame(GestionnaireListes);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1770, 1010));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        groupBox->raise();
        stackedWidget->raise();

        retranslateUi(GestionnaireListes);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GestionnaireListes);
    } // setupUi

    void retranslateUi(QWidget *GestionnaireListes)
    {
        GestionnaireListes->setWindowTitle(QApplication::translate("GestionnaireListes", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("GestionnaireListes", "Concert", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonNouveauConcert->setToolTip(QApplication::translate("GestionnaireListes", "Nouveau set", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonNouveauConcert->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSauvegarderConcert->setToolTip(QApplication::translate("GestionnaireListes", "Sauvegarder le set", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonSauvegarderConcert->setText(QString());
        labelNomSet->setText(QApplication::translate("GestionnaireListes", "Nom du set:", nullptr));
        labelDureeTotal->setText(QApplication::translate("GestionnaireListes", "Dur\303\251e Total  :", nullptr));
        labelNbTitres->setText(QApplication::translate("GestionnaireListes", "Nombre de titres :", nullptr));
        labelDateConcert->setText(QApplication::translate("GestionnaireListes", "Date concert :", nullptr));
        labelGenreConcert->setText(QApplication::translate("GestionnaireListes", "Genre du concert :", nullptr));
        labelListeSet->setText(QApplication::translate("GestionnaireListes", "Listes de sets :", nullptr));
        pushButtonSupprimerSet->setText(QApplication::translate("GestionnaireListes", "Supprimer le set", nullptr));
        labelOrganisationDuConcert->setText(QApplication::translate("GestionnaireListes", "Organisation du concert :", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonRehausserMusique->setToolTip(QApplication::translate("GestionnaireListes", "R\303\251hausser l'\303\251l\303\251ment", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonRehausserMusique->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonAbaisserMusique->setToolTip(QApplication::translate("GestionnaireListes", "Abaisser l'\303\251l\303\251ment", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAbaisserMusique->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRetirerMusique->setToolTip(QApplication::translate("GestionnaireListes", "Retirer l'\303\251l\303\251ment", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonRetirerMusique->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonEnvoyerMusique->setToolTip(QApplication::translate("GestionnaireListes", "Envoyer vers la playlist", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonEnvoyerMusique->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonAjoutFichiers->setToolTip(QApplication::translate("GestionnaireListes", "Ajout depuis les fichiers", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAjoutFichiers->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonEnvoyerPlaylist->setToolTip(QApplication::translate("GestionnaireListes", "Envoyer la playlist vers le lecteur audio", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonEnvoyerPlaylist->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonModifierTitre->setToolTip(QApplication::translate("GestionnaireListes", "Modifier le titre s\303\251lectionn\303\251", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonModifierTitre->setText(QApplication::translate("GestionnaireListes", "Modifier Titre", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditRechercheParTitre->setToolTip(QApplication::translate("GestionnaireListes", "Rechercher par titre", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditRechercheParTitre->setPlaceholderText(QApplication::translate("GestionnaireListes", "Rechercher par titre...", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditRechercheParInterprete->setToolTip(QApplication::translate("GestionnaireListes", "Rechercher par interpr\303\250te", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditRechercheParInterprete->setPlaceholderText(QApplication::translate("GestionnaireListes", "Rechercher par interpr\303\250te...", nullptr));
        labelOrganisationDuConcert_2->setText(QApplication::translate("GestionnaireListes", "Liste musiques :", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonSupprimerTitre->setToolTip(QApplication::translate("GestionnaireListes", "Modifier le titre s\303\251lectionn\303\251", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonSupprimerTitre->setText(QApplication::translate("GestionnaireListes", "Supprimer Titre", nullptr));
        pushButtonEnvoyerPlaylistPartition->setText(QString());
        labelAjoutFichier->setText(QApplication::translate("GestionnaireListes", "Gestion de fichiers", nullptr));
        pushButtonAudio->setText(QString());
        pushButtonPartition->setText(QString());
        pushButtonEnregistrement->setText(QString());
        labelCheminFichierAudio->setText(QApplication::translate("GestionnaireListes", "Chemin du fichier audio :", nullptr));
        labelCheminFichierPartition->setText(QApplication::translate("GestionnaireListes", "Chemin de la partition :", nullptr));
        labelCheminFichierEnregistrement->setText(QApplication::translate("GestionnaireListes", "Chemin du fichier enregistrement :", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonObtenirCheminFichierAudio->setToolTip(QApplication::translate("GestionnaireListes", "Choisir un fichier", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonObtenirCheminFichierAudio->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonObtenirCheminFichierPartition->setToolTip(QApplication::translate("GestionnaireListes", "Choisir un fichier", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonObtenirCheminFichierPartition->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonObtenirCheminEnregistrement->setToolTip(QApplication::translate("GestionnaireListes", "Choisir un fichier", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonObtenirCheminEnregistrement->setText(QString());
        labelTempo->setText(QApplication::translate("GestionnaireListes", "Tempo :", nullptr));
        labelDuree->setText(QApplication::translate("GestionnaireListes", "Dur\303\251e :", nullptr));
        labelTonalite->setText(QApplication::translate("GestionnaireListes", "Tonalit\303\251 :", nullptr));
        labelInterprete->setText(QApplication::translate("GestionnaireListes", "Interpr\303\250te :", nullptr));
        labelNom->setText(QApplication::translate("GestionnaireListes", "Nom :", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonAjouter->setToolTip(QApplication::translate("GestionnaireListes", "Ajouter l'\303\251l\303\251ment aux fichiers de l'application", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAjouter->setText(QApplication::translate("GestionnaireListes", "Ajouter", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonNote->setToolTip(QApplication::translate("GestionnaireListes", "Ecrire une note", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonNote->setText(QString());
        pushButtonRythme->setText(QString());
        labelCheminFichierRythme->setText(QApplication::translate("GestionnaireListes", "Chemin du fichier du rythme  :", nullptr));
        pushButtonObtenirCheminFichierRythme->setText(QString());
        pushButtonAnnuler->setText(QApplication::translate("GestionnaireListes", "Annuler", nullptr));
        pushButtonValiderLesModifications->setText(QApplication::translate("GestionnaireListes", "Valider les modifications", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionnaireListes: public Ui_GestionnaireListes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONNAIRELISTES_H
