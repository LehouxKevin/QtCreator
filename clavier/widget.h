#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScriptEngine>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>

#define NBTOUCHES 37

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onQPushButtonClicked();
private:
    Ui::Widget *ui;
    QPushButton *touches[NBTOUCHES];
    QLineEdit *afficheur;
    QGridLayout *grille;
    const QString tableDesSymboles[NBTOUCHES]={"a","z","e","r","t","y","u","i","o","p","q","s","d","f","g","h","j","k","l","m","w","x","c","v","b","n","0","1","2","3","4","5","6","7","8","9","entree"};
};

#endif // WIDGET_H
