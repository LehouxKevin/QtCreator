#ifndef NBNOTE_H
#define NBNOTE_H

#include <QWidget>

namespace Ui {
class NbNote;
}

class NbNote : public QWidget
{
    Q_OBJECT

public:
    explicit NbNote(QWidget *parent = nullptr);
    ~NbNote();
    int RecupererNbnote();
    void IndiquerNbMesure(int nbMesure);
    void NouveauNbNote(int newNbNote);

private:
    Ui::NbNote *ui;
    int nbNote;
    QPixmap imagesNotes[8];

signals:
    void Valide();

private slots:
    void on_pushButtonNoir_clicked();
    void on_pushButtonDeuxCroche_clicked();
    void on_pushButtonTroisCroche_clicked();
    void on_pushButtonQuatreDCroche_clicked();
    void on_pushButtonCinqDCroche_clicked();
    void on_pushButtonPasSub_clicked();
    void on_pushButtonValider_clicked();
};

#endif // NBNOTE_H
