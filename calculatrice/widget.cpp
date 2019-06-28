#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton0_clicked()
{
    ui->lineEditAfficheur->insert("0");
}

void Widget::on_pushButton1_clicked()
{
    ui->lineEditAfficheur->insert("1");
}

void Widget::on_pushButton2_clicked()
{
    ui->lineEditAfficheur->insert("2");
}

void Widget::on_pushButton3_clicked()
{
    ui->lineEditAfficheur->insert("3");
}

void Widget::on_pushButton4_clicked()
{
    ui->lineEditAfficheur->insert("4");
}

void Widget::on_pushButton5_clicked()
{
    ui->lineEditAfficheur->insert("5");
}

void Widget::on_pushButton6_clicked()
{
    ui->lineEditAfficheur->insert("6");
}

void Widget::on_pushButton7_clicked()
{
    ui->lineEditAfficheur->insert("7");
}

void Widget::on_pushButton8_clicked()
{
    ui->lineEditAfficheur->insert("8");
}

void Widget::on_pushButton9_clicked()
{
    ui->lineEditAfficheur->insert("9");
}

void Widget::on_pushButtonPlus_clicked()
{
    ui->lineEditAfficheur->insert("+");
}

void Widget::on_pushButtonMoins_clicked()
{
    ui->lineEditAfficheur->insert("-");
}

void Widget::on_pushButtonMultiplier_clicked()
{
    ui->lineEditAfficheur->insert("*");
}

void Widget::on_pushButtonDiviser_clicked()
{
    ui->lineEditAfficheur->insert("/");
}

void Widget::on_pushButtonClear_clicked()
{
    ui->lineEditAfficheur->clear();
}

void Widget::on_pushButtonEgal_clicked()
{
    QScriptEngine operation;
    QScriptValue result = operation.evaluate(ui->lineEditAfficheur->text());
    ui->lineEditAfficheur->clear();
    ui->lineEditAfficheur->insert(result.toString());
}
