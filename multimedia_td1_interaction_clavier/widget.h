#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QKeyEvent>
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

    void keyPressEvent(QKeyEvent *event);

private slots:

private:
    Ui::Widget *ui;
    QGraphicsScene maScene;
    QGraphicsEllipseItem *cercle;
};

#endif // WIDGET_H
