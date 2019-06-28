#ifndef TESTGESTIONSTOCK_H
#define TESTGESTIONSTOCK_H

#include <QWidget>
#include <QMessageBox>

#include "stock.h"


namespace Ui {
class TestGestionStock;
}

class TestGestionStock : public QWidget
{
    Q_OBJECT

public:
    explicit TestGestionStock(QWidget *parent = nullptr);
    ~TestGestionStock();

private slots:
    void on_pushButtonNouveau_clicked();

    void on_pushButtonRetrait_clicked();

    void on_pushButtonSuppression_clicked();

private:
    Ui::TestGestionStock *ui;
    Stock leStock;

};

#endif // TESTGESTIONSTOCK_H
