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
    void on_pushButtonClear_clicked();

    void on_pushButtonEgal_clicked();

    void onQPushButtonClicked();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
