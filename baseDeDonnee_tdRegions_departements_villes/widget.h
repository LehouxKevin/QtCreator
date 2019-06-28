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

    void ecrireFichier();
    void lireFichier();

private slots:
    void on_pushButtonObtenirNomDept_clicked();
    void on_comboBoxRegions_currentIndexChanged(int index);
    void on_comboBoxDepartements_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    QSqlDatabase bd;
    QString typeBase;
    QString ip;
    QString dataBaseName;
    QString userName;
    QString password;
};

#endif // WIDGET_H
