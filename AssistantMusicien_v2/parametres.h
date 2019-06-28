#ifndef PARAMETRES_H
#define PARAMETRES_H

#include <QWidget>
#include <QSettings>
#include <QApplication>
#include <QFileInfo>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>

#define REPERTOIRE_AUDIO "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/audio/"
#define REPERTOIRE_PARTITION "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/partition/"
#define REPERTOIRE_ENREGISTREMENT "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/enregistrement/"
#define REPERTOIRE_RYTHME "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/rythme/"

#define NOM_FICHIER_INI "Settings.ini"

namespace Ui {
class Parametres;
}

class Parametres : public QWidget
{
    Q_OBJECT

public:
    explicit Parametres(QWidget *parent = 0);
    ~Parametres();

    void LireFichierIni();
    void EcrireFichierIni();

    void actualiserAffichageChemins();

    QString obtenirCheminAudio();
    QString obtenirCheminPartition();
    QString obtenirCheminEnregistrement();
    QString obtenirCheminRythme();

private slots:
    void on_pushButtonAppliquerModifications_clicked();

    void on_pushButtonResetAudio_clicked();

    void on_pushButtonReset_clicked();

    void on_pushButtonResetEnregistrement_clicked();

    void on_pushButtonRythme_clicked();

    void on_pushButtonCheminAudio_clicked();

    void on_pushButtonCheminPartition_clicked();

    void on_pushButtonCheminEnregistrement_clicked();

    void on_pushButtonCheminRythme_clicked();

    void on_pushButtonModifierParametreDefaut_clicked();

private:
    Ui::Parametres *ui;

    QString cheminAudio;
    QString cheminPartition;
    QString cheminEnregistrement;
    QString cheminRythme;

    QString cheminAudioParDefaut;
    QString cheminPartitionParDefaut;
    QString cheminEnregistrementParDefaut;
    QString cheminRythmeParDefaut;
};

#endif // PARAMETRES_H
