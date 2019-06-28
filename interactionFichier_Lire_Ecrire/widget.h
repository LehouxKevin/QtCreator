#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSettings>
#include <QApplication>
#include <QFileInfo>
#include <QDebug>

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

    void on_pushButtonLire_clicked();

    void on_pushButton_2_clicked();

    void on_pushButtonEcrire_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
