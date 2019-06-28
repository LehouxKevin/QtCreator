#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QToolBar>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QHBoxLayout>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QMdiArea *mdiAera;
    QHBoxLayout *layoutQ;
    QMdiSubWindow *pSub;

    QPushButton *bouton;
};

#endif // WIDGET_H
