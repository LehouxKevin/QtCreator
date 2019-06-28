/********************************************************************************
** Form generated from reading UI file 'lecteurpartitions.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURPARTITIONS_H
#define UI_LECTEURPARTITIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurPartitions
{
public:
    QFrame *frame;
    QScrollArea *scrollAreaPage2;
    QWidget *scrollAreaWidgetContents_3;
    QScrollArea *scrollAreaPage1;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButtonZoomPlus;
    QPushButton *pushButtonZoomMoins;
    QScrollArea *scrollAreaImageMiniature;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButtonCharger;
    QPushButton *pushButtonPageSuiv;
    QPushButton *pushButtonPagePrec;
    QPushButton *pushButtonPartitionPrecedente;
    QPushButton *pushButtonPartitionSuivante;
    QPushButton *pushButtonPresetMetronome;

    void setupUi(QWidget *LecteurPartitions)
    {
        if (LecteurPartitions->objectName().isEmpty())
            LecteurPartitions->setObjectName(QStringLiteral("LecteurPartitions"));
        LecteurPartitions->resize(1767, 1047);
        LecteurPartitions->setMinimumSize(QSize(0, 0));
        LecteurPartitions->setMaximumSize(QSize(10000, 10000));
        LecteurPartitions->setLayoutDirection(Qt::LeftToRight);
        frame = new QFrame(LecteurPartitions);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 1780, 1030));
        frame->setMinimumSize(QSize(600, 0));
        frame->setMaximumSize(QSize(10000, 10000));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollAreaPage2 = new QScrollArea(frame);
        scrollAreaPage2->setObjectName(QStringLiteral("scrollAreaPage2"));
        scrollAreaPage2->setGeometry(QRect(880, 10, 725, 1010));
        scrollAreaPage2->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        scrollAreaPage2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 723, 1008));
        scrollAreaWidgetContents_3->setLayoutDirection(Qt::LeftToRight);
        scrollAreaPage2->setWidget(scrollAreaWidgetContents_3);
        scrollAreaPage1 = new QScrollArea(frame);
        scrollAreaPage1->setObjectName(QStringLiteral("scrollAreaPage1"));
        scrollAreaPage1->setGeometry(QRect(150, 10, 725, 1010));
        scrollAreaPage1->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        scrollAreaPage1->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 723, 1008));
        scrollAreaWidgetContents->setLayoutDirection(Qt::LeftToRight);
        scrollAreaPage1->setWidget(scrollAreaWidgetContents);
        pushButtonZoomPlus = new QPushButton(frame);
        pushButtonZoomPlus->setObjectName(QStringLiteral("pushButtonZoomPlus"));
        pushButtonZoomPlus->setGeometry(QRect(20, 700, 120, 71));
        pushButtonZoomPlus->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonZoomPlus->setIcon(icon);
        pushButtonZoomPlus->setIconSize(QSize(70, 70));
        pushButtonZoomMoins = new QPushButton(frame);
        pushButtonZoomMoins->setObjectName(QStringLiteral("pushButtonZoomMoins"));
        pushButtonZoomMoins->setGeometry(QRect(20, 770, 120, 71));
        pushButtonZoomMoins->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonZoomMoins->setIcon(icon1);
        pushButtonZoomMoins->setIconSize(QSize(70, 70));
        scrollAreaImageMiniature = new QScrollArea(frame);
        scrollAreaImageMiniature->setObjectName(QStringLiteral("scrollAreaImageMiniature"));
        scrollAreaImageMiniature->setGeometry(QRect(1610, 10, 160, 1010));
        scrollAreaImageMiniature->setStyleSheet(QStringLiteral("background-color: rgb(195, 227, 231);"));
        scrollAreaImageMiniature->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 158, 1008));
        scrollAreaImageMiniature->setWidget(scrollAreaWidgetContents_2);
        pushButtonCharger = new QPushButton(frame);
        pushButtonCharger->setObjectName(QStringLiteral("pushButtonCharger"));
        pushButtonCharger->setGeometry(QRect(20, 10, 120, 120));
        pushButtonCharger->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/opened-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCharger->setIcon(icon2);
        pushButtonCharger->setIconSize(QSize(80, 80));
        pushButtonPageSuiv = new QPushButton(frame);
        pushButtonPageSuiv->setObjectName(QStringLiteral("pushButtonPageSuiv"));
        pushButtonPageSuiv->setGeometry(QRect(20, 270, 120, 120));
        pushButtonPageSuiv->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/below.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPageSuiv->setIcon(icon3);
        pushButtonPageSuiv->setIconSize(QSize(80, 80));
        pushButtonPagePrec = new QPushButton(frame);
        pushButtonPagePrec->setObjectName(QStringLiteral("pushButtonPagePrec"));
        pushButtonPagePrec->setGeometry(QRect(20, 150, 120, 120));
        pushButtonPagePrec->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPagePrec->setIcon(icon4);
        pushButtonPagePrec->setIconSize(QSize(80, 80));
        pushButtonPartitionPrecedente = new QPushButton(frame);
        pushButtonPartitionPrecedente->setObjectName(QStringLiteral("pushButtonPartitionPrecedente"));
        pushButtonPartitionPrecedente->setGeometry(QRect(20, 410, 120, 120));
        pushButtonPartitionPrecedente->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/slide-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPartitionPrecedente->setIcon(icon5);
        pushButtonPartitionPrecedente->setIconSize(QSize(80, 80));
        pushButtonPartitionSuivante = new QPushButton(frame);
        pushButtonPartitionSuivante->setObjectName(QStringLiteral("pushButtonPartitionSuivante"));
        pushButtonPartitionSuivante->setGeometry(QRect(20, 530, 120, 120));
        pushButtonPartitionSuivante->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/slide-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPartitionSuivante->setIcon(icon6);
        pushButtonPartitionSuivante->setIconSize(QSize(80, 80));
        pushButtonPresetMetronome = new QPushButton(frame);
        pushButtonPresetMetronome->setObjectName(QStringLiteral("pushButtonPresetMetronome"));
        pushButtonPresetMetronome->setGeometry(QRect(19, 890, 121, 111));
        pushButtonPresetMetronome->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/metronome3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPresetMetronome->setIcon(icon7);
        pushButtonPresetMetronome->setIconSize(QSize(80, 80));

        retranslateUi(LecteurPartitions);

        QMetaObject::connectSlotsByName(LecteurPartitions);
    } // setupUi

    void retranslateUi(QWidget *LecteurPartitions)
    {
        LecteurPartitions->setWindowTitle(QApplication::translate("LecteurPartitions", "Form", nullptr));
        pushButtonZoomPlus->setText(QString());
        pushButtonZoomMoins->setText(QString());
        pushButtonCharger->setText(QString());
        pushButtonPageSuiv->setText(QString());
        pushButtonPagePrec->setText(QString());
        pushButtonPartitionPrecedente->setText(QString());
        pushButtonPartitionSuivante->setText(QString());
        pushButtonPresetMetronome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LecteurPartitions: public Ui_LecteurPartitions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURPARTITIONS_H
