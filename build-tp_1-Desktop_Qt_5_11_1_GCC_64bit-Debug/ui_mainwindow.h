/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionC;
    QAction *actionJAVA;
    QAction *actionCpp;
    QAction *actionPHP;
    QAction *actionJavascript;
    QWidget *centralWidget;
    QGroupBox *groupBoxOSRadioGroup;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonLion;
    QRadioButton *radioButtonLinux;
    QGroupBox *groupBoxOSCheckBoxGroup;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxLion;
    QCheckBox *checkBoxLinux;
    QPushButton *pushButtonQuitter;
    QLabel *label_evenements;
    QTextBrowser *textBrowserAffichage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelChoix;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_OS;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonLion;
    QMenuBar *menuBar;
    QMenu *menuLangages;
    QMenu *menuWeb;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 554);
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QStringLiteral("actionC"));
        actionJAVA = new QAction(MainWindow);
        actionJAVA->setObjectName(QStringLiteral("actionJAVA"));
        actionCpp = new QAction(MainWindow);
        actionCpp->setObjectName(QStringLiteral("actionCpp"));
        actionPHP = new QAction(MainWindow);
        actionPHP->setObjectName(QStringLiteral("actionPHP"));
        actionJavascript = new QAction(MainWindow);
        actionJavascript->setObjectName(QStringLiteral("actionJavascript"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBoxOSRadioGroup = new QGroupBox(centralWidget);
        groupBoxOSRadioGroup->setObjectName(QStringLiteral("groupBoxOSRadioGroup"));
        groupBoxOSRadioGroup->setGeometry(QRect(50, 180, 281, 67));
        horizontalLayout_3 = new QHBoxLayout(groupBoxOSRadioGroup);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButtonWindows = new QRadioButton(groupBoxOSRadioGroup);
        radioButtonWindows->setObjectName(QStringLiteral("radioButtonWindows"));

        horizontalLayout_3->addWidget(radioButtonWindows);

        radioButtonLion = new QRadioButton(groupBoxOSRadioGroup);
        radioButtonLion->setObjectName(QStringLiteral("radioButtonLion"));

        horizontalLayout_3->addWidget(radioButtonLion);

        radioButtonLinux = new QRadioButton(groupBoxOSRadioGroup);
        radioButtonLinux->setObjectName(QStringLiteral("radioButtonLinux"));

        horizontalLayout_3->addWidget(radioButtonLinux);

        groupBoxOSCheckBoxGroup = new QGroupBox(centralWidget);
        groupBoxOSCheckBoxGroup->setObjectName(QStringLiteral("groupBoxOSCheckBoxGroup"));
        groupBoxOSCheckBoxGroup->setGeometry(QRect(50, 110, 282, 67));
        horizontalLayout_4 = new QHBoxLayout(groupBoxOSCheckBoxGroup);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBoxWindows = new QCheckBox(groupBoxOSCheckBoxGroup);
        checkBoxWindows->setObjectName(QStringLiteral("checkBoxWindows"));

        horizontalLayout_4->addWidget(checkBoxWindows);

        checkBoxLion = new QCheckBox(groupBoxOSCheckBoxGroup);
        checkBoxLion->setObjectName(QStringLiteral("checkBoxLion"));

        horizontalLayout_4->addWidget(checkBoxLion);

        checkBoxLinux = new QCheckBox(groupBoxOSCheckBoxGroup);
        checkBoxLinux->setObjectName(QStringLiteral("checkBoxLinux"));

        horizontalLayout_4->addWidget(checkBoxLinux);

        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(290, 310, 80, 25));
        pushButtonQuitter->setStyleSheet(QStringLiteral("background-color: rgb(164, 0, 0);"));
        label_evenements = new QLabel(centralWidget);
        label_evenements->setObjectName(QStringLiteral("label_evenements"));
        label_evenements->setGeometry(QRect(30, 320, 81, 17));
        textBrowserAffichage = new QTextBrowser(centralWidget);
        textBrowserAffichage->setObjectName(QStringLiteral("textBrowserAffichage"));
        textBrowserAffichage->setGeometry(QRect(30, 350, 341, 131));
        textBrowserAffichage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        textBrowserAffichage->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowserAffichage->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 281, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCode = new QLabel(layoutWidget);
        labelCode->setObjectName(QStringLiteral("labelCode"));

        horizontalLayout->addWidget(labelCode);

        lineEditCode = new QLineEdit(layoutWidget);
        lineEditCode->setObjectName(QStringLiteral("lineEditCode"));
        lineEditCode->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        horizontalLayout->addWidget(lineEditCode);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 80, 169, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelChoix = new QLabel(layoutWidget1);
        labelChoix->setObjectName(QStringLiteral("labelChoix"));

        horizontalLayout_2->addWidget(labelChoix);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBox_OS = new QComboBox(layoutWidget1);
        comboBox_OS->addItem(QString());
        comboBox_OS->addItem(QString());
        comboBox_OS->addItem(QString());
        comboBox_OS->setObjectName(QStringLiteral("comboBox_OS"));

        horizontalLayout_2->addWidget(comboBox_OS);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(70, 270, 254, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonLinux = new QPushButton(layoutWidget2);
        pushButtonLinux->setObjectName(QStringLiteral("pushButtonLinux"));

        horizontalLayout_5->addWidget(pushButtonLinux);

        pushButtonWindows = new QPushButton(layoutWidget2);
        pushButtonWindows->setObjectName(QStringLiteral("pushButtonWindows"));

        horizontalLayout_5->addWidget(pushButtonWindows);

        pushButtonLion = new QPushButton(layoutWidget2);
        pushButtonLion->setObjectName(QStringLiteral("pushButtonLion"));

        horizontalLayout_5->addWidget(pushButtonLion);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuLangages = new QMenu(menuBar);
        menuLangages->setObjectName(QStringLiteral("menuLangages"));
        menuWeb = new QMenu(menuLangages);
        menuWeb->setObjectName(QStringLiteral("menuWeb"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLangages->menuAction());
        menuLangages->addAction(actionC);
        menuLangages->addSeparator();
        menuLangages->addAction(actionJAVA);
        menuLangages->addAction(actionCpp);
        menuLangages->addSeparator();
        menuLangages->addAction(menuWeb->menuAction());
        menuWeb->addAction(actionPHP);
        menuWeb->addAction(actionJavascript);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionJAVA->setText(QApplication::translate("MainWindow", "JAVA", nullptr));
        actionCpp->setText(QApplication::translate("MainWindow", "C++", nullptr));
        actionPHP->setText(QApplication::translate("MainWindow", "PHP", nullptr));
        actionJavascript->setText(QApplication::translate("MainWindow", "Javascript", nullptr));
        groupBoxOSRadioGroup->setTitle(QString());
        radioButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        radioButtonLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        groupBoxOSCheckBoxGroup->setTitle(QString());
        checkBoxWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        checkBoxLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        checkBoxLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        label_evenements->setText(QApplication::translate("MainWindow", "\303\251v\303\250nements", nullptr));
        labelCode->setText(QApplication::translate("MainWindow", "Entrez votre code : ", nullptr));
        labelChoix->setText(QApplication::translate("MainWindow", "Choix", nullptr));
        comboBox_OS->setItemText(0, QApplication::translate("MainWindow", "Linux", nullptr));
        comboBox_OS->setItemText(1, QApplication::translate("MainWindow", "Windows", nullptr));
        comboBox_OS->setItemText(2, QApplication::translate("MainWindow", "OS X Lion", nullptr));

        pushButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        pushButtonLion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        menuLangages->setTitle(QApplication::translate("MainWindow", "Langages", nullptr));
        menuWeb->setTitle(QApplication::translate("MainWindow", "Web", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
