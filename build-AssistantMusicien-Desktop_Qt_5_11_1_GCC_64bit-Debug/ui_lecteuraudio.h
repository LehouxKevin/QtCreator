/********************************************************************************
** Form generated from reading UI file 'lecteuraudio.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURAUDIO_H
#define UI_LECTEURAUDIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurAudio
{
public:
    QGroupBox *groupBoxBoucle;
    QGroupBox *groupBoxDebut;
    QWidget *layoutWidget;
    QGridLayout *gridLayoutA;
    QLineEdit *lineEditTempsA;
    QPushButton *pushButtonMoinsA;
    QPushButton *pushButtonPlusA;
    QGroupBox *groupBoxFin;
    QWidget *layoutWidget1;
    QGridLayout *gridLayoutB;
    QPushButton *pushButtonMoinsB;
    QPushButton *pushButtonPlusB;
    QLineEdit *lineEditTempsB;
    QPushButton *pushButtonJalonB;
    QPushButton *pushButtonJalonA;
    QGroupBox *groupBoxReglage;
    QPushButton *pushButtonSon;
    QSlider *horizontalSliderVolume;
    QSlider *horizontalSliderVitesse;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditVitesse;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *listWidgetListeLecture;
    QGroupBox *groupBoxListeLecture;
    QLineEdit *lineEditListeLecture;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonNouvelle;
    QPushButton *pushButtonAjouter;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonEnregistrer;
    QGroupBox *groupBoxCommandes;
    QLineEdit *lineEditTitre;
    QSlider *horizontalSliderProgression;
    QLabel *labelDuree;
    QLabel *labelCourant;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonRetour;
    QPushButton *pushButtonLecture;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonAvance;
    QGroupBox *groupBoxOrdre;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonMonter;
    QPushButton *pushButtonDescendre;
    QPushButton *pushButtonSupprimer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonAleatoire;
    QPushButton *pushButtonBoucle;
    QPushButton *pushButtonSeqentiel;

    void setupUi(QWidget *LecteurAudio)
    {
        if (LecteurAudio->objectName().isEmpty())
            LecteurAudio->setObjectName(QStringLiteral("LecteurAudio"));
        LecteurAudio->resize(1087, 876);
        groupBoxBoucle = new QGroupBox(LecteurAudio);
        groupBoxBoucle->setObjectName(QStringLiteral("groupBoxBoucle"));
        groupBoxBoucle->setGeometry(QRect(20, 470, 530, 170));
        groupBoxBoucle->setMinimumSize(QSize(530, 170));
        groupBoxBoucle->setMaximumSize(QSize(530, 170));
        groupBoxDebut = new QGroupBox(groupBoxBoucle);
        groupBoxDebut->setObjectName(QStringLiteral("groupBoxDebut"));
        groupBoxDebut->setGeometry(QRect(120, 30, 151, 131));
        layoutWidget = new QWidget(groupBoxDebut);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 132, 91));
        gridLayoutA = new QGridLayout(layoutWidget);
        gridLayoutA->setObjectName(QStringLiteral("gridLayoutA"));
        gridLayoutA->setContentsMargins(0, 0, 0, 0);
        lineEditTempsA = new QLineEdit(layoutWidget);
        lineEditTempsA->setObjectName(QStringLiteral("lineEditTempsA"));
        lineEditTempsA->setAlignment(Qt::AlignCenter);
        lineEditTempsA->setReadOnly(true);

        gridLayoutA->addWidget(lineEditTempsA, 0, 0, 1, 2);

        pushButtonMoinsA = new QPushButton(layoutWidget);
        pushButtonMoinsA->setObjectName(QStringLiteral("pushButtonMoinsA"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Apps-Dialog-Remove-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoinsA->setIcon(icon);
        pushButtonMoinsA->setIconSize(QSize(50, 50));
        pushButtonMoinsA->setFlat(true);

        gridLayoutA->addWidget(pushButtonMoinsA, 1, 0, 1, 1);

        pushButtonPlusA = new QPushButton(layoutWidget);
        pushButtonPlusA->setObjectName(QStringLiteral("pushButtonPlusA"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Apps-Dialog-Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlusA->setIcon(icon1);
        pushButtonPlusA->setIconSize(QSize(50, 50));
        pushButtonPlusA->setFlat(true);

        gridLayoutA->addWidget(pushButtonPlusA, 1, 1, 1, 1);

        groupBoxFin = new QGroupBox(groupBoxBoucle);
        groupBoxFin->setObjectName(QStringLiteral("groupBoxFin"));
        groupBoxFin->setGeometry(QRect(270, 30, 151, 131));
        groupBoxFin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget1 = new QWidget(groupBoxFin);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 132, 91));
        gridLayoutB = new QGridLayout(layoutWidget1);
        gridLayoutB->setObjectName(QStringLiteral("gridLayoutB"));
        gridLayoutB->setContentsMargins(0, 0, 0, 0);
        pushButtonMoinsB = new QPushButton(layoutWidget1);
        pushButtonMoinsB->setObjectName(QStringLiteral("pushButtonMoinsB"));
        pushButtonMoinsB->setIcon(icon);
        pushButtonMoinsB->setIconSize(QSize(50, 50));
        pushButtonMoinsB->setFlat(true);

        gridLayoutB->addWidget(pushButtonMoinsB, 1, 0, 1, 1);

        pushButtonPlusB = new QPushButton(layoutWidget1);
        pushButtonPlusB->setObjectName(QStringLiteral("pushButtonPlusB"));
        pushButtonPlusB->setIcon(icon1);
        pushButtonPlusB->setIconSize(QSize(50, 50));
        pushButtonPlusB->setFlat(true);

        gridLayoutB->addWidget(pushButtonPlusB, 1, 1, 1, 1);

        lineEditTempsB = new QLineEdit(layoutWidget1);
        lineEditTempsB->setObjectName(QStringLiteral("lineEditTempsB"));
        lineEditTempsB->setAlignment(Qt::AlignCenter);
        lineEditTempsB->setReadOnly(true);

        gridLayoutB->addWidget(lineEditTempsB, 0, 0, 1, 2);

        pushButtonJalonB = new QPushButton(groupBoxBoucle);
        pushButtonJalonB->setObjectName(QStringLiteral("pushButtonJalonB"));
        pushButtonJalonB->setGeometry(QRect(420, 50, 112, 106));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/jalonB.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonJalonB->setIcon(icon2);
        pushButtonJalonB->setIconSize(QSize(100, 100));
        pushButtonJalonB->setFlat(true);
        pushButtonJalonA = new QPushButton(groupBoxBoucle);
        pushButtonJalonA->setObjectName(QStringLiteral("pushButtonJalonA"));
        pushButtonJalonA->setGeometry(QRect(0, 50, 112, 106));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/jalonA.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonJalonA->setIcon(icon3);
        pushButtonJalonA->setIconSize(QSize(100, 100));
        pushButtonJalonA->setFlat(true);
        groupBoxReglage = new QGroupBox(LecteurAudio);
        groupBoxReglage->setObjectName(QStringLiteral("groupBoxReglage"));
        groupBoxReglage->setGeometry(QRect(20, 660, 530, 200));
        groupBoxReglage->setMinimumSize(QSize(530, 200));
        groupBoxReglage->setMaximumSize(QSize(530, 200));
        pushButtonSon = new QPushButton(groupBoxReglage);
        pushButtonSon->setObjectName(QStringLiteral("pushButtonSon"));
        pushButtonSon->setGeometry(QRect(420, 20, 92, 86));
        pushButtonSon->setMinimumSize(QSize(80, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/sound-Off.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSon->setIcon(icon4);
        pushButtonSon->setIconSize(QSize(80, 80));
        pushButtonSon->setFlat(true);
        horizontalSliderVolume = new QSlider(groupBoxReglage);
        horizontalSliderVolume->setObjectName(QStringLiteral("horizontalSliderVolume"));
        horizontalSliderVolume->setGeometry(QRect(20, 60, 380, 26));
        horizontalSliderVolume->setSliderPosition(50);
        horizontalSliderVolume->setOrientation(Qt::Horizontal);
        horizontalSliderVolume->setTickPosition(QSlider::TicksBothSides);
        horizontalSliderVolume->setTickInterval(10);
        horizontalSliderVitesse = new QSlider(groupBoxReglage);
        horizontalSliderVitesse->setObjectName(QStringLiteral("horizontalSliderVitesse"));
        horizontalSliderVitesse->setGeometry(QRect(20, 160, 380, 20));
        horizontalSliderVitesse->setLayoutDirection(Qt::LeftToRight);
        horizontalSliderVitesse->setMaximum(100);
        horizontalSliderVitesse->setSingleStep(0);
        horizontalSliderVitesse->setValue(50);
        horizontalSliderVitesse->setSliderPosition(50);
        horizontalSliderVitesse->setTracking(false);
        horizontalSliderVitesse->setOrientation(Qt::Horizontal);
        horizontalSliderVitesse->setTickPosition(QSlider::TicksBothSides);
        horizontalSliderVitesse->setTickInterval(10);
        label = new QLabel(groupBoxReglage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 32, 50, 19));
        label_2 = new QLabel(groupBoxReglage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 63, 19));
        lineEditVitesse = new QLineEdit(groupBoxReglage);
        lineEditVitesse->setObjectName(QStringLiteral("lineEditVitesse"));
        lineEditVitesse->setGeometry(QRect(430, 150, 81, 27));
        lineEditVitesse->setAlignment(Qt::AlignCenter);
        lineEditVitesse->setReadOnly(true);
        label_3 = new QLabel(groupBoxReglage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(315, 130, 81, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(groupBoxReglage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 130, 63, 19));
        label_4->setAlignment(Qt::AlignCenter);
        listWidgetListeLecture = new QListWidget(LecteurAudio);
        listWidgetListeLecture->setObjectName(QStringLiteral("listWidgetListeLecture"));
        listWidgetListeLecture->setGeometry(QRect(680, 40, 256, 192));
        QFont font;
        font.setPointSize(14);
        listWidgetListeLecture->setFont(font);
        groupBoxListeLecture = new QGroupBox(LecteurAudio);
        groupBoxListeLecture->setObjectName(QStringLiteral("groupBoxListeLecture"));
        groupBoxListeLecture->setGeometry(QRect(20, 20, 531, 191));
        lineEditListeLecture = new QLineEdit(groupBoxListeLecture);
        lineEditListeLecture->setObjectName(QStringLiteral("lineEditListeLecture"));
        lineEditListeLecture->setGeometry(QRect(23, 140, 484, 30));
        lineEditListeLecture->setMinimumSize(QSize(484, 30));
        lineEditListeLecture->setMaximumSize(QSize(484, 30));
        lineEditListeLecture->setReadOnly(true);
        layoutWidget_2 = new QWidget(groupBoxListeLecture);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 40, 531, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonNouvelle = new QPushButton(layoutWidget_2);
        pushButtonNouvelle->setObjectName(QStringLiteral("pushButtonNouvelle"));
        pushButtonNouvelle->setMaximumSize(QSize(100, 100));
        pushButtonNouvelle->setToolTipDuration(3);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/Nouvelle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNouvelle->setIcon(icon5);
        pushButtonNouvelle->setIconSize(QSize(80, 80));

        horizontalLayout_3->addWidget(pushButtonNouvelle);

        pushButtonAjouter = new QPushButton(layoutWidget_2);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setMaximumSize(QSize(100, 100));
        pushButtonAjouter->setToolTipDuration(3);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/Ajouter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjouter->setIcon(icon6);
        pushButtonAjouter->setIconSize(QSize(80, 80));

        horizontalLayout_3->addWidget(pushButtonAjouter);

        pushButtonOuvrir = new QPushButton(layoutWidget_2);
        pushButtonOuvrir->setObjectName(QStringLiteral("pushButtonOuvrir"));
        pushButtonOuvrir->setMaximumSize(QSize(100, 100));
        pushButtonOuvrir->setToolTipDuration(3);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/Ouvrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOuvrir->setIcon(icon7);
        pushButtonOuvrir->setIconSize(QSize(80, 80));

        horizontalLayout_3->addWidget(pushButtonOuvrir);

        pushButtonEnregistrer = new QPushButton(layoutWidget_2);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setMaximumSize(QSize(100, 100));
        pushButtonEnregistrer->setToolTipDuration(3);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/Enregistrer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnregistrer->setIcon(icon8);
        pushButtonEnregistrer->setIconSize(QSize(80, 80));

        horizontalLayout_3->addWidget(pushButtonEnregistrer);

        groupBoxCommandes = new QGroupBox(LecteurAudio);
        groupBoxCommandes->setObjectName(QStringLiteral("groupBoxCommandes"));
        groupBoxCommandes->setGeometry(QRect(20, 220, 530, 240));
        groupBoxCommandes->setMinimumSize(QSize(530, 240));
        groupBoxCommandes->setMaximumSize(QSize(530, 240));
        lineEditTitre = new QLineEdit(groupBoxCommandes);
        lineEditTitre->setObjectName(QStringLiteral("lineEditTitre"));
        lineEditTitre->setGeometry(QRect(20, 140, 484, 30));
        lineEditTitre->setMinimumSize(QSize(484, 30));
        lineEditTitre->setMaximumSize(QSize(484, 30));
        lineEditTitre->setReadOnly(true);
        horizontalSliderProgression = new QSlider(groupBoxCommandes);
        horizontalSliderProgression->setObjectName(QStringLiteral("horizontalSliderProgression"));
        horizontalSliderProgression->setGeometry(QRect(20, 210, 484, 20));
        horizontalSliderProgression->setMinimumSize(QSize(484, 20));
        horizontalSliderProgression->setMaximumSize(QSize(484, 20));
        horizontalSliderProgression->setMouseTracking(true);
        horizontalSliderProgression->setOrientation(Qt::Horizontal);
        horizontalSliderProgression->setInvertedControls(false);
        labelDuree = new QLabel(groupBoxCommandes);
        labelDuree->setObjectName(QStringLiteral("labelDuree"));
        labelDuree->setGeometry(QRect(440, 180, 60, 20));
        labelDuree->setMinimumSize(QSize(60, 20));
        labelDuree->setMaximumSize(QSize(60, 20));
        labelDuree->setAutoFillBackground(true);
        labelDuree->setFrameShape(QFrame::Box);
        labelDuree->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelCourant = new QLabel(groupBoxCommandes);
        labelCourant->setObjectName(QStringLiteral("labelCourant"));
        labelCourant->setGeometry(QRect(20, 180, 60, 20));
        labelCourant->setMinimumSize(QSize(60, 20));
        labelCourant->setMaximumSize(QSize(60, 20));
        QFont font1;
        font1.setPointSize(9);
        labelCourant->setFont(font1);
        labelCourant->setAutoFillBackground(true);
        labelCourant->setFrameShape(QFrame::Box);
        labelCourant->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget2 = new QWidget(groupBoxCommandes);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 531, 122));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonRetour = new QPushButton(layoutWidget2);
        pushButtonRetour->setObjectName(QStringLiteral("pushButtonRetour"));
        pushButtonRetour->setMinimumSize(QSize(120, 120));
        pushButtonRetour->setMaximumSize(QSize(120, 120));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/Actions-media-seek-backward-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRetour->setIcon(icon9);
        pushButtonRetour->setIconSize(QSize(100, 100));
        pushButtonRetour->setFlat(true);

        horizontalLayout->addWidget(pushButtonRetour);

        pushButtonLecture = new QPushButton(layoutWidget2);
        pushButtonLecture->setObjectName(QStringLiteral("pushButtonLecture"));
        pushButtonLecture->setMinimumSize(QSize(120, 120));
        pushButtonLecture->setMaximumSize(QSize(120, 120));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/Actions-media-playback-start-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLecture->setIcon(icon10);
        pushButtonLecture->setIconSize(QSize(100, 100));
        pushButtonLecture->setFlat(true);

        horizontalLayout->addWidget(pushButtonLecture);

        pushButtonStop = new QPushButton(layoutWidget2);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setMaximumSize(QSize(120, 120));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/Actions-media-playback-stop-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStop->setIcon(icon11);
        pushButtonStop->setIconSize(QSize(100, 100));
        pushButtonStop->setFlat(true);

        horizontalLayout->addWidget(pushButtonStop);

        pushButtonAvance = new QPushButton(layoutWidget2);
        pushButtonAvance->setObjectName(QStringLiteral("pushButtonAvance"));
        pushButtonAvance->setMinimumSize(QSize(120, 120));
        pushButtonAvance->setMaximumSize(QSize(120, 120));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/Actions-media-seek-forward-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAvance->setIcon(icon12);
        pushButtonAvance->setIconSize(QSize(100, 100));
        pushButtonAvance->setFlat(true);

        horizontalLayout->addWidget(pushButtonAvance);

        groupBoxOrdre = new QGroupBox(LecteurAudio);
        groupBoxOrdre->setObjectName(QStringLiteral("groupBoxOrdre"));
        groupBoxOrdre->setGeometry(QRect(560, 20, 111, 841));
        layoutWidget_3 = new QWidget(groupBoxOrdre);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 94, 272));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonMonter = new QPushButton(layoutWidget_3);
        pushButtonMonter->setObjectName(QStringLiteral("pushButtonMonter"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/Apps-Go-Up-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMonter->setIcon(icon13);
        pushButtonMonter->setIconSize(QSize(80, 80));
        pushButtonMonter->setFlat(true);

        verticalLayout->addWidget(pushButtonMonter);

        pushButtonDescendre = new QPushButton(layoutWidget_3);
        pushButtonDescendre->setObjectName(QStringLiteral("pushButtonDescendre"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/Apps-Go-Down-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDescendre->setIcon(icon14);
        pushButtonDescendre->setIconSize(QSize(80, 80));
        pushButtonDescendre->setFlat(true);

        verticalLayout->addWidget(pushButtonDescendre);

        pushButtonSupprimer = new QPushButton(layoutWidget_3);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/Actions-edit-delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon15);
        pushButtonSupprimer->setIconSize(QSize(80, 80));
        pushButtonSupprimer->setFlat(true);

        verticalLayout->addWidget(pushButtonSupprimer);

        widget = new QWidget(groupBoxOrdre);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 560, 94, 272));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAleatoire = new QPushButton(widget);
        pushButtonAleatoire->setObjectName(QStringLiteral("pushButtonAleatoire"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/iconVertAleatoire.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAleatoire->setIcon(icon16);
        pushButtonAleatoire->setIconSize(QSize(80, 80));
        pushButtonAleatoire->setFlat(true);

        verticalLayout_2->addWidget(pushButtonAleatoire);

        pushButtonBoucle = new QPushButton(widget);
        pushButtonBoucle->setObjectName(QStringLiteral("pushButtonBoucle"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/iconVertBoucle.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBoucle->setIcon(icon17);
        pushButtonBoucle->setIconSize(QSize(80, 80));
        pushButtonBoucle->setFlat(true);

        verticalLayout_2->addWidget(pushButtonBoucle);

        pushButtonSeqentiel = new QPushButton(widget);
        pushButtonSeqentiel->setObjectName(QStringLiteral("pushButtonSeqentiel"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/iconVertSequentiel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSeqentiel->setIcon(icon18);
        pushButtonSeqentiel->setIconSize(QSize(80, 80));
        pushButtonSeqentiel->setFlat(true);

        verticalLayout_2->addWidget(pushButtonSeqentiel);


        retranslateUi(LecteurAudio);

        QMetaObject::connectSlotsByName(LecteurAudio);
    } // setupUi

    void retranslateUi(QWidget *LecteurAudio)
    {
        LecteurAudio->setWindowTitle(QApplication::translate("LecteurAudio", "Form", nullptr));
        groupBoxBoucle->setTitle(QApplication::translate("LecteurAudio", "Boucle", nullptr));
        groupBoxDebut->setTitle(QApplication::translate("LecteurAudio", "D\303\251but", nullptr));
        pushButtonMoinsA->setText(QString());
        pushButtonPlusA->setText(QString());
        groupBoxFin->setTitle(QApplication::translate("LecteurAudio", "Fin", nullptr));
        pushButtonMoinsB->setText(QString());
        pushButtonPlusB->setText(QString());
        pushButtonJalonB->setText(QString());
        pushButtonJalonA->setText(QString());
        groupBoxReglage->setTitle(QApplication::translate("LecteurAudio", "R\303\251glages", nullptr));
        pushButtonSon->setText(QString());
        label->setText(QApplication::translate("LecteurAudio", "Volume", nullptr));
        label_2->setText(QApplication::translate("LecteurAudio", "Plus lent", nullptr));
        label_3->setText(QApplication::translate("LecteurAudio", "Plus rapide", nullptr));
        label_4->setText(QApplication::translate("LecteurAudio", "Normal", nullptr));
        groupBoxListeLecture->setTitle(QApplication::translate("LecteurAudio", "Liste de lecture", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonNouvelle->setToolTip(QApplication::translate("LecteurAudio", "<html><head/><body><p>Nouvelle Liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonNouvelle->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonAjouter->setToolTip(QApplication::translate("LecteurAudio", "<html><head/><body><p>Ajout de chansons</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAjouter->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonOuvrir->setToolTip(QApplication::translate("LecteurAudio", "<html><head/><body><p>Ouverture d'une liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonOuvrir->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonEnregistrer->setToolTip(QApplication::translate("LecteurAudio", "<html><head/><body><p>Enregistrement de la liste de lecture</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonEnregistrer->setText(QString());
        groupBoxCommandes->setTitle(QApplication::translate("LecteurAudio", "Commandes audio", nullptr));
        labelDuree->setText(QString());
        labelCourant->setText(QString());
        pushButtonRetour->setText(QString());
        pushButtonLecture->setText(QString());
        pushButtonStop->setText(QString());
        pushButtonAvance->setText(QString());
        groupBoxOrdre->setTitle(QApplication::translate("LecteurAudio", "Ordre", nullptr));
        pushButtonMonter->setText(QString());
        pushButtonDescendre->setText(QString());
        pushButtonSupprimer->setText(QString());
        pushButtonAleatoire->setText(QString());
        pushButtonBoucle->setText(QString());
        pushButtonSeqentiel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LecteurAudio: public Ui_LecteurAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURAUDIO_H
