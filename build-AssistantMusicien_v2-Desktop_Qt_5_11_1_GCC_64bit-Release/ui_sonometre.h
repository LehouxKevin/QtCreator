/********************************************************************************
** Form generated from reading UI file 'sonometre.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONOMETRE_H
#define UI_SONOMETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sonometre
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNiveau;
    QLabel *labelDb;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSensi;
    QSlider *volumeSlider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSeuil;
    QSlider *horizontalSliderSeuil;
    QLineEdit *lineEditSeuil;

    void setupUi(QWidget *sonometre)
    {
        if (sonometre->objectName().isEmpty())
            sonometre->setObjectName(QStringLiteral("sonometre"));
        sonometre->resize(1767, 1047);
        layoutWidget = new QWidget(sonometre);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 90, 441, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNiveau = new QLabel(layoutWidget);
        labelNiveau->setObjectName(QStringLiteral("labelNiveau"));

        horizontalLayout->addWidget(labelNiveau);

        labelDb = new QLabel(layoutWidget);
        labelDb->setObjectName(QStringLiteral("labelDb"));
        labelDb->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(20);
        labelDb->setFont(font);

        horizontalLayout->addWidget(labelDb);

        layoutWidget1 = new QWidget(sonometre);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 240, 431, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelSensi = new QLabel(layoutWidget1);
        labelSensi->setObjectName(QStringLiteral("labelSensi"));

        horizontalLayout_2->addWidget(labelSensi);

        volumeSlider = new QSlider(layoutWidget1);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volumeSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelSeuil = new QLabel(layoutWidget1);
        labelSeuil->setObjectName(QStringLiteral("labelSeuil"));

        horizontalLayout_3->addWidget(labelSeuil);

        horizontalSliderSeuil = new QSlider(layoutWidget1);
        horizontalSliderSeuil->setObjectName(QStringLiteral("horizontalSliderSeuil"));
        horizontalSliderSeuil->setMinimum(30);
        horizontalSliderSeuil->setMaximum(100);
        horizontalSliderSeuil->setValue(50);
        horizontalSliderSeuil->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderSeuil);

        lineEditSeuil = new QLineEdit(layoutWidget1);
        lineEditSeuil->setObjectName(QStringLiteral("lineEditSeuil"));

        horizontalLayout_3->addWidget(lineEditSeuil);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(sonometre);

        QMetaObject::connectSlotsByName(sonometre);
    } // setupUi

    void retranslateUi(QWidget *sonometre)
    {
        sonometre->setWindowTitle(QApplication::translate("sonometre", "sonometre", nullptr));
        labelNiveau->setText(QApplication::translate("sonometre", "Niveau sonore :", nullptr));
        labelDb->setText(QString());
        labelSensi->setText(QApplication::translate("sonometre", "Volume du microphone ", nullptr));
        labelSeuil->setText(QApplication::translate("sonometre", "Fixer le seuil", nullptr));
        lineEditSeuil->setText(QApplication::translate("sonometre", "50", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sonometre: public Ui_sonometre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONOMETRE_H
