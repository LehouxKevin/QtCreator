/********************************************************************************
** Form generated from reading UI file 'serveurcrawler.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURCRAWLER_H
#define UI_SERVEURCRAWLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurCrawler
{
public:

    void setupUi(QWidget *ServeurCrawler)
    {
        if (ServeurCrawler->objectName().isEmpty())
            ServeurCrawler->setObjectName(QStringLiteral("ServeurCrawler"));
        ServeurCrawler->resize(400, 300);

        retranslateUi(ServeurCrawler);

        QMetaObject::connectSlotsByName(ServeurCrawler);
    } // setupUi

    void retranslateUi(QWidget *ServeurCrawler)
    {
        ServeurCrawler->setWindowTitle(QApplication::translate("ServeurCrawler", "ServeurCrawler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ServeurCrawler: public Ui_ServeurCrawler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURCRAWLER_H
