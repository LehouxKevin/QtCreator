/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QComboBox *comboBoxListePort;
    QPushButton *pushButtonOuvrirPort;
    QLabel *labelEtat;
    QLabel *labelTexteRecu;
    QTextBrowser *textBrowserTexteRecu;
    QPushButton *pushButtonQuitter;
    QLabel *labelTexteAenvoyer;
    QPushButton *pushButtonEnvoyer;
    QGroupBox *groupBoxConfiguration;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutVitesse;
    QLabel *labelVitesse;
    QComboBox *comboBoxVitesseTransmission;
    QHBoxLayout *horizontalLayoutNbBitsDeDonnees;
    QLabel *labelNbBitsDeDonnees;
    QComboBox *comboBoxNbBitsDonnees;
    QHBoxLayout *horizontalLayoutParite;
    QLabel *labelParite;
    QComboBox *comboBoxParite;
    QHBoxLayout *horizontalLayoutNbBitsStop;
    QLabel *labelNbBitsStop;
    QComboBox *comboBoxNbBitsStop;
    QHBoxLayout *horizontalLayoutControleDeFlux;
    QLabel *labelControleDeFlux;
    QComboBox *comboBoxControleDeFlux;
    QTextEdit *textEditTextAenvoyer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(603, 541);
        comboBoxListePort = new QComboBox(Widget);
        comboBoxListePort->setObjectName(QStringLiteral("comboBoxListePort"));
        comboBoxListePort->setGeometry(QRect(10, 20, 201, 25));
        pushButtonOuvrirPort = new QPushButton(Widget);
        pushButtonOuvrirPort->setObjectName(QStringLiteral("pushButtonOuvrirPort"));
        pushButtonOuvrirPort->setGeometry(QRect(230, 20, 191, 25));
        labelEtat = new QLabel(Widget);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));
        labelEtat->setGeometry(QRect(440, 20, 54, 17));
        labelTexteRecu = new QLabel(Widget);
        labelTexteRecu->setObjectName(QStringLiteral("labelTexteRecu"));
        labelTexteRecu->setGeometry(QRect(420, 100, 81, 21));
        textBrowserTexteRecu = new QTextBrowser(Widget);
        textBrowserTexteRecu->setObjectName(QStringLiteral("textBrowserTexteRecu"));
        textBrowserTexteRecu->setGeometry(QRect(420, 130, 161, 371));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 510, 571, 25));
        labelTexteAenvoyer = new QLabel(Widget);
        labelTexteAenvoyer->setObjectName(QStringLiteral("labelTexteAenvoyer"));
        labelTexteAenvoyer->setGeometry(QRect(240, 100, 89, 25));
        pushButtonEnvoyer = new QPushButton(Widget);
        pushButtonEnvoyer->setObjectName(QStringLiteral("pushButtonEnvoyer"));
        pushButtonEnvoyer->setGeometry(QRect(290, 470, 80, 25));
        groupBoxConfiguration = new QGroupBox(Widget);
        groupBoxConfiguration->setObjectName(QStringLiteral("groupBoxConfiguration"));
        groupBoxConfiguration->setGeometry(QRect(20, 110, 191, 211));
        layoutWidget = new QWidget(groupBoxConfiguration);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 173, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutVitesse = new QHBoxLayout();
        horizontalLayoutVitesse->setSpacing(6);
        horizontalLayoutVitesse->setObjectName(QStringLiteral("horizontalLayoutVitesse"));
        labelVitesse = new QLabel(layoutWidget);
        labelVitesse->setObjectName(QStringLiteral("labelVitesse"));

        horizontalLayoutVitesse->addWidget(labelVitesse);

        comboBoxVitesseTransmission = new QComboBox(layoutWidget);
        comboBoxVitesseTransmission->setObjectName(QStringLiteral("comboBoxVitesseTransmission"));

        horizontalLayoutVitesse->addWidget(comboBoxVitesseTransmission);


        verticalLayout->addLayout(horizontalLayoutVitesse);

        horizontalLayoutNbBitsDeDonnees = new QHBoxLayout();
        horizontalLayoutNbBitsDeDonnees->setSpacing(6);
        horizontalLayoutNbBitsDeDonnees->setObjectName(QStringLiteral("horizontalLayoutNbBitsDeDonnees"));
        labelNbBitsDeDonnees = new QLabel(layoutWidget);
        labelNbBitsDeDonnees->setObjectName(QStringLiteral("labelNbBitsDeDonnees"));

        horizontalLayoutNbBitsDeDonnees->addWidget(labelNbBitsDeDonnees);

        comboBoxNbBitsDonnees = new QComboBox(layoutWidget);
        comboBoxNbBitsDonnees->setObjectName(QStringLiteral("comboBoxNbBitsDonnees"));

        horizontalLayoutNbBitsDeDonnees->addWidget(comboBoxNbBitsDonnees);


        verticalLayout->addLayout(horizontalLayoutNbBitsDeDonnees);

        horizontalLayoutParite = new QHBoxLayout();
        horizontalLayoutParite->setSpacing(6);
        horizontalLayoutParite->setObjectName(QStringLiteral("horizontalLayoutParite"));
        labelParite = new QLabel(layoutWidget);
        labelParite->setObjectName(QStringLiteral("labelParite"));

        horizontalLayoutParite->addWidget(labelParite);

        comboBoxParite = new QComboBox(layoutWidget);
        comboBoxParite->setObjectName(QStringLiteral("comboBoxParite"));

        horizontalLayoutParite->addWidget(comboBoxParite);


        verticalLayout->addLayout(horizontalLayoutParite);

        horizontalLayoutNbBitsStop = new QHBoxLayout();
        horizontalLayoutNbBitsStop->setSpacing(6);
        horizontalLayoutNbBitsStop->setObjectName(QStringLiteral("horizontalLayoutNbBitsStop"));
        labelNbBitsStop = new QLabel(layoutWidget);
        labelNbBitsStop->setObjectName(QStringLiteral("labelNbBitsStop"));

        horizontalLayoutNbBitsStop->addWidget(labelNbBitsStop);

        comboBoxNbBitsStop = new QComboBox(layoutWidget);
        comboBoxNbBitsStop->setObjectName(QStringLiteral("comboBoxNbBitsStop"));

        horizontalLayoutNbBitsStop->addWidget(comboBoxNbBitsStop);


        verticalLayout->addLayout(horizontalLayoutNbBitsStop);

        horizontalLayoutControleDeFlux = new QHBoxLayout();
        horizontalLayoutControleDeFlux->setSpacing(6);
        horizontalLayoutControleDeFlux->setObjectName(QStringLiteral("horizontalLayoutControleDeFlux"));
        labelControleDeFlux = new QLabel(layoutWidget);
        labelControleDeFlux->setObjectName(QStringLiteral("labelControleDeFlux"));

        horizontalLayoutControleDeFlux->addWidget(labelControleDeFlux);

        comboBoxControleDeFlux = new QComboBox(layoutWidget);
        comboBoxControleDeFlux->setObjectName(QStringLiteral("comboBoxControleDeFlux"));

        horizontalLayoutControleDeFlux->addWidget(comboBoxControleDeFlux);


        verticalLayout->addLayout(horizontalLayoutControleDeFlux);

        textEditTextAenvoyer = new QTextEdit(Widget);
        textEditTextAenvoyer->setObjectName(QStringLiteral("textEditTextAenvoyer"));
        textEditTextAenvoyer->setGeometry(QRect(240, 130, 171, 331));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonOuvrirPort->setText(QApplication::translate("Widget", "Ouvrir le port s\303\251rie", nullptr));
        labelEtat->setText(QApplication::translate("Widget", "etat", nullptr));
        labelTexteRecu->setText(QApplication::translate("Widget", "Texte re\303\247u", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        labelTexteAenvoyer->setText(QApplication::translate("Widget", "Texte a envoyer", nullptr));
        pushButtonEnvoyer->setText(QApplication::translate("Widget", "Envoyer", nullptr));
        groupBoxConfiguration->setTitle(QApplication::translate("Widget", "Configuration", nullptr));
        labelVitesse->setText(QApplication::translate("Widget", "Vitesse :", nullptr));
        labelNbBitsDeDonnees->setText(QApplication::translate("Widget", "Bits de donn\303\251es", nullptr));
        labelParite->setText(QApplication::translate("Widget", "Parit\303\251", nullptr));
        labelNbBitsStop->setText(QApplication::translate("Widget", "Bits de stop", nullptr));
        labelControleDeFlux->setText(QApplication::translate("Widget", "Contr\303\264le de flux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
