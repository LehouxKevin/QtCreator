/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QPushButton *pushButtonLancement;
    QLabel *labelClients;
    QTextBrowser *textBrowserClients;
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(400, 321);
        pushButtonLancement = new QPushButton(ServeurWidget);
        pushButtonLancement->setObjectName(QStringLiteral("pushButtonLancement"));
        pushButtonLancement->setGeometry(QRect(20, 60, 361, 25));
        labelClients = new QLabel(ServeurWidget);
        labelClients->setObjectName(QStringLiteral("labelClients"));
        labelClients->setGeometry(QRect(20, 100, 54, 17));
        textBrowserClients = new QTextBrowser(ServeurWidget);
        textBrowserClients->setObjectName(QStringLiteral("textBrowserClients"));
        textBrowserClients->setGeometry(QRect(20, 120, 361, 161));
        pushButtonQuitter = new QPushButton(ServeurWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(20, 290, 361, 25));
        widget = new QWidget(ServeurWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 361, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelPort = new QLabel(widget);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        horizontalLayout->addWidget(labelPort);

        spinBoxPort = new QSpinBox(widget);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));
        spinBoxPort->setMaximum(10000);

        horizontalLayout->addWidget(spinBoxPort);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        pushButtonLancement->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        labelClients->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
        labelPort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
