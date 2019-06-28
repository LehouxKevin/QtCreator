#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonPlus_clicked();

    void on_pushButtonMoins_clicked();

    void on_pushButtonMultiplier_clicked();

    void on_pushButtonDiviser_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonEgal_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
