#ifndef SIGNATURE_H
#define SIGNATURE_H

#include <QWidget>

namespace Ui {
class Signature;
}

class Signature : public QWidget
{
    Q_OBJECT

public:
    explicit Signature(QWidget *parent = nullptr);
    ~Signature();
    void RecupererSignature(int &nbTempsT,int &nbMesureT);
    void NouvelleSignature(int newNbTemps,int newNbMesure);

private:
    Ui::Signature *ui;
    int nbTemps;
    int nbMesure;

signals:
    void Valide();

private slots:
    void on_pushButtonValider_clicked();
    void on_toolButtonUnTemps_clicked();
    void on_toolButtonDeuxTemps_clicked();
    void on_toolButtonTroisTemps_clicked();
    void on_toolButtonQuatreTemps_clicked();
    void on_toolButtonCinqTemps_clicked();
    void on_toolButtonSiTemps_clicked();
    void on_toolButtonSeptTemps_clicked();
    void on_toolButtonHuitTemps_clicked();
    void on_toolButtonNeufTemps_clicked();
    void on_toolButtonDixTemps_clicked();
    void on_toolButtonOnzeTemps_clicked();
    void on_toolButtonDouzeTemps_clicked();
    void on_toolButtonUneMesure_clicked();
    void on_toolButtonDeuxMesure_clicked();
    void on_toolButtonQuatreMsure_clicked();
    void on_toolButtonHuitMesure_clicked();
};

#endif // SIGNATURE_H
