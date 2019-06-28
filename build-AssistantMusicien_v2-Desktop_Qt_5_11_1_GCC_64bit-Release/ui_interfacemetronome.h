/********************************************************************************
** Form generated from reading UI file 'interfacemetronome.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEMETRONOME_H
#define UI_INTERFACEMETRONOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceMetronome
{
public:
    QPushButton *pushButtonEnregistrer;
    QComboBox *comboBoxUnite;
    QLabel *labelEgale;
    QLineEdit *lineEditTempo;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonMoins;
    QPushButton *pushButtonStructure;
    QPushButton *pushButtonSub;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutPrincipale;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutSubdivision;
    QPushButton *pushButtonSon;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonTaper;
    QSlider *verticalSliderVolume;
    QLabel *labelVolume;
    QLabel *labelSeparation;
    QPushButton *pushButtonTempo;
    QToolButton *toolButtonNominateur;
    QToolButton *toolButtonDenominateur;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayoutIndication;
    QFrame *frame;

    void setupUi(QWidget *InterfaceMetronome)
    {
        if (InterfaceMetronome->objectName().isEmpty())
            InterfaceMetronome->setObjectName(QStringLiteral("InterfaceMetronome"));
        InterfaceMetronome->resize(1780, 702);
        InterfaceMetronome->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        pushButtonEnregistrer = new QPushButton(InterfaceMetronome);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setGeometry(QRect(30, 20, 91, 81));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEnregistrer->setIcon(icon);
        pushButtonEnregistrer->setIconSize(QSize(60, 60));
        comboBoxUnite = new QComboBox(InterfaceMetronome);
        comboBoxUnite->setObjectName(QStringLiteral("comboBoxUnite"));
        comboBoxUnite->setGeometry(QRect(730, 40, 61, 91));
        labelEgale = new QLabel(InterfaceMetronome);
        labelEgale->setObjectName(QStringLiteral("labelEgale"));
        labelEgale->setGeometry(QRect(830, 70, 21, 26));
        lineEditTempo = new QLineEdit(InterfaceMetronome);
        lineEditTempo->setObjectName(QStringLiteral("lineEditTempo"));
        lineEditTempo->setGeometry(QRect(880, 60, 81, 51));
        lineEditTempo->setAlignment(Qt::AlignCenter);
        pushButtonPlus = new QPushButton(InterfaceMetronome);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(1140, 70, 71, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlus->setIcon(icon1);
        pushButtonPlus->setIconSize(QSize(50, 50));
        pushButtonMoins = new QPushButton(InterfaceMetronome);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));
        pushButtonMoins->setGeometry(QRect(1240, 70, 71, 61));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/moins.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMoins->setIcon(icon2);
        pushButtonMoins->setIconSize(QSize(50, 50));
        pushButtonStructure = new QPushButton(InterfaceMetronome);
        pushButtonStructure->setObjectName(QStringLiteral("pushButtonStructure"));
        pushButtonStructure->setGeometry(QRect(20, 160, 101, 31));
        pushButtonSub = new QPushButton(InterfaceMetronome);
        pushButtonSub->setObjectName(QStringLiteral("pushButtonSub"));
        pushButtonSub->setGeometry(QRect(20, 440, 111, 31));
        horizontalLayoutWidget = new QWidget(InterfaceMetronome);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 160, 831, 91));
        horizontalLayoutPrincipale = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutPrincipale->setSpacing(6);
        horizontalLayoutPrincipale->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutPrincipale->setObjectName(QStringLiteral("horizontalLayoutPrincipale"));
        horizontalLayoutPrincipale->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(InterfaceMetronome);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 540, 1701, 91));
        horizontalLayoutSubdivision = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutSubdivision->setSpacing(6);
        horizontalLayoutSubdivision->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutSubdivision->setObjectName(QStringLiteral("horizontalLayoutSubdivision"));
        horizontalLayoutSubdivision->setContentsMargins(0, 0, 0, 0);
        pushButtonSon = new QPushButton(InterfaceMetronome);
        pushButtonSon->setObjectName(QStringLiteral("pushButtonSon"));
        pushButtonSon->setGeometry(QRect(480, 310, 71, 61));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/son.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSon->setIcon(icon3);
        pushButtonSon->setIconSize(QSize(50, 50));
        pushButtonPlay = new QPushButton(InterfaceMetronome);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));
        pushButtonPlay->setGeometry(QRect(850, 310, 71, 61));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/jouer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon4);
        pushButtonPlay->setIconSize(QSize(50, 50));
        pushButtonTaper = new QPushButton(InterfaceMetronome);
        pushButtonTaper->setObjectName(QStringLiteral("pushButtonTaper"));
        pushButtonTaper->setGeometry(QRect(1240, 320, 71, 61));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/TapTempo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonTaper->setIcon(icon5);
        pushButtonTaper->setIconSize(QSize(50, 50));
        verticalSliderVolume = new QSlider(InterfaceMetronome);
        verticalSliderVolume->setObjectName(QStringLiteral("verticalSliderVolume"));
        verticalSliderVolume->setGeometry(QRect(1750, 230, 16, 160));
        verticalSliderVolume->setMinimum(1);
        verticalSliderVolume->setMaximum(100);
        verticalSliderVolume->setOrientation(Qt::Vertical);
        labelVolume = new QLabel(InterfaceMetronome);
        labelVolume->setObjectName(QStringLiteral("labelVolume"));
        labelVolume->setGeometry(QRect(1700, 240, 51, 31));
        labelSeparation = new QLabel(InterfaceMetronome);
        labelSeparation->setObjectName(QStringLiteral("labelSeparation"));
        labelSeparation->setGeometry(QRect(30, 300, 91, 26));
        labelSeparation->setStyleSheet(QStringLiteral(""));
        pushButtonTempo = new QPushButton(InterfaceMetronome);
        pushButtonTempo->setObjectName(QStringLiteral("pushButtonTempo"));
        pushButtonTempo->setGeometry(QRect(980, 60, 51, 51));
        toolButtonNominateur = new QToolButton(InterfaceMetronome);
        toolButtonNominateur->setObjectName(QStringLiteral("toolButtonNominateur"));
        toolButtonNominateur->setGeometry(QRect(60, 270, 34, 33));
        toolButtonDenominateur = new QToolButton(InterfaceMetronome);
        toolButtonDenominateur->setObjectName(QStringLiteral("toolButtonDenominateur"));
        toolButtonDenominateur->setGeometry(QRect(60, 330, 34, 33));
        horizontalLayoutWidget_3 = new QWidget(InterfaceMetronome);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 640, 1701, 41));
        horizontalLayoutIndication = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayoutIndication->setSpacing(6);
        horizontalLayoutIndication->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutIndication->setObjectName(QStringLiteral("horizontalLayoutIndication"));
        horizontalLayoutIndication->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(InterfaceMetronome);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1770, 1010));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        pushButtonEnregistrer->raise();
        comboBoxUnite->raise();
        labelEgale->raise();
        lineEditTempo->raise();
        pushButtonPlus->raise();
        pushButtonMoins->raise();
        pushButtonStructure->raise();
        pushButtonSub->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        pushButtonSon->raise();
        pushButtonPlay->raise();
        pushButtonTaper->raise();
        verticalSliderVolume->raise();
        labelVolume->raise();
        labelSeparation->raise();
        pushButtonTempo->raise();
        toolButtonNominateur->raise();
        toolButtonDenominateur->raise();
        horizontalLayoutWidget_3->raise();

        retranslateUi(InterfaceMetronome);

        QMetaObject::connectSlotsByName(InterfaceMetronome);
    } // setupUi

    void retranslateUi(QWidget *InterfaceMetronome)
    {
        InterfaceMetronome->setWindowTitle(QApplication::translate("InterfaceMetronome", "InterfaceMetronome", nullptr));
        pushButtonEnregistrer->setText(QString());
        labelEgale->setText(QApplication::translate("InterfaceMetronome", "=", nullptr));
        lineEditTempo->setText(QApplication::translate("InterfaceMetronome", "60", nullptr));
        pushButtonPlus->setText(QString());
        pushButtonMoins->setText(QString());
        pushButtonStructure->setText(QApplication::translate("InterfaceMetronome", "Structure", nullptr));
        pushButtonSub->setText(QApplication::translate("InterfaceMetronome", "Subdivision", nullptr));
        pushButtonSon->setText(QString());
        pushButtonPlay->setText(QString());
        pushButtonTaper->setText(QString());
        labelVolume->setText(QApplication::translate("InterfaceMetronome", "1%", nullptr));
        labelSeparation->setText(QApplication::translate("InterfaceMetronome", "-----------------", nullptr));
        pushButtonTempo->setText(QApplication::translate("InterfaceMetronome", "BPM", nullptr));
        toolButtonNominateur->setText(QApplication::translate("InterfaceMetronome", "4", nullptr));
        toolButtonDenominateur->setText(QApplication::translate("InterfaceMetronome", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfaceMetronome: public Ui_InterfaceMetronome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEMETRONOME_H
