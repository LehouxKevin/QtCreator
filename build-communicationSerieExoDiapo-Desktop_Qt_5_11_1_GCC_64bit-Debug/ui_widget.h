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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTexteAenvoyer;
    QLineEdit *lineEditTexteAenvoyer;
    QPushButton *pushButtonEnvoyer;

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
        labelTexteRecu->setGeometry(QRect(10, 100, 81, 17));
        textBrowserTexteRecu = new QTextBrowser(Widget);
        textBrowserTexteRecu->setObjectName(QStringLiteral("textBrowserTexteRecu"));
        textBrowserTexteRecu->setGeometry(QRect(10, 130, 571, 371));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 510, 571, 25));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 60, 561, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelTexteAenvoyer = new QLabel(widget);
        labelTexteAenvoyer->setObjectName(QStringLiteral("labelTexteAenvoyer"));

        horizontalLayout->addWidget(labelTexteAenvoyer);

        lineEditTexteAenvoyer = new QLineEdit(widget);
        lineEditTexteAenvoyer->setObjectName(QStringLiteral("lineEditTexteAenvoyer"));

        horizontalLayout->addWidget(lineEditTexteAenvoyer);

        pushButtonEnvoyer = new QPushButton(widget);
        pushButtonEnvoyer->setObjectName(QStringLiteral("pushButtonEnvoyer"));

        horizontalLayout->addWidget(pushButtonEnvoyer);


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
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
