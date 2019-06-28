/********************************************************************************
** Form generated from reading UI file 'structurerythm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUCTURERYTHM_H
#define UI_STRUCTURERYTHM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StructureRythm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonRonde;
    QPushButton *pushButtonNoir;
    QPushButton *pushButtonNoirP;
    QPushButton *pushButtonBlanche;
    QPushButton *pushButtonBLancheP;
    QPushButton *pushButtonValider;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonCroche;

    void setupUi(QWidget *StructureRythm)
    {
        if (StructureRythm->objectName().isEmpty())
            StructureRythm->setObjectName(QStringLiteral("StructureRythm"));
        StructureRythm->resize(673, 350);
        StructureRythm->setStyleSheet(QStringLiteral("background-color: rgb(194, 211, 239);"));
        horizontalLayoutWidget = new QWidget(StructureRythm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 30, 531, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonRonde = new QPushButton(StructureRythm);
        pushButtonRonde->setObjectName(QStringLiteral("pushButtonRonde"));
        pushButtonRonde->setGeometry(QRect(80, 180, 71, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/NoteRondeModifi\303\251.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRonde->setIcon(icon);
        pushButtonRonde->setIconSize(QSize(50, 50));
        pushButtonNoir = new QPushButton(StructureRythm);
        pushButtonNoir->setObjectName(QStringLiteral("pushButtonNoir"));
        pushButtonNoir->setGeometry(QRect(440, 180, 71, 81));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/NoteNoirModifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNoir->setIcon(icon1);
        pushButtonNoir->setIconSize(QSize(60, 60));
        pushButtonNoirP = new QPushButton(StructureRythm);
        pushButtonNoirP->setObjectName(QStringLiteral("pushButtonNoirP"));
        pushButtonNoirP->setGeometry(QRect(350, 180, 71, 81));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/NoteNoirPModifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNoirP->setIcon(icon2);
        pushButtonNoirP->setIconSize(QSize(60, 60));
        pushButtonBlanche = new QPushButton(StructureRythm);
        pushButtonBlanche->setObjectName(QStringLiteral("pushButtonBlanche"));
        pushButtonBlanche->setGeometry(QRect(260, 180, 71, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/NoteBlancheModifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBlanche->setIcon(icon3);
        pushButtonBlanche->setIconSize(QSize(60, 60));
        pushButtonBLancheP = new QPushButton(StructureRythm);
        pushButtonBLancheP->setObjectName(QStringLiteral("pushButtonBLancheP"));
        pushButtonBLancheP->setGeometry(QRect(170, 180, 71, 81));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/NoteBlanchePModifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBLancheP->setIcon(icon4);
        pushButtonBLancheP->setIconSize(QSize(60, 60));
        pushButtonValider = new QPushButton(StructureRythm);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));
        pushButtonValider->setGeometry(QRect(280, 280, 71, 61));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/valide.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValider->setIcon(icon5);
        pushButtonValider->setIconSize(QSize(50, 50));
        pushButtonReset = new QPushButton(StructureRythm);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(593, 273, 71, 71));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonReset->setIcon(icon6);
        pushButtonReset->setIconSize(QSize(50, 50));
        pushButtonCroche = new QPushButton(StructureRythm);
        pushButtonCroche->setObjectName(QStringLiteral("pushButtonCroche"));
        pushButtonCroche->setGeometry(QRect(530, 180, 71, 81));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/NoteCrocheModifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCroche->setIcon(icon7);
        pushButtonCroche->setIconSize(QSize(60, 60));

        retranslateUi(StructureRythm);
        QObject::connect(pushButtonValider, SIGNAL(clicked()), StructureRythm, SLOT(close()));

        QMetaObject::connectSlotsByName(StructureRythm);
    } // setupUi

    void retranslateUi(QWidget *StructureRythm)
    {
        StructureRythm->setWindowTitle(QApplication::translate("StructureRythm", "Form", nullptr));
        pushButtonRonde->setText(QString());
        pushButtonNoir->setText(QString());
        pushButtonNoirP->setText(QString());
        pushButtonBlanche->setText(QString());
        pushButtonBLancheP->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonValider->setToolTip(QApplication::translate("StructureRythm", "valider", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonValider->setText(QString());
        pushButtonReset->setText(QString());
        pushButtonCroche->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StructureRythm: public Ui_StructureRythm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUCTURERYTHM_H
