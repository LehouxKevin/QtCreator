#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QXmlStreamReader>

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
    void on_actionOuvrir_Fichier_triggered();

    void on_actionQuitter_triggered();

    void on_actionEnregistrer_Fichier_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
