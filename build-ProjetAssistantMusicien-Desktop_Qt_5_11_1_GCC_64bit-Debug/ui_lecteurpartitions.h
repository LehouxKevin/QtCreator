/********************************************************************************
** Form generated from reading UI file 'lecteurpartitions.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURPARTITIONS_H
#define UI_LECTEURPARTITIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lecteurpartitions
{
public:

    void setupUi(QWidget *lecteurpartitions)
    {
        if (lecteurpartitions->objectName().isEmpty())
            lecteurpartitions->setObjectName(QStringLiteral("lecteurpartitions"));
        lecteurpartitions->resize(400, 300);

        retranslateUi(lecteurpartitions);

        QMetaObject::connectSlotsByName(lecteurpartitions);
    } // setupUi

    void retranslateUi(QWidget *lecteurpartitions)
    {
        lecteurpartitions->setWindowTitle(QApplication::translate("lecteurpartitions", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lecteurpartitions: public Ui_lecteurpartitions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURPARTITIONS_H
