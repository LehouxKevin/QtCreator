#ifndef PAVENUM_H
#define PAVENUM_H

#include <QWidget>

namespace Ui {
class PaveNum;
}

class PaveNum : public QWidget
{
    Q_OBJECT

public:
    explicit PaveNum(QWidget *parent = nullptr);
    ~PaveNum();
    int RecupererBpm();

private:
    Ui::PaveNum *ui;

signals:
    void Valide();

private slots:
    void on_pushButtonUn_clicked();
    void on_pushButtonDeux_clicked();
    void on_pushButtonTrois_clicked();
    void on_pushButtonQuatre_clicked();
    void on_pushButtonCinq_clicked();
    void on_pushButtonSix_clicked();
    void on_pushButtonSept_clicked();
    void on_pushButtonHuit_clicked();
    void on_pushButtonNeuf_clicked();
    void on_pushButtonValide_clicked();
    void on_pushButtonZero_clicked();
    void on_pushButtonSupprimer_clicked();
};

#endif // PAVENUM_H
