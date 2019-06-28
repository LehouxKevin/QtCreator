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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestBarquette
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxCapteur1;
    QCheckBox *checkBoxCapteur2;
    QCheckBox *checkBoxCapteur3;
    QCheckBox *checkBoxCapteur4;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonNouvelleBarquette;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCodeProduit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditCodeProduit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumEjecteur;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditNumEjecteur;
    QPushButton *pushButtonDebutProduction;
    QPushButton *pushButtonArretProduction;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestBarquette)
    {
        if (TestBarquette->objectName().isEmpty())
            TestBarquette->setObjectName(QStringLiteral("TestBarquette"));
        TestBarquette->resize(526, 294);
        centralWidget = new QWidget(TestBarquette);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 111, 161));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 83, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxCapteur1 = new QCheckBox(layoutWidget);
        checkBoxCapteur1->setObjectName(QStringLiteral("checkBoxCapteur1"));

        verticalLayout->addWidget(checkBoxCapteur1);

        checkBoxCapteur2 = new QCheckBox(layoutWidget);
        checkBoxCapteur2->setObjectName(QStringLiteral("checkBoxCapteur2"));

        verticalLayout->addWidget(checkBoxCapteur2);

        checkBoxCapteur3 = new QCheckBox(layoutWidget);
        checkBoxCapteur3->setObjectName(QStringLiteral("checkBoxCapteur3"));

        verticalLayout->addWidget(checkBoxCapteur3);

        checkBoxCapteur4 = new QCheckBox(layoutWidget);
        checkBoxCapteur4->setObjectName(QStringLiteral("checkBoxCapteur4"));

        verticalLayout->addWidget(checkBoxCapteur4);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(160, 10, 311, 161));
        pushButtonNouvelleBarquette = new QPushButton(groupBox_2);
        pushButtonNouvelleBarquette->setObjectName(QStringLiteral("pushButtonNouvelleBarquette"));
        pushButtonNouvelleBarquette->setGeometry(QRect(80, 120, 151, 25));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 80, 271, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCodeProduit = new QLabel(layoutWidget1);
        labelCodeProduit->setObjectName(QStringLiteral("labelCodeProduit"));

        horizontalLayout->addWidget(labelCodeProduit);

        horizontalSpacer = new QSpacerItem(58, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditCodeProduit = new QLineEdit(layoutWidget1);
        lineEditCodeProduit->setObjectName(QStringLiteral("lineEditCodeProduit"));

        horizontalLayout->addWidget(lineEditCodeProduit);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 271, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNumEjecteur = new QLabel(layoutWidget2);
        labelNumEjecteur->setObjectName(QStringLiteral("labelNumEjecteur"));

        horizontalLayout_2->addWidget(labelNumEjecteur);

        horizontalSpacer_2 = new QSpacerItem(38, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditNumEjecteur = new QLineEdit(layoutWidget2);
        lineEditNumEjecteur->setObjectName(QStringLiteral("lineEditNumEjecteur"));

        horizontalLayout_2->addWidget(lineEditNumEjecteur);

        pushButtonDebutProduction = new QPushButton(centralWidget);
        pushButtonDebutProduction->setObjectName(QStringLiteral("pushButtonDebutProduction"));
        pushButtonDebutProduction->setGeometry(QRect(50, 200, 151, 25));
        pushButtonArretProduction = new QPushButton(centralWidget);
        pushButtonArretProduction->setObjectName(QStringLiteral("pushButtonArretProduction"));
        pushButtonArretProduction->setGeometry(QRect(210, 200, 151, 25));
        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(440, 200, 80, 25));
        TestBarquette->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestBarquette);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 526, 22));
        TestBarquette->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestBarquette);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestBarquette->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestBarquette);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestBarquette->setStatusBar(statusBar);

        retranslateUi(TestBarquette);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), TestBarquette, SLOT(close()));

        QMetaObject::connectSlotsByName(TestBarquette);
    } // setupUi

    void retranslateUi(QMainWindow *TestBarquette)
    {
        TestBarquette->setWindowTitle(QApplication::translate("TestBarquette", "TestBarquette", nullptr));
        groupBox->setTitle(QApplication::translate("TestBarquette", "Etat des capteurs", nullptr));
        checkBoxCapteur1->setText(QApplication::translate("TestBarquette", "Capteur 1", nullptr));
        checkBoxCapteur2->setText(QApplication::translate("TestBarquette", "Capteur 2", nullptr));
        checkBoxCapteur3->setText(QApplication::translate("TestBarquette", "Capteur 3", nullptr));
        checkBoxCapteur4->setText(QApplication::translate("TestBarquette", "Capteur 4", nullptr));
        groupBox_2->setTitle(QApplication::translate("TestBarquette", "GroupBox", nullptr));
        pushButtonNouvelleBarquette->setText(QApplication::translate("TestBarquette", "Nouvelle Barquette", nullptr));
        labelCodeProduit->setText(QApplication::translate("TestBarquette", "Code produit", nullptr));
        labelNumEjecteur->setText(QApplication::translate("TestBarquette", "Num\303\251ro d'\303\251jecteur", nullptr));
        pushButtonDebutProduction->setText(QApplication::translate("TestBarquette", "D\303\251but de Production", nullptr));
        pushButtonArretProduction->setText(QApplication::translate("TestBarquette", "Arr\303\252t de Production", nullptr));
        pushButtonQuitter->setText(QApplication::translate("TestBarquette", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestBarquette: public Ui_TestBarquette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIEOPERATIVE_H
