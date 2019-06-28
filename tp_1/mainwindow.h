#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButtonLinux_clicked();

    void on_pushButtonWindows_clicked();

    void on_pushButtonLion_clicked();

    void on_radioButtonWindows_clicked();

    void on_radioButtonLion_clicked();

    void on_radioButtonLinux_clicked();

    void on_checkBoxWindows_clicked();

    void on_checkBoxLion_clicked();

    void on_checkBoxLinux_clicked();

    void on_lineEditCode_textChanged(const QString &arg1);

    void on_comboBox_OS_currentIndexChanged(const QString &arg1);

    void on_actionC_triggered();

    void on_actionJAVA_triggered();

    void on_actionCpp_triggered();

    void on_actionPHP_triggered();

    void on_actionJavascript_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
