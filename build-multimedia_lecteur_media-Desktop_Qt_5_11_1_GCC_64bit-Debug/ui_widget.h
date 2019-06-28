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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonChoisirFichier;
    QPushButton *pushButtonJouerSon;
    QPushButton *pushButtonQuitter;
    QProgressBar *progressBarProgression;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(463, 137);
        pushButtonChoisirFichier = new QPushButton(Widget);
        pushButtonChoisirFichier->setObjectName(QStringLiteral("pushButtonChoisirFichier"));
        pushButtonChoisirFichier->setGeometry(QRect(40, 70, 141, 25));
        pushButtonJouerSon = new QPushButton(Widget);
        pushButtonJouerSon->setObjectName(QStringLiteral("pushButtonJouerSon"));
        pushButtonJouerSon->setGeometry(QRect(190, 70, 101, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(340, 70, 81, 25));
        progressBarProgression = new QProgressBar(Widget);
        progressBarProgression->setObjectName(QStringLiteral("progressBarProgression"));
        progressBarProgression->setGeometry(QRect(40, 40, 381, 23));
        progressBarProgression->setValue(24);

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButtonChoisirFichier->setText(QApplication::translate("Widget", "Choisir un fichier", nullptr));
        pushButtonJouerSon->setText(QApplication::translate("Widget", "Jouer le son", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
