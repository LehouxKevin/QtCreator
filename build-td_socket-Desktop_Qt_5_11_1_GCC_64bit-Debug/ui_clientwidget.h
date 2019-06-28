/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QLabel *labelConnexion;
    QFrame *frameConnexion;
    QLabel *labelIP;
    QLineEdit *lineEditIP;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonConnexion;
    QTextEdit *textEditEtat;
    QLabel *labelEtat;
    QLabel *labelInfoClients;
    QFrame *frameInfoClients;
    QPushButton *pushButtonNomOrdi;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonOS;
    QLineEdit *lineEditNomOrdi;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditOS;
    QPushButton *pushButtonArchitecture;
    QLineEdit *lineEditArchitecture;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(563, 324);
        labelConnexion = new QLabel(ClientWidget);
        labelConnexion->setObjectName(QStringLiteral("labelConnexion"));
        labelConnexion->setGeometry(QRect(10, 10, 291, 17));
        frameConnexion = new QFrame(ClientWidget);
        frameConnexion->setObjectName(QStringLiteral("frameConnexion"));
        frameConnexion->setGeometry(QRect(10, 30, 541, 101));
        frameConnexion->setFrameShape(QFrame::StyledPanel);
        frameConnexion->setFrameShadow(QFrame::Raised);
        labelIP = new QLabel(frameConnexion);
        labelIP->setObjectName(QStringLiteral("labelIP"));
        labelIP->setGeometry(QRect(10, 10, 131, 17));
        lineEditIP = new QLineEdit(frameConnexion);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(140, 10, 141, 25));
        labelPort = new QLabel(frameConnexion);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setGeometry(QRect(10, 40, 161, 17));
        lineEditPort = new QLineEdit(frameConnexion);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(170, 40, 111, 25));
        pushButtonQuitter = new QPushButton(frameConnexion);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 70, 80, 25));
        pushButtonConnexion = new QPushButton(frameConnexion);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(200, 70, 80, 25));
        textEditEtat = new QTextEdit(frameConnexion);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));
        textEditEtat->setGeometry(QRect(290, 30, 241, 61));
        textEditEtat->setReadOnly(true);
        labelEtat = new QLabel(frameConnexion);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));
        labelEtat->setGeometry(QRect(290, 10, 151, 17));
        labelInfoClients = new QLabel(ClientWidget);
        labelInfoClients->setObjectName(QStringLiteral("labelInfoClients"));
        labelInfoClients->setGeometry(QRect(10, 140, 141, 17));
        frameInfoClients = new QFrame(ClientWidget);
        frameInfoClients->setObjectName(QStringLiteral("frameInfoClients"));
        frameInfoClients->setGeometry(QRect(10, 160, 541, 141));
        frameInfoClients->setFrameShape(QFrame::StyledPanel);
        frameInfoClients->setFrameShadow(QFrame::Raised);
        pushButtonNomOrdi = new QPushButton(frameInfoClients);
        pushButtonNomOrdi->setObjectName(QStringLiteral("pushButtonNomOrdi"));
        pushButtonNomOrdi->setGeometry(QRect(10, 10, 171, 25));
        pushButtonNomUtilisateur = new QPushButton(frameInfoClients);
        pushButtonNomUtilisateur->setObjectName(QStringLiteral("pushButtonNomUtilisateur"));
        pushButtonNomUtilisateur->setGeometry(QRect(10, 40, 171, 25));
        pushButtonOS = new QPushButton(frameInfoClients);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));
        pushButtonOS->setGeometry(QRect(10, 100, 171, 25));
        lineEditNomOrdi = new QLineEdit(frameInfoClients);
        lineEditNomOrdi->setObjectName(QStringLiteral("lineEditNomOrdi"));
        lineEditNomOrdi->setEnabled(true);
        lineEditNomOrdi->setGeometry(QRect(190, 10, 341, 25));
        lineEditNomOrdi->setReadOnly(true);
        lineEditNomUtilisateur = new QLineEdit(frameInfoClients);
        lineEditNomUtilisateur->setObjectName(QStringLiteral("lineEditNomUtilisateur"));
        lineEditNomUtilisateur->setEnabled(true);
        lineEditNomUtilisateur->setGeometry(QRect(190, 40, 341, 25));
        lineEditNomUtilisateur->setReadOnly(true);
        lineEditOS = new QLineEdit(frameInfoClients);
        lineEditOS->setObjectName(QStringLiteral("lineEditOS"));
        lineEditOS->setEnabled(true);
        lineEditOS->setGeometry(QRect(190, 100, 341, 25));
        lineEditOS->setReadOnly(true);
        pushButtonArchitecture = new QPushButton(frameInfoClients);
        pushButtonArchitecture->setObjectName(QStringLiteral("pushButtonArchitecture"));
        pushButtonArchitecture->setGeometry(QRect(10, 70, 171, 25));
        lineEditArchitecture = new QLineEdit(frameInfoClients);
        lineEditArchitecture->setObjectName(QStringLiteral("lineEditArchitecture"));
        lineEditArchitecture->setGeometry(QRect(190, 70, 341, 25));
        lineEditArchitecture->setReadOnly(true);

        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        labelConnexion->setText(QApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelIP->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur", nullptr));
        labelPort->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        labelEtat->setText(QApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        labelInfoClients->setText(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomOrdi->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonOS->setText(QApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
        pushButtonArchitecture->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
