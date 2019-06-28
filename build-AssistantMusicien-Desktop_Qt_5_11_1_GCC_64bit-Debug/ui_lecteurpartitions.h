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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurPartitions
{
public:
    QPushButton *pushButtonCharger;
    QPushButton *pushButtonFermer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonPagePrec;
    QPushButton *pushButtonMonter;
    QPushButton *pushButtonDescendre;
    QPushButton *pushButtonPageSuiv;

    void setupUi(QWidget *LecteurPartitions)
    {
        if (LecteurPartitions->objectName().isEmpty())
            LecteurPartitions->setObjectName(QStringLiteral("LecteurPartitions"));
        LecteurPartitions->resize(730, 636);
        pushButtonCharger = new QPushButton(LecteurPartitions);
        pushButtonCharger->setObjectName(QStringLiteral("pushButtonCharger"));
        pushButtonCharger->setGeometry(QRect(10, 10, 100, 30));
        pushButtonFermer = new QPushButton(LecteurPartitions);
        pushButtonFermer->setObjectName(QStringLiteral("pushButtonFermer"));
        pushButtonFermer->setGeometry(QRect(10, 50, 100, 30));
        scrollArea = new QScrollArea(LecteurPartitions);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(120, 0, 1241, 711));
        scrollArea->setStyleSheet(QStringLiteral("background-color: transparent;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1239, 709));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButtonPagePrec = new QPushButton(LecteurPartitions);
        pushButtonPagePrec->setObjectName(QStringLiteral("pushButtonPagePrec"));
        pushButtonPagePrec->setGeometry(QRect(10, 100, 80, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/pagePrec.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPagePrec->setIcon(icon);
        pushButtonPagePrec->setIconSize(QSize(80, 80));
        pushButtonPagePrec->setFlat(true);
        pushButtonMonter = new QPushButton(LecteurPartitions);
        pushButtonMonter->setObjectName(QStringLiteral("pushButtonMonter"));
        pushButtonMonter->setGeometry(QRect(10, 200, 80, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/monter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMonter->setIcon(icon1);
        pushButtonMonter->setIconSize(QSize(80, 80));
        pushButtonMonter->setFlat(true);
        pushButtonDescendre = new QPushButton(LecteurPartitions);
        pushButtonDescendre->setObjectName(QStringLiteral("pushButtonDescendre"));
        pushButtonDescendre->setGeometry(QRect(10, 300, 80, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Descendre.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDescendre->setIcon(icon2);
        pushButtonDescendre->setIconSize(QSize(80, 80));
        pushButtonDescendre->setFlat(true);
        pushButtonPageSuiv = new QPushButton(LecteurPartitions);
        pushButtonPageSuiv->setObjectName(QStringLiteral("pushButtonPageSuiv"));
        pushButtonPageSuiv->setGeometry(QRect(10, 400, 80, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/pageSuiv.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPageSuiv->setIcon(icon3);
        pushButtonPageSuiv->setIconSize(QSize(80, 80));
        pushButtonPageSuiv->setFlat(true);

        retranslateUi(LecteurPartitions);

        QMetaObject::connectSlotsByName(LecteurPartitions);
    } // setupUi

    void retranslateUi(QWidget *LecteurPartitions)
    {
        LecteurPartitions->setWindowTitle(QApplication::translate("LecteurPartitions", "Form", nullptr));
        pushButtonCharger->setText(QApplication::translate("LecteurPartitions", "Charger", nullptr));
        pushButtonFermer->setText(QApplication::translate("LecteurPartitions", "Fermer", nullptr));
        pushButtonPagePrec->setText(QString());
        pushButtonMonter->setText(QString());
        pushButtonDescendre->setText(QString());
        pushButtonPageSuiv->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LecteurPartitions: public Ui_LecteurPartitions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURPARTITIONS_H
