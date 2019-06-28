/********************************************************************************
** Form generated from reading UI file 'niveau.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIVEAU_H
#define UI_NIVEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Niveau
{
public:

    void setupUi(QWidget *Niveau)
    {
        if (Niveau->objectName().isEmpty())
            Niveau->setObjectName(QStringLiteral("Niveau"));
        Niveau->resize(400, 300);

        retranslateUi(Niveau);

        QMetaObject::connectSlotsByName(Niveau);
    } // setupUi

    void retranslateUi(QWidget *Niveau)
    {
        Niveau->setWindowTitle(QApplication::translate("Niveau", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Niveau: public Ui_Niveau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVEAU_H
