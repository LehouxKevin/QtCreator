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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnexion;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBase;
    QComboBox *comboBoxBase;
    QLabel *labelTable;
    QComboBox *comboBoxTable;
    QLabel *labelEnregistrement;
    QPushButton *pushButtonInserer;
    QPushButton *pushButtonSupprimer;
    QTableView *tableViewAffichage;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(731, 476);
        actionConnexion = new QAction(MainWindow);
        actionConnexion->setObjectName(QStringLiteral("actionConnexion"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 711, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelBase = new QLabel(layoutWidget);
        labelBase->setObjectName(QStringLiteral("labelBase"));

        horizontalLayout->addWidget(labelBase);

        comboBoxBase = new QComboBox(layoutWidget);
        comboBoxBase->setObjectName(QStringLiteral("comboBoxBase"));

        horizontalLayout->addWidget(comboBoxBase);

        labelTable = new QLabel(layoutWidget);
        labelTable->setObjectName(QStringLiteral("labelTable"));

        horizontalLayout->addWidget(labelTable);

        comboBoxTable = new QComboBox(layoutWidget);
        comboBoxTable->setObjectName(QStringLiteral("comboBoxTable"));

        horizontalLayout->addWidget(comboBoxTable);

        labelEnregistrement = new QLabel(layoutWidget);
        labelEnregistrement->setObjectName(QStringLiteral("labelEnregistrement"));

        horizontalLayout->addWidget(labelEnregistrement);

        pushButtonInserer = new QPushButton(layoutWidget);
        pushButtonInserer->setObjectName(QStringLiteral("pushButtonInserer"));

        horizontalLayout->addWidget(pushButtonInserer);

        pushButtonSupprimer = new QPushButton(layoutWidget);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));

        horizontalLayout->addWidget(pushButtonSupprimer);


        verticalLayout->addLayout(horizontalLayout);

        tableViewAffichage = new QTableView(layoutWidget);
        tableViewAffichage->setObjectName(QStringLiteral("tableViewAffichage"));

        verticalLayout->addWidget(tableViewAffichage);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 731, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(28, 28));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionConnexion);
        menuMenu->addAction(actionQuitter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnexion->setText(QApplication::translate("MainWindow", "Connexion", nullptr));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        labelBase->setText(QApplication::translate("MainWindow", "Base :", nullptr));
        labelTable->setText(QApplication::translate("MainWindow", "Table :", nullptr));
        labelEnregistrement->setText(QApplication::translate("MainWindow", "Enregistrement :", nullptr));
        pushButtonInserer->setText(QApplication::translate("MainWindow", "Ins\303\251rer", nullptr));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Serveur MySQL", nullptr));
        mainToolBar->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
