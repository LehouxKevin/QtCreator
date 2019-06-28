#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlTableModel>

#include "connexion.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonInserer_clicked();

    void on_pushButtonSupprimer_clicked();

    void on_actionConnexion_triggered();

    void on_actionQuitter_triggered();

    void on_comboBoxBase_currentIndexChanged(const QString &arg1);

    void on_comboBoxTable_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QSqlTableModel *modele;
    QStringList *listeBases;

    void lireTables();

    Connexion *wConnexion;
};

#endif // MAINWINDOW_H
