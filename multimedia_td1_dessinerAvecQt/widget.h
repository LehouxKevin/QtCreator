#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>

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
    void on_pushButtonExo1_clicked();

    void on_pushButtonExo2_clicked();

    void on_pushButtonMenage_clicked();

    void on_pushButtonExo3_clicked();

    void on_pushButtonExo4_clicked();

    void on_pushButtonExo5_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene maScene;
};

#endif // WIDGET_H
