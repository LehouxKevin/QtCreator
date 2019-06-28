/********************************************************************************
** Form generated from reading UI file 'metronome.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METRONOME_H
#define UI_METRONOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Metronome
{
public:

    void setupUi(QWidget *Metronome)
    {
        if (Metronome->objectName().isEmpty())
            Metronome->setObjectName(QStringLiteral("Metronome"));
        Metronome->resize(400, 300);

        retranslateUi(Metronome);

        QMetaObject::connectSlotsByName(Metronome);
    } // setupUi

    void retranslateUi(QWidget *Metronome)
    {
        Metronome->setWindowTitle(QApplication::translate("Metronome", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Metronome: public Ui_Metronome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METRONOME_H
