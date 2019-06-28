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

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void connexionBase();
    void connexionBaseFichierIni();
    void requeteDepartements();
    void ecrireFichier();
    void lireFichier();

private slots:
    void on_pushButtonVoir_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase bd;
    QSqlDatabase bdIni;
    QString typeBase;
    QString ip;
    QString dataBaseName;
    QString userName;
    QString password;
};

#endif // WIDGET_H
