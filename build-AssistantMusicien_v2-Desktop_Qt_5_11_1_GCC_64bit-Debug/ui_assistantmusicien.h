/********************************************************************************
** Form generated from reading UI file 'assistantmusicien.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSISTANTMUSICIEN_H
#define UI_ASSISTANTMUSICIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssistantMusicien
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *AssistantMusicien)
    {
        if (AssistantMusicien->objectName().isEmpty())
            AssistantMusicien->setObjectName(QStringLiteral("AssistantMusicien"));
        AssistantMusicien->resize(400, 300);
        centralWidget = new QWidget(AssistantMusicien);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AssistantMusicien->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AssistantMusicien);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        AssistantMusicien->setMenuBar(menuBar);

        retranslateUi(AssistantMusicien);

        QMetaObject::connectSlotsByName(AssistantMusicien);
    } // setupUi

    void retranslateUi(QMainWindow *AssistantMusicien)
    {
        AssistantMusicien->setWindowTitle(QApplication::translate("AssistantMusicien", "AssistantMusicien", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssistantMusicien: public Ui_AssistantMusicien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSISTANTMUSICIEN_H
