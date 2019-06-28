/********************************************************************************
** Form generated from reading UI file 'parametres.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRES_H
#define UI_PARAMETRES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parametres
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSlider *horizontalSlider_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QSlider *horizontalSlider_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSlider *horizontalSlider_4;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QPushButton *pushButtonResetAudio;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonResetEnregistrement;
    QPushButton *pushButtonRythme;
    QPushButton *pushButtonCheminAudio;
    QPushButton *pushButtonCheminPartition;
    QPushButton *pushButtonCheminEnregistrement;
    QPushButton *pushButtonCheminRythme;
    QPushButton *pushButtonAppliquerModifications;
    QLabel *label_6;
    QStackedWidget *stackedWidgetGestionCheminFichier;
    QWidget *page;
    QGroupBox *groupBoxCheminFichiers;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCheminAudio;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditCheminAudio;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCheminPartition;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditCheminPartition;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCheminEnregistrement;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEditCheminEnregistrement;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCheminRythme;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEditCheminRythme;
    QWidget *page_2;
    QGroupBox *groupBoxCheminFichiersParDefaut;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelCheminAudioDefaut;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEditCheminAudioDefaut;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelCheminPartitionDefaut;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEditCheminPartitionDefaut;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelCheminEnregistrementDefaut;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEditCheminEnregistrementDefaut;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelCheminRythmeDefaut;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEditCheminRythmeDefaut;
    QPushButton *pushButtonModifierParametreDefaut;
    QLabel *label_7;

    void setupUi(QWidget *Parametres)
    {
        if (Parametres->objectName().isEmpty())
            Parametres->setObjectName(QStringLiteral("Parametres"));
        Parametres->resize(1750, 1010);
        frame = new QFrame(Parametres);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1800, 991));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 1491, 241));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 1451, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 120, 1451, 59));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(105, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        horizontalSlider_3 = new QSlider(layoutWidget1);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 190, 1451, 29));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(115, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalSlider_4 = new QSlider(layoutWidget2);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_4);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 280, 1491, 141));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 131, 17));
        label->setFont(font);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 54, 17));
        label_5->setFont(font);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(370, 50, 1101, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButtonResetAudio = new QPushButton(frame);
        pushButtonResetAudio->setObjectName(QStringLiteral("pushButtonResetAudio"));
        pushButtonResetAudio->setGeometry(QRect(1650, 510, 80, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonResetAudio->setIcon(icon);
        pushButtonResetAudio->setIconSize(QSize(70, 70));
        pushButtonReset = new QPushButton(frame);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(1650, 610, 80, 80));
        pushButtonReset->setIcon(icon);
        pushButtonReset->setIconSize(QSize(70, 70));
        pushButtonResetEnregistrement = new QPushButton(frame);
        pushButtonResetEnregistrement->setObjectName(QStringLiteral("pushButtonResetEnregistrement"));
        pushButtonResetEnregistrement->setGeometry(QRect(1650, 710, 80, 80));
        pushButtonResetEnregistrement->setIcon(icon);
        pushButtonResetEnregistrement->setIconSize(QSize(70, 70));
        pushButtonRythme = new QPushButton(frame);
        pushButtonRythme->setObjectName(QStringLiteral("pushButtonRythme"));
        pushButtonRythme->setGeometry(QRect(1650, 810, 80, 80));
        pushButtonRythme->setIcon(icon);
        pushButtonRythme->setIconSize(QSize(70, 70));
        pushButtonCheminAudio = new QPushButton(frame);
        pushButtonCheminAudio->setObjectName(QStringLiteral("pushButtonCheminAudio"));
        pushButtonCheminAudio->setGeometry(QRect(1550, 510, 80, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/open-path.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCheminAudio->setIcon(icon1);
        pushButtonCheminAudio->setIconSize(QSize(60, 60));
        pushButtonCheminPartition = new QPushButton(frame);
        pushButtonCheminPartition->setObjectName(QStringLiteral("pushButtonCheminPartition"));
        pushButtonCheminPartition->setGeometry(QRect(1550, 610, 80, 80));
        pushButtonCheminPartition->setIcon(icon1);
        pushButtonCheminPartition->setIconSize(QSize(60, 60));
        pushButtonCheminEnregistrement = new QPushButton(frame);
        pushButtonCheminEnregistrement->setObjectName(QStringLiteral("pushButtonCheminEnregistrement"));
        pushButtonCheminEnregistrement->setGeometry(QRect(1550, 710, 80, 80));
        pushButtonCheminEnregistrement->setIcon(icon1);
        pushButtonCheminEnregistrement->setIconSize(QSize(60, 60));
        pushButtonCheminRythme = new QPushButton(frame);
        pushButtonCheminRythme->setObjectName(QStringLiteral("pushButtonCheminRythme"));
        pushButtonCheminRythme->setGeometry(QRect(1550, 810, 80, 80));
        pushButtonCheminRythme->setIcon(icon1);
        pushButtonCheminRythme->setIconSize(QSize(60, 60));
        pushButtonAppliquerModifications = new QPushButton(frame);
        pushButtonAppliquerModifications->setObjectName(QStringLiteral("pushButtonAppliquerModifications"));
        pushButtonAppliquerModifications->setGeometry(QRect(1220, 910, 310, 60));
        pushButtonAppliquerModifications->setFont(font);
        pushButtonAppliquerModifications->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1570, 320, 111, 31));
        QFont font1;
        font1.setPointSize(20);
        label_6->setFont(font1);
        stackedWidgetGestionCheminFichier = new QStackedWidget(frame);
        stackedWidgetGestionCheminFichier->setObjectName(QStringLiteral("stackedWidgetGestionCheminFichier"));
        stackedWidgetGestionCheminFichier->setGeometry(QRect(40, 440, 1491, 461));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBoxCheminFichiers = new QGroupBox(page);
        groupBoxCheminFichiers->setObjectName(QStringLiteral("groupBoxCheminFichiers"));
        groupBoxCheminFichiers->setGeometry(QRect(10, 30, 1491, 441));
        groupBoxCheminFichiers->setFont(font);
        groupBoxCheminFichiers->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        layoutWidget3 = new QWidget(groupBoxCheminFichiers);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 40, 1461, 381));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelCheminAudio = new QLabel(layoutWidget3);
        labelCheminAudio->setObjectName(QStringLiteral("labelCheminAudio"));
        labelCheminAudio->setFont(font);

        horizontalLayout->addWidget(labelCheminAudio);

        horizontalSpacer_4 = new QSpacerItem(97, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineEditCheminAudio = new QLineEdit(layoutWidget3);
        lineEditCheminAudio->setObjectName(QStringLiteral("lineEditCheminAudio"));
        lineEditCheminAudio->setFont(font);
        lineEditCheminAudio->setReadOnly(true);

        horizontalLayout->addWidget(lineEditCheminAudio);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelCheminPartition = new QLabel(layoutWidget3);
        labelCheminPartition->setObjectName(QStringLiteral("labelCheminPartition"));
        labelCheminPartition->setFont(font);

        horizontalLayout_2->addWidget(labelCheminPartition);

        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        lineEditCheminPartition = new QLineEdit(layoutWidget3);
        lineEditCheminPartition->setObjectName(QStringLiteral("lineEditCheminPartition"));
        lineEditCheminPartition->setFont(font);
        lineEditCheminPartition->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditCheminPartition);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelCheminEnregistrement = new QLabel(layoutWidget3);
        labelCheminEnregistrement->setObjectName(QStringLiteral("labelCheminEnregistrement"));
        labelCheminEnregistrement->setFont(font);

        horizontalLayout_3->addWidget(labelCheminEnregistrement);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        lineEditCheminEnregistrement = new QLineEdit(layoutWidget3);
        lineEditCheminEnregistrement->setObjectName(QStringLiteral("lineEditCheminEnregistrement"));
        lineEditCheminEnregistrement->setFont(font);
        lineEditCheminEnregistrement->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditCheminEnregistrement);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelCheminRythme = new QLabel(layoutWidget3);
        labelCheminRythme->setObjectName(QStringLiteral("labelCheminRythme"));
        labelCheminRythme->setFont(font);

        horizontalLayout_4->addWidget(labelCheminRythme);

        horizontalSpacer_7 = new QSpacerItem(82, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        lineEditCheminRythme = new QLineEdit(layoutWidget3);
        lineEditCheminRythme->setObjectName(QStringLiteral("lineEditCheminRythme"));
        lineEditCheminRythme->setFont(font);
        lineEditCheminRythme->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditCheminRythme);


        verticalLayout->addLayout(horizontalLayout_4);

        stackedWidgetGestionCheminFichier->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBoxCheminFichiersParDefaut = new QGroupBox(page_2);
        groupBoxCheminFichiersParDefaut->setObjectName(QStringLiteral("groupBoxCheminFichiersParDefaut"));
        groupBoxCheminFichiersParDefaut->setGeometry(QRect(0, 30, 1491, 441));
        groupBoxCheminFichiersParDefaut->setFont(font);
        groupBoxCheminFichiersParDefaut->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        layoutWidget_2 = new QWidget(groupBoxCheminFichiersParDefaut);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 40, 1461, 381));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelCheminAudioDefaut = new QLabel(layoutWidget_2);
        labelCheminAudioDefaut->setObjectName(QStringLiteral("labelCheminAudioDefaut"));
        labelCheminAudioDefaut->setFont(font);

        horizontalLayout_8->addWidget(labelCheminAudioDefaut);

        horizontalSpacer_8 = new QSpacerItem(97, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        lineEditCheminAudioDefaut = new QLineEdit(layoutWidget_2);
        lineEditCheminAudioDefaut->setObjectName(QStringLiteral("lineEditCheminAudioDefaut"));
        lineEditCheminAudioDefaut->setFont(font);
        lineEditCheminAudioDefaut->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEditCheminAudioDefaut);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelCheminPartitionDefaut = new QLabel(layoutWidget_2);
        labelCheminPartitionDefaut->setObjectName(QStringLiteral("labelCheminPartitionDefaut"));
        labelCheminPartitionDefaut->setFont(font);

        horizontalLayout_9->addWidget(labelCheminPartitionDefaut);

        horizontalSpacer_9 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        lineEditCheminPartitionDefaut = new QLineEdit(layoutWidget_2);
        lineEditCheminPartitionDefaut->setObjectName(QStringLiteral("lineEditCheminPartitionDefaut"));
        lineEditCheminPartitionDefaut->setFont(font);
        lineEditCheminPartitionDefaut->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEditCheminPartitionDefaut);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelCheminEnregistrementDefaut = new QLabel(layoutWidget_2);
        labelCheminEnregistrementDefaut->setObjectName(QStringLiteral("labelCheminEnregistrementDefaut"));
        labelCheminEnregistrementDefaut->setFont(font);

        horizontalLayout_10->addWidget(labelCheminEnregistrementDefaut);

        horizontalSpacer_10 = new QSpacerItem(5, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        lineEditCheminEnregistrementDefaut = new QLineEdit(layoutWidget_2);
        lineEditCheminEnregistrementDefaut->setObjectName(QStringLiteral("lineEditCheminEnregistrementDefaut"));
        lineEditCheminEnregistrementDefaut->setFont(font);
        lineEditCheminEnregistrementDefaut->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEditCheminEnregistrementDefaut);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelCheminRythmeDefaut = new QLabel(layoutWidget_2);
        labelCheminRythmeDefaut->setObjectName(QStringLiteral("labelCheminRythmeDefaut"));
        labelCheminRythmeDefaut->setFont(font);

        horizontalLayout_11->addWidget(labelCheminRythmeDefaut);

        horizontalSpacer_11 = new QSpacerItem(82, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        lineEditCheminRythmeDefaut = new QLineEdit(layoutWidget_2);
        lineEditCheminRythmeDefaut->setObjectName(QStringLiteral("lineEditCheminRythmeDefaut"));
        lineEditCheminRythmeDefaut->setFont(font);
        lineEditCheminRythmeDefaut->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEditCheminRythmeDefaut);


        verticalLayout_2->addLayout(horizontalLayout_11);

        stackedWidgetGestionCheminFichier->addWidget(page_2);
        pushButtonModifierParametreDefaut = new QPushButton(frame);
        pushButtonModifierParametreDefaut->setObjectName(QStringLiteral("pushButtonModifierParametreDefaut"));
        pushButtonModifierParametreDefaut->setGeometry(QRect(890, 910, 310, 60));
        pushButtonModifierParametreDefaut->setFont(font);
        pushButtonModifierParametreDefaut->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 910, 691, 51));
        label_7->setFont(font);

        retranslateUi(Parametres);

        stackedWidgetGestionCheminFichier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Parametres);
    } // setupUi

    void retranslateUi(QWidget *Parametres)
    {
        Parametres->setWindowTitle(QApplication::translate("Parametres", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Parametres", "Param\303\250tres g\303\251n\303\251raux :", nullptr));
        label_2->setText(QApplication::translate("Parametres", "Volume g\303\251n\303\251ral de l'application :", nullptr));
        label_3->setText(QApplication::translate("Parametres", "Volume du lecteur audio :", nullptr));
        label_4->setText(QApplication::translate("Parametres", "Volume du m\303\251tronome :", nullptr));
        groupBox_2->setTitle(QApplication::translate("Parametres", "Param\303\250tres du microphone", nullptr));
        label->setText(QApplication::translate("Parametres", "Sensibilit\303\251 :", nullptr));
        label_5->setText(QApplication::translate("Parametres", "Seuils :", nullptr));
        pushButtonResetAudio->setText(QString());
        pushButtonReset->setText(QString());
        pushButtonResetEnregistrement->setText(QString());
        pushButtonRythme->setText(QString());
        pushButtonCheminAudio->setText(QString());
        pushButtonCheminPartition->setText(QString());
        pushButtonCheminEnregistrement->setText(QString());
        pushButtonCheminRythme->setText(QString());
        pushButtonAppliquerModifications->setText(QApplication::translate("Parametres", "Appliquer", nullptr));
        label_6->setText(QApplication::translate("Parametres", "50", nullptr));
        groupBoxCheminFichiers->setTitle(QApplication::translate("Parametres", "Chemin de stockage des fichiers :", nullptr));
        labelCheminAudio->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers audios :", nullptr));
        labelCheminPartition->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers partitions :", nullptr));
        labelCheminEnregistrement->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers enregistrements :", nullptr));
        labelCheminRythme->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers rythmes :", nullptr));
        groupBoxCheminFichiersParDefaut->setTitle(QApplication::translate("Parametres", "Chemin de stockage des fichiers par d\303\251faut:", nullptr));
        labelCheminAudioDefaut->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers audios :", nullptr));
        labelCheminPartitionDefaut->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers partitions :", nullptr));
        labelCheminEnregistrementDefaut->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers enregistrements :", nullptr));
        labelCheminRythmeDefaut->setText(QApplication::translate("Parametres", "Chemin de stockage des fichiers rythmes :", nullptr));
        pushButtonModifierParametreDefaut->setText(QApplication::translate("Parametres", "Modifier les param\303\250tres\n"
"par d\303\251faut", nullptr));
        label_7->setText(QApplication::translate("Parametres", "Format de nommage des fichiers : Nom de l'interpr\303\250te - Nom de l'oeuvre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parametres: public Ui_Parametres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRES_H
