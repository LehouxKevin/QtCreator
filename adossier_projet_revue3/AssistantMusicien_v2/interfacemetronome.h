#ifndef INTERFACEMETRONOME_H
#define INTERFACEMETRONOME_H

#include <QWidget>
#include <QPushButton>
#include <QTime>
#include <QLabel>
#include <QComboBox>
#include <QMessageBox>
#include "pavenum.h"
#include "nbnote.h"
#include "signature.h"
#include "structurerythm.h"
#include "metronome.h"
#include "parametres.h"


namespace Ui {
class InterfaceMetronome;
}

class InterfaceMetronome : public QWidget
{
    Q_OBJECT

public:
    explicit InterfaceMetronome(Parametres(*cheminDefaut),QWidget *parent = nullptr);
    ~InterfaceMetronome();
    void GenererStructure();
    void GenererSub();
    void CreerFichier();
    void ChargerPreset(QStringList infos);

private:
    Ui::InterfaceMetronome *ui;
    PaveNum *pavenum;
    Signature *signature;
    NbNote *nbNote;
    StructureRythm *structure;
    Metronome *leMetronome;
    QTime temps;
    QPushButton *sub[60];
    QPushButton *principale[12];
    QPushButton *chiffres[12];
    QIcon imagesNotes[8];
    QIcon imageSilences[8];
    QIcon imagesTempsFort[8];
    Parametres *cheminDefaut;
    int etatBoutonPrincipale[12];
    int etatBoutonSub[60];
    int etatMetronome;
    int etatBoutonBpm;
    int etatSon;

private slots:
    void on_pushButtonEnregistrer_clicked();
    void on_pushButtonStructure_clicked();
    void on_comboBoxUnite_currentIndexChanged(int index);
    void on_pushButtonPlus_clicked();
    void on_pushButtonMoins_clicked();
    void on_pushButtonSon_clicked();
    void on_pushButtonPlay_clicked();
    void on_pushButtonTaper_clicked();
    void on_verticalSliderVolume_valueChanged(int value);
    void on_pushButtonSub_clicked();
    void onMetronome_Prereglage();
    void onPaveNum_Valide();
    void onSignature_Valide();
    void onNbNote_Valide();
    void onStructureRythm_Valide();
    void onPushButtonSubSilence_clicked();
    void onPushButtonPrincipaleSilence_clicked();
    void on_pushButtonTempo_clicked();
    void on_lineEditTempo_textChanged(const QString &arg1);
    void on_toolButtonNominateur_clicked();
    void on_toolButtonDenominateur_clicked();
};

#endif // INTERFACEMETRONOME_H
