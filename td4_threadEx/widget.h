#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "monthread.h"

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
    void on_pushButtonLancer_clicked();
    void on_MonThreadMonId(quint64 threadId);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
