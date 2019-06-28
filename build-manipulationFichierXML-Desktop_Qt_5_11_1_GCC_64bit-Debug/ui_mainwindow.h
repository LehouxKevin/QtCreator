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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir_Fichier;
    QAction *actionEnregistrer_Fichier;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QMenuBar *menuBarOption;
    QMenu *menuOuvrir_Fichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(381, 364);
        actionOuvrir_Fichier = new QAction(MainWindow);
        actionOuvrir_Fichier->setObjectName(QStringLiteral("actionOuvrir_Fichier"));
        actionEnregistrer_Fichier = new QAction(MainWindow);
        actionEnregistrer_Fichier->setObjectName(QStringLiteral("actionEnregistrer_Fichier"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBarOption = new QMenuBar(MainWindow);
        menuBarOption->setObjectName(QStringLiteral("menuBarOption"));
        menuBarOption->setGeometry(QRect(0, 0, 381, 22));
        menuOuvrir_Fichier = new QMenu(menuBarOption);
        menuOuvrir_Fichier->setObjectName(QStringLiteral("menuOuvrir_Fichier"));
        MainWindow->setMenuBar(menuBarOption);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBarOption->addAction(menuOuvrir_Fichier->menuAction());
        menuOuvrir_Fichier->addAction(actionOuvrir_Fichier);
        menuOuvrir_Fichier->addAction(actionEnregistrer_Fichier);
        menuOuvrir_Fichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOuvrir_Fichier->setText(QApplication::translate("MainWindow", "Ouvrir Fichier", nullptr));
        actionEnregistrer_Fichier->setText(QApplication::translate("MainWindow", "Enregistrer Fichier", nullptr));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        menuOuvrir_Fichier->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
