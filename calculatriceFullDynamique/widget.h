#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScriptEngine>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#define NBTOUCHES 16
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private slots:

    void onQPushButtonClicked();

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QPushButton *touches[16];
    QLineEdit *afficheur;
    QGridLayout *grille;
    const QString tableDesSymboles[NBTOUCHES]={"0","1","2","3","4","5","6","7","8","9","c","=","/","*","-","+"};
};

#endif // WIDGET_H
