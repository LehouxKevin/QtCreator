#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#define PAGE_PRINCIPALE 0
#define PAGE_OUVRIR_FICHIERS 1
#define PAGE_PLAYLIST 2

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
    void on_pushButtonFichiers_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
