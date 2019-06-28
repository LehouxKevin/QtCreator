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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButtonSuite;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPoids;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSexe;
    QRadioButton *radioButtonSexeF;
    QRadioButton *radioButtonSexeH;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QWidget *tab_2;
    QTextEdit *textEditAffichage;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(545, 466);
        Widget->setMinimumSize(QSize(545, 466));
        Widget->setMaximumSize(QSize(545, 466));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 30, 441, 371));
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButtonSuite = new QPushButton(tab);
        pushButtonSuite->setObjectName(QStringLiteral("pushButtonSuite"));
        pushButtonSuite->setGeometry(QRect(190, 260, 80, 25));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(140, 160, 181, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAge = new QLabel(widget);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        horizontalLayout->addWidget(labelAge);

        spinBoxAge = new QSpinBox(widget);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        horizontalLayout->addWidget(spinBoxAge);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(140, 190, 181, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPoids = new QLabel(widget1);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        horizontalLayout_2->addWidget(labelPoids);

        doubleSpinBoxPoids = new QDoubleSpinBox(widget1);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15);
        doubleSpinBoxPoids->setMaximum(300);
        doubleSpinBoxPoids->setSingleStep(0.1);

        horizontalLayout_2->addWidget(doubleSpinBoxPoids);

        widget2 = new QWidget(tab);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(140, 220, 181, 28));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelTaille = new QLabel(widget2);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        horizontalLayout_3->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(widget2);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.5);
        doubleSpinBoxTaille->setMaximum(3);
        doubleSpinBoxTaille->setSingleStep(0.01);
        doubleSpinBoxTaille->setValue(0.5);

        horizontalLayout_3->addWidget(doubleSpinBoxTaille);

        widget3 = new QWidget(tab);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(140, 130, 180, 25));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelSexe = new QLabel(widget3);
        labelSexe->setObjectName(QStringLiteral("labelSexe"));

        horizontalLayout_4->addWidget(labelSexe);

        radioButtonSexeF = new QRadioButton(widget3);
        radioButtonSexeF->setObjectName(QStringLiteral("radioButtonSexeF"));
        radioButtonSexeF->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonSexeF);

        radioButtonSexeH = new QRadioButton(widget3);
        radioButtonSexeH->setObjectName(QStringLiteral("radioButtonSexeH"));

        horizontalLayout_4->addWidget(radioButtonSexeH);

        widget4 = new QWidget(tab);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(140, 100, 181, 27));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelPrenom = new QLabel(widget4);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        horizontalLayout_5->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(widget4);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));
        lineEditPrenom->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(lineEditPrenom);

        widget5 = new QWidget(tab);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(140, 70, 181, 27));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelNom = new QLabel(widget5);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        horizontalLayout_6->addWidget(labelNom);

        lineEditNom = new QLineEdit(widget5);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));
        lineEditNom->setInputMethodHints(Qt::ImhNone);
        lineEditNom->setDragEnabled(false);
        lineEditNom->setReadOnly(false);
        lineEditNom->setClearButtonEnabled(true);

        horizontalLayout_6->addWidget(lineEditNom);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textEditAffichage = new QTextEdit(tab_2);
        textEditAffichage->setObjectName(QStringLiteral("textEditAffichage"));
        textEditAffichage->setGeometry(QRect(10, 10, 411, 201));
        pushButtonDevine = new QPushButton(tab_2);
        pushButtonDevine->setObjectName(QStringLiteral("pushButtonDevine"));
        pushButtonDevine->setGeometry(QRect(70, 240, 301, 25));
        pushButtonLorentz = new QPushButton(tab_2);
        pushButtonLorentz->setObjectName(QStringLiteral("pushButtonLorentz"));
        pushButtonLorentz->setGeometry(QRect(70, 270, 301, 25));
        pushButtonLorentzAge = new QPushButton(tab_2);
        pushButtonLorentzAge->setObjectName(QStringLiteral("pushButtonLorentzAge"));
        pushButtonLorentzAge->setGeometry(QRect(70, 300, 301, 25));
        tabWidget->addTab(tab_2, QString());
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(240, 420, 80, 25));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonSuite->setText(QApplication::translate("Widget", "Suite", nullptr));
        labelAge->setText(QApplication::translate("Widget", "Age", nullptr));
        labelPoids->setText(QApplication::translate("Widget", "Poids (kg)", nullptr));
        labelTaille->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        labelSexe->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonSexeF->setText(QApplication::translate("Widget", "Femme", nullptr));
        radioButtonSexeH->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelPrenom->setText(QApplication::translate("Widget", "Pr\303\251nom", nullptr));
        labelNom->setText(QApplication::translate("Widget", "Nom", nullptr));
        lineEditNom->setInputMask(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Informations personelles", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids id\303\251al formule de devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz", nullptr));
        pushButtonLorentzAge->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
