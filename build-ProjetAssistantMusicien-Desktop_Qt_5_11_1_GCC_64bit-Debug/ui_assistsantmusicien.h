/********************************************************************************
** Form generated from reading UI file 'assistsantmusicien.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSISTSANTMUSICIEN_H
#define UI_ASSISTSANTMUSICIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssistsantMusicien
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AssistsantMusicien)
    {
        if (AssistsantMusicien->objectName().isEmpty())
            AssistsantMusicien->setObjectName(QStringLiteral("AssistsantMusicien"));
        AssistsantMusicien->resize(400, 300);
        menuBar = new QMenuBar(AssistsantMusicien);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AssistsantMusicien->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AssistsantMusicien);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AssistsantMusicien->addToolBar(mainToolBar);
        centralWidget = new QWidget(AssistsantMusicien);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AssistsantMusicien->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AssistsantMusicien);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AssistsantMusicien->setStatusBar(statusBar);

        retranslateUi(AssistsantMusicien);

        QMetaObject::connectSlotsByName(AssistsantMusicien);
    } // setupUi

    void retranslateUi(QMainWindow *AssistsantMusicien)
    {
        AssistsantMusicien->setWindowTitle(QApplication::translate("AssistsantMusicien", "AssistsantMusicien", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssistsantMusicien: public Ui_AssistsantMusicien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSISTSANTMUSICIEN_H
