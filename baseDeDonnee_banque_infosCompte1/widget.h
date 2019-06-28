#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSettings>
#include <QApplication>
#include <QFileInfo>
#include <QDebug>
#include <QMessageBox>

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
    void on_pushButtonConnexion_clicked();

    void on_pushButtonAfficherInfos_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase bd;
};

#endif // WIDGET_H
