/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonConnexion;
    QLabel *labelEtat;
    QLabel *labelMessage;
    QLineEdit *lineEditMessage;
    QGroupBox *groupBoxOperations;
    QPushButton *pushButtonNumeroCompte;
    QLineEdit *lineEditNumeroCompte;
    QLineEdit *lineEditMontant;
    QLabel *labelMontant;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QPushButton *pushButtonEnvoi;
    QListWidget *listWidgetEtat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(625, 475);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelAdresse = new QLabel(centralWidget);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));
        labelAdresse->setGeometry(QRect(20, 30, 54, 17));
        lineEditAdresse = new QLineEdit(centralWidget);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));
        lineEditAdresse->setGeometry(QRect(110, 30, 113, 25));
        labelPort = new QLabel(centralWidget);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setGeometry(QRect(20, 80, 54, 17));
        lineEditPort = new QLineEdit(centralWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(110, 70, 113, 25));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(120, 120, 80, 25));
        labelEtat = new QLabel(centralWidget);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));
        labelEtat->setGeometry(QRect(280, 20, 131, 17));
        labelMessage = new QLabel(centralWidget);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setGeometry(QRect(30, 180, 141, 17));
        lineEditMessage = new QLineEdit(centralWidget);
        lineEditMessage->setObjectName(QStringLiteral("lineEditMessage"));
        lineEditMessage->setGeometry(QRect(30, 200, 561, 25));
        lineEditMessage->setReadOnly(true);
        groupBoxOperations = new QGroupBox(centralWidget);
        groupBoxOperations->setObjectName(QStringLiteral("groupBoxOperations"));
        groupBoxOperations->setGeometry(QRect(30, 240, 561, 171));
        pushButtonNumeroCompte = new QPushButton(groupBoxOperations);
        pushButtonNumeroCompte->setObjectName(QStringLiteral("pushButtonNumeroCompte"));
        pushButtonNumeroCompte->setGeometry(QRect(20, 40, 131, 25));
        lineEditNumeroCompte = new QLineEdit(groupBoxOperations);
        lineEditNumeroCompte->setObjectName(QStringLiteral("lineEditNumeroCompte"));
        lineEditNumeroCompte->setGeometry(QRect(160, 40, 141, 25));
        lineEditMontant = new QLineEdit(groupBoxOperations);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));
        lineEditMontant->setGeometry(QRect(160, 70, 141, 25));
        labelMontant = new QLabel(groupBoxOperations);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));
        labelMontant->setGeometry(QRect(30, 80, 54, 17));
        radioButtonSolde = new QRadioButton(groupBoxOperations);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));
        radioButtonSolde->setGeometry(QRect(430, 40, 96, 23));
        radioButtonRetrait = new QRadioButton(groupBoxOperations);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));
        radioButtonRetrait->setGeometry(QRect(430, 70, 96, 23));
        radioButtonDepot = new QRadioButton(groupBoxOperations);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));
        radioButtonDepot->setGeometry(QRect(430, 100, 96, 23));
        pushButtonEnvoi = new QPushButton(groupBoxOperations);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(410, 130, 80, 25));
        listWidgetEtat = new QListWidget(centralWidget);
        listWidgetEtat->setObjectName(QStringLiteral("listWidgetEtat"));
        listWidgetEtat->setGeometry(QRect(280, 40, 311, 131));
        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port :", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelEtat->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion :", nullptr));
        labelMessage->setText(QApplication::translate("DAB_MainWindow", "Message de la banque : ", nullptr));
        groupBoxOperations->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque :", nullptr));
        pushButtonNumeroCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251p\303\264t", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
