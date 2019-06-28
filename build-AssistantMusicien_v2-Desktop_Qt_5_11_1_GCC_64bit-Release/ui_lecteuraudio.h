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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurAudio
{
public:
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonMusiquePrecedente;
    QLineEdit *lineEditTitreMusique;
    QLabel *labelTitreMusique;
    QGroupBox *groupBoxMarqueur;
    QFrame *frame_3;
    QPushButton *pushButtonMarqueur2;
    QLineEdit *lineEditTempsMarqueur2;
    QPushButton *pushButtonMoins2;
    QPushButton *pushButtonPlus2;
    QFrame *frame_4;
    QPushButton *pushButtonPlus1;
    QPushButton *pushButtonMoins1;
    QLineEdit *lineEditTempsMarqueur1;
    QPushButton *pushButtonMarqueur1;
    QPushButton *pushButtonMusiqueSuivante;
    QGroupBox *groupBox_Volume;
    QFrame *frame;
    QPushButton *pushButtonAugmenterVolume;
    QPushButton *pushButtonDiminuerVolume;
    QSlider *horizontalSliderVolume;
    QFrame *frame_2;
    QSlider *horizontalSliderRapidite;
    QLabel *labelLent;
    QLabel *labelNormal;
    QLabel *labelRapide;
    QLineEdit *lineEditRapiditee;
    QLabel *labelNomDuree;
    QLabel *labelNomTempsCourant;
    QLabel *labelDuree;
    QSlider *horizontalSliderMusique;
    QPushButton *pushButtonAvancerSecondes;
    QPushButton *pushButtonReculerSecondes;
    QListWidget *listWidgetListeDeLecture;
    QPushButton *pushButtonEffacer;
    QPushButton *pushButtonOuvrirMusique;
    QPushButton *pushButtonBas;
    QPushButton *pushButtonHaut;
    QFrame *frame_5;
    QLabel *labelTempsCourant;
    QPushButton *pushButtonChargerMetronome;
    QPushButton *pushButtonRepeter;
    QPushButton *pushButtonAleatoire;

    void setupUi(QWidget *LecteurAudio)
    {
        if (LecteurAudio->objectName().isEmpty())
            LecteurAudio->setObjectName(QStringLiteral("LecteurAudio"));
        LecteurAudio->resize(1767, 1058);
        LecteurAudio->setMinimumSize(QSize(0, 0));
        LecteurAudio->setStyleSheet(QStringLiteral("background-color: rgb(176, 196, 229);"));
        pushButtonPlay = new QPushButton(LecteurAudio);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));
        pushButtonPlay->setGeometry(QRect(1010, 230, 111, 101));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/jouer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon);
        pushButtonPlay->setIconSize(QSize(60, 60));
        pushButtonStop = new QPushButton(LecteurAudio);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setGeometry(QRect(1170, 230, 111, 101));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icone-arreter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStop->setIcon(icon1);
        pushButtonStop->setIconSize(QSize(50, 50));
        pushButtonMusiquePrecedente = new QPushButton(LecteurAudio);
        pushButtonMusiquePrecedente->setObjectName(QStringLiteral("pushButtonMusiquePrecedente"));
        pushButtonMusiquePrecedente->setGeometry(QRect(700, 230, 111, 101));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icone-precedent.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMusiquePrecedente->setIcon(icon2);
        pushButtonMusiquePrecedente->setIconSize(QSize(60, 60));
        lineEditTitreMusique = new QLineEdit(LecteurAudio);
        lineEditTitreMusique->setObjectName(QStringLiteral("lineEditTitreMusique"));
        lineEditTitreMusique->setGeometry(QRect(880, 90, 681, 51));
        QFont font;
        font.setPointSize(15);
        lineEditTitreMusique->setFont(font);
        labelTitreMusique = new QLabel(LecteurAudio);
        labelTitreMusique->setObjectName(QStringLiteral("labelTitreMusique"));
        labelTitreMusique->setGeometry(QRect(880, 50, 521, 31));
        labelTitreMusique->setFont(font);
        groupBoxMarqueur = new QGroupBox(LecteurAudio);
        groupBoxMarqueur->setObjectName(QStringLiteral("groupBoxMarqueur"));
        groupBoxMarqueur->setGeometry(QRect(520, 470, 1201, 271));
        groupBoxMarqueur->setFont(font);
        frame_3 = new QFrame(groupBoxMarqueur);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(600, 40, 591, 221));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButtonMarqueur2 = new QPushButton(frame_3);
        pushButtonMarqueur2->setObjectName(QStringLiteral("pushButtonMarqueur2"));
        pushButtonMarqueur2->setGeometry(QRect(40, 20, 181, 181));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icone-marqueur2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMarqueur2->setIcon(icon3);
        pushButtonMarqueur2->setIconSize(QSize(75, 75));
        lineEditTempsMarqueur2 = new QLineEdit(frame_3);
        lineEditTempsMarqueur2->setObjectName(QStringLiteral("lineEditTempsMarqueur2"));
        lineEditTempsMarqueur2->setGeometry(QRect(260, 10, 311, 61));
        lineEditTempsMarqueur2->setFont(font);
        pushButtonMoins2 = new QPushButton(frame_3);
        pushButtonMoins2->setObjectName(QStringLiteral("pushButtonMoins2"));
        pushButtonMoins2->setGeometry(QRect(260, 90, 151, 111));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icone-moins.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoins2->setIcon(icon4);
        pushButtonMoins2->setIconSize(QSize(120, 80));
        pushButtonPlus2 = new QPushButton(frame_3);
        pushButtonPlus2->setObjectName(QStringLiteral("pushButtonPlus2"));
        pushButtonPlus2->setGeometry(QRect(420, 90, 151, 111));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icone-plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlus2->setIcon(icon5);
        pushButtonPlus2->setIconSize(QSize(120, 80));
        frame_4 = new QFrame(groupBoxMarqueur);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 40, 581, 221));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        pushButtonPlus1 = new QPushButton(frame_4);
        pushButtonPlus1->setObjectName(QStringLiteral("pushButtonPlus1"));
        pushButtonPlus1->setGeometry(QRect(410, 90, 151, 111));
        pushButtonPlus1->setIcon(icon5);
        pushButtonPlus1->setIconSize(QSize(120, 80));
        pushButtonMoins1 = new QPushButton(frame_4);
        pushButtonMoins1->setObjectName(QStringLiteral("pushButtonMoins1"));
        pushButtonMoins1->setGeometry(QRect(250, 90, 151, 111));
        pushButtonMoins1->setIcon(icon4);
        pushButtonMoins1->setIconSize(QSize(120, 80));
        lineEditTempsMarqueur1 = new QLineEdit(frame_4);
        lineEditTempsMarqueur1->setObjectName(QStringLiteral("lineEditTempsMarqueur1"));
        lineEditTempsMarqueur1->setGeometry(QRect(250, 10, 311, 61));
        lineEditTempsMarqueur1->setFont(font);
        pushButtonMarqueur1 = new QPushButton(frame_4);
        pushButtonMarqueur1->setObjectName(QStringLiteral("pushButtonMarqueur1"));
        pushButtonMarqueur1->setGeometry(QRect(30, 20, 181, 181));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icone-marqueur1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMarqueur1->setIcon(icon6);
        pushButtonMarqueur1->setIconSize(QSize(75, 75));
        pushButtonMusiqueSuivante = new QPushButton(LecteurAudio);
        pushButtonMusiqueSuivante->setObjectName(QStringLiteral("pushButtonMusiqueSuivante"));
        pushButtonMusiqueSuivante->setGeometry(QRect(1490, 230, 111, 101));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/icone-suivant.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMusiqueSuivante->setIcon(icon7);
        pushButtonMusiqueSuivante->setIconSize(QSize(60, 60));
        groupBox_Volume = new QGroupBox(LecteurAudio);
        groupBox_Volume->setObjectName(QStringLiteral("groupBox_Volume"));
        groupBox_Volume->setGeometry(QRect(520, 760, 1201, 271));
        groupBox_Volume->setFont(font);
        frame = new QFrame(groupBox_Volume);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 40, 501, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButtonAugmenterVolume = new QPushButton(frame);
        pushButtonAugmenterVolume->setObjectName(QStringLiteral("pushButtonAugmenterVolume"));
        pushButtonAugmenterVolume->setGeometry(QRect(410, 130, 81, 81));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/icone-volume-plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAugmenterVolume->setIcon(icon8);
        pushButtonAugmenterVolume->setIconSize(QSize(50, 50));
        pushButtonDiminuerVolume = new QPushButton(frame);
        pushButtonDiminuerVolume->setObjectName(QStringLiteral("pushButtonDiminuerVolume"));
        pushButtonDiminuerVolume->setGeometry(QRect(410, 10, 81, 81));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/icons8-volume-moyen-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDiminuerVolume->setIcon(icon9);
        pushButtonDiminuerVolume->setIconSize(QSize(50, 50));
        horizontalSliderVolume = new QSlider(frame);
        horizontalSliderVolume->setObjectName(QStringLiteral("horizontalSliderVolume"));
        horizontalSliderVolume->setGeometry(QRect(10, 60, 381, 91));
        horizontalSliderVolume->setOrientation(Qt::Horizontal);
        horizontalSliderVolume->setTickPosition(QSlider::TicksBothSides);
        horizontalSliderVolume->setTickInterval(5);
        frame_2 = new QFrame(groupBox_Volume);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(520, 40, 671, 221));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalSliderRapidite = new QSlider(frame_2);
        horizontalSliderRapidite->setObjectName(QStringLiteral("horizontalSliderRapidite"));
        horizontalSliderRapidite->setGeometry(QRect(20, 70, 521, 71));
        horizontalSliderRapidite->setTracking(false);
        horizontalSliderRapidite->setOrientation(Qt::Horizontal);
        horizontalSliderRapidite->setTickPosition(QSlider::TicksBothSides);
        horizontalSliderRapidite->setTickInterval(10);
        labelLent = new QLabel(frame_2);
        labelLent->setObjectName(QStringLiteral("labelLent"));
        labelLent->setGeometry(QRect(6, 40, 51, 20));
        labelLent->setFont(font);
        labelNormal = new QLabel(frame_2);
        labelNormal->setObjectName(QStringLiteral("labelNormal"));
        labelNormal->setGeometry(QRect(290, 30, 81, 20));
        labelNormal->setFont(font);
        labelRapide = new QLabel(frame_2);
        labelRapide->setObjectName(QStringLiteral("labelRapide"));
        labelRapide->setGeometry(QRect(500, 20, 71, 41));
        labelRapide->setFont(font);
        lineEditRapiditee = new QLineEdit(frame_2);
        lineEditRapiditee->setObjectName(QStringLiteral("lineEditRapiditee"));
        lineEditRapiditee->setGeometry(QRect(550, 80, 101, 51));
        lineEditRapiditee->setFont(font);
        labelNomDuree = new QLabel(LecteurAudio);
        labelNomDuree->setObjectName(QStringLiteral("labelNomDuree"));
        labelNomDuree->setGeometry(QRect(1650, 350, 81, 20));
        labelNomDuree->setFont(font);
        labelNomTempsCourant = new QLabel(LecteurAudio);
        labelNomTempsCourant->setObjectName(QStringLiteral("labelNomTempsCourant"));
        labelNomTempsCourant->setGeometry(QRect(540, 350, 141, 31));
        labelNomTempsCourant->setFont(font);
        labelDuree = new QLabel(LecteurAudio);
        labelDuree->setObjectName(QStringLiteral("labelDuree"));
        labelDuree->setGeometry(QRect(1640, 390, 91, 41));
        labelDuree->setFont(font);
        horizontalSliderMusique = new QSlider(LecteurAudio);
        horizontalSliderMusique->setObjectName(QStringLiteral("horizontalSliderMusique"));
        horizontalSliderMusique->setGeometry(QRect(700, 360, 911, 91));
        horizontalSliderMusique->setOrientation(Qt::Horizontal);
        pushButtonAvancerSecondes = new QPushButton(LecteurAudio);
        pushButtonAvancerSecondes->setObjectName(QStringLiteral("pushButtonAvancerSecondes"));
        pushButtonAvancerSecondes->setGeometry(QRect(1330, 230, 111, 101));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/forward-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAvancerSecondes->setIcon(icon10);
        pushButtonAvancerSecondes->setIconSize(QSize(60, 60));
        pushButtonReculerSecondes = new QPushButton(LecteurAudio);
        pushButtonReculerSecondes->setObjectName(QStringLiteral("pushButtonReculerSecondes"));
        pushButtonReculerSecondes->setGeometry(QRect(860, 230, 111, 101));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/reply-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonReculerSecondes->setIcon(icon11);
        pushButtonReculerSecondes->setIconSize(QSize(60, 60));
        listWidgetListeDeLecture = new QListWidget(LecteurAudio);
        listWidgetListeDeLecture->setObjectName(QStringLiteral("listWidgetListeDeLecture"));
        listWidgetListeDeLecture->setGeometry(QRect(10, 20, 481, 1001));
        listWidgetListeDeLecture->setFont(font);
        pushButtonEffacer = new QPushButton(LecteurAudio);
        pushButtonEffacer->setObjectName(QStringLiteral("pushButtonEffacer"));
        pushButtonEffacer->setGeometry(QRect(510, 240, 101, 91));
        pushButtonEffacer->setMinimumSize(QSize(0, 0));
        pushButtonEffacer->setMaximumSize(QSize(300, 300));
        pushButtonEffacer->setSizeIncrement(QSize(0, 0));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEffacer->setIcon(icon12);
        pushButtonEffacer->setIconSize(QSize(40, 40));
        pushButtonOuvrirMusique = new QPushButton(LecteurAudio);
        pushButtonOuvrirMusique->setObjectName(QStringLiteral("pushButtonOuvrirMusique"));
        pushButtonOuvrirMusique->setGeometry(QRect(730, 40, 121, 101));
        pushButtonOuvrirMusique->setMinimumSize(QSize(0, 0));
        pushButtonOuvrirMusique->setMaximumSize(QSize(300, 300));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/dossier-musique.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOuvrirMusique->setIcon(icon13);
        pushButtonOuvrirMusique->setIconSize(QSize(60, 60));
        pushButtonBas = new QPushButton(LecteurAudio);
        pushButtonBas->setObjectName(QStringLiteral("pushButtonBas"));
        pushButtonBas->setGeometry(QRect(510, 130, 101, 91));
        pushButtonBas->setMinimumSize(QSize(0, 0));
        pushButtonBas->setMaximumSize(QSize(300, 300));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/long-arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBas->setIcon(icon14);
        pushButtonBas->setIconSize(QSize(50, 50));
        pushButtonHaut = new QPushButton(LecteurAudio);
        pushButtonHaut->setObjectName(QStringLiteral("pushButtonHaut"));
        pushButtonHaut->setGeometry(QRect(510, 20, 101, 91));
        pushButtonHaut->setMinimumSize(QSize(0, 0));
        pushButtonHaut->setMaximumSize(QSize(300, 300));
        pushButtonHaut->setSizeIncrement(QSize(0, 0));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/long-arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonHaut->setIcon(icon15);
        pushButtonHaut->setIconSize(QSize(50, 50));
        frame_5 = new QFrame(LecteurAudio);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 1770, 1061));
        frame_5->setStyleSheet(QStringLiteral("background-color: rgb(176, 196, 229);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        labelTempsCourant = new QLabel(frame_5);
        labelTempsCourant->setObjectName(QStringLiteral("labelTempsCourant"));
        labelTempsCourant->setGeometry(QRect(570, 390, 71, 31));
        labelTempsCourant->setFont(font);
        pushButtonChargerMetronome = new QPushButton(frame_5);
        pushButtonChargerMetronome->setObjectName(QStringLiteral("pushButtonChargerMetronome"));
        pushButtonChargerMetronome->setGeometry(QRect(1630, 200, 110, 100));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/metronome2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonChargerMetronome->setIcon(icon16);
        pushButtonChargerMetronome->setIconSize(QSize(90, 90));
        pushButtonRepeter = new QPushButton(frame_5);
        pushButtonRepeter->setObjectName(QStringLiteral("pushButtonRepeter"));
        pushButtonRepeter->setGeometry(QRect(1630, 0, 111, 101));
        pushButtonRepeter->setMinimumSize(QSize(0, 0));
        pushButtonRepeter->setMaximumSize(QSize(300, 300));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/repeter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRepeter->setIcon(icon17);
        pushButtonRepeter->setIconSize(QSize(60, 60));
        pushButtonAleatoire = new QPushButton(frame_5);
        pushButtonAleatoire->setObjectName(QStringLiteral("pushButtonAleatoire"));
        pushButtonAleatoire->setGeometry(QRect(1630, 100, 110, 100));
        pushButtonAleatoire->setMinimumSize(QSize(0, 0));
        pushButtonAleatoire->setMaximumSize(QSize(300, 300));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/iconeAleatoireBleue.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAleatoire->setIcon(icon18);
        pushButtonAleatoire->setIconSize(QSize(50, 50));
        frame_5->raise();
        pushButtonPlay->raise();
        pushButtonStop->raise();
        pushButtonMusiquePrecedente->raise();
        lineEditTitreMusique->raise();
        labelTitreMusique->raise();
        groupBoxMarqueur->raise();
        pushButtonMusiqueSuivante->raise();
        groupBox_Volume->raise();
        labelNomDuree->raise();
        labelNomTempsCourant->raise();
        labelDuree->raise();
        horizontalSliderMusique->raise();
        pushButtonAvancerSecondes->raise();
        pushButtonReculerSecondes->raise();
        listWidgetListeDeLecture->raise();
        pushButtonEffacer->raise();
        pushButtonOuvrirMusique->raise();
        pushButtonBas->raise();
        pushButtonHaut->raise();

        retranslateUi(LecteurAudio);

        QMetaObject::connectSlotsByName(LecteurAudio);
    } // setupUi

    void retranslateUi(QWidget *LecteurAudio)
    {
        LecteurAudio->setWindowTitle(QApplication::translate("LecteurAudio", "Widget", nullptr));
        pushButtonPlay->setText(QString());
        pushButtonStop->setText(QString());
        pushButtonMusiquePrecedente->setText(QString());
        labelTitreMusique->setText(QApplication::translate("LecteurAudio", "Titre :", nullptr));
        groupBoxMarqueur->setTitle(QApplication::translate("LecteurAudio", "Boucle", nullptr));
        pushButtonMarqueur2->setText(QString());
        pushButtonMoins2->setText(QString());
        pushButtonPlus2->setText(QString());
        pushButtonPlus1->setText(QString());
        pushButtonMoins1->setText(QString());
        pushButtonMarqueur1->setText(QString());
        pushButtonMusiqueSuivante->setText(QString());
        groupBox_Volume->setTitle(QApplication::translate("LecteurAudio", "Volume", nullptr));
        pushButtonAugmenterVolume->setText(QString());
        pushButtonDiminuerVolume->setText(QString());
        labelLent->setText(QApplication::translate("LecteurAudio", "Lent", nullptr));
        labelNormal->setText(QApplication::translate("LecteurAudio", "Normal", nullptr));
        labelRapide->setText(QApplication::translate("LecteurAudio", "Rapide", nullptr));
        labelNomDuree->setText(QApplication::translate("LecteurAudio", "Dur\303\251e", nullptr));
        labelNomTempsCourant->setText(QApplication::translate("LecteurAudio", "Temps Courant", nullptr));
        labelDuree->setText(QString());
        pushButtonAvancerSecondes->setText(QString());
        pushButtonReculerSecondes->setText(QString());
        pushButtonEffacer->setText(QString());
        pushButtonOuvrirMusique->setText(QString());
        pushButtonBas->setText(QString());
        pushButtonHaut->setText(QString());
        labelTempsCourant->setText(QApplication::translate("LecteurAudio", "2:30", nullptr));
        pushButtonChargerMetronome->setText(QString());
        pushButtonRepeter->setText(QString());
        pushButtonAleatoire->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LecteurAudio: public Ui_LecteurAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURAUDIO_H
