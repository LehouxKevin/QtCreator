#ifndef STRUCTURERYTHM_H
#define STRUCTURERYTHM_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class StructureRythm;
}

class StructureRythm : public QWidget
{
    Q_OBJECT

public:
    explicit StructureRythm(QWidget *parent = nullptr);
    ~StructureRythm();
    QString RecupererStrucuture();
    void IndiquerSignature(int newNbTemps,int newNbMesure);
    void BloquerNotes();
    void ResetStructure();
    void NouvelleStructure(QString newStructure);

private:
    Ui::StructureRythm *ui;
    QString structure;
    int nbTemps;
    int nbMesure;
    double nbTempsRestant;
    QPixmap imagesNotes[6];

signals:
    void Valide();

private slots:
    void on_pushButtonRonde_clicked();
    void on_pushButtonNoir_clicked();
    void on_pushButtonNoirP_clicked();
    void on_pushButtonBlanche_clicked();
    void on_pushButtonBLancheP_clicked();
    void on_pushButtonValider_clicked();
    void on_pushButtonReset_clicked();
    void on_pushButtonCroche_clicked();
};

#endif // STRUCTURERYTHM_H
