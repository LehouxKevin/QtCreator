#ifndef PARTIEOPERATIVE_H
#define PARTIEOPERATIVE_H

#include <QWidget>
#include <QThread>
#include <QDebug>
#include <QQueue>
#include <QTimer>
#include <QList>
#include <QMutex>

#include "barquette.h"

namespace Ui {
class PartieOperative;
}

class PartieOperative : public QWidget
{
    Q_OBJECT

public:
    explicit PartieOperative(QWidget *parent = nullptr);
    ~PartieOperative();

private slots:
    void on_pushButtonDebutProduction_clicked();

    void on_pushButtonNouvelleBarquette_clicked();

    void on_timerPo_timeout();

signals :

    void CapteurChange(quint8 capteurs);

private:
    Ui::PartieOperative *ui;
    QQueue<Barquette*> fileBarquettes;
    QTimer timerPo;
    QList<Barquette*> tapis;
    quint8 etatCapteur;
    quint8 memoEtatCapteur;
};

#endif // PARTIEOPERATIVE_H
