#ifndef METRONOME_H
#define METRONOME_H

#include <QObject>
#include <QTimer>
#include <QSoundEffect>
#include <QSettings>
#include <QFileInfo>


class Metronome : public QObject
{
    Q_OBJECT

public:
    Metronome(QObject *parent = nullptr);
    ~Metronome();
    void JouerUnRythme();
    void ArretterRythme();
    void ModifierNbNote(int nbNote);
    void ModifierNbTemps(int newNbTemps);
    void ModifiernbMesure(int newNbMesure);
    void ModifierBpm(int temps);
    void ModifierStructure(QString newStructure);
    void ModifierUnite(int newUnite);
    void MettreUnTempsFort(int indice);
    void MettreUnSilence(int indice,int val);
    void EnleverSilence(int indice,int val);
    void AjouterPrereglage(QString silenceS,QString silenceP,QString tempsFort,QString chemin);
    void ChargerPreset(QStringList infos);
    int RecupererReglage(int indice);
    void ModifierVolume(int volume);
    void RecupererSTF(QStringList &STF);
    void CreerFichierDefaut(QString _cheminDefaut);

private:
    int nbTemps;
    int nbMesure;
    int msec;
    int msecVariable;
    int unite;
    int nbSub;
    int indiceStructure;
    int indicesTrame[60];
    QTimer *timer;
    QSoundEffect player;
    QSoundEffect player2;
    QSoundEffect player3;
    QString indiceTempsFort;
    QString indiceSilenceP;
    QString indiceSilenceS;
    QString structureP;
    QString structurePB;
    QString nomReglage;
    QString cheminDefaut;

private slots:
    void on_QTimer_timeout();

signals:
    void Prereglage();

};

#endif // METRONOME_H
