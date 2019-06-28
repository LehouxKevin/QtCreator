#ifndef TITRE_H
#define TITRE_H

#include <QObject>
#include <QTime>
#include <QFileInfo>

class Titre : public QObject
{
    Q_OBJECT
public:
    enum TYPE_CHEMIN
    {
        AUDIO,
        PARTITION,
        ENREGISTREMENT,
        RYTHME
    };

    explicit Titre(QObject *parent=nullptr);
    Titre(const QString &_chemin, const TYPE_CHEMIN _type, QObject *parent = nullptr);

    void DonnerChemin(const QString &_chemin, const Titre::TYPE_CHEMIN _type);
    void DonnerInterprete(const QString &_interprete);
    //void DonnerTempo(const quint8 _tempo);
    void DonnerTempo(const QString _tempo);
    //void DonnerDuree(const QTime &_duree);
    void DonnerDuree(const QString &_duree);
    void DonnerTonalite(const QString &_tonalite);
    void DonnerNom(const QString _nom);
    void DonnerNote(const QString _note);

    QString &ObtenirNom();
    QString &ObtenirInterprete();
    QString &ObtenirAudio();
    QString &ObtenirPartition();
    QString &ObtenirEnregistrement();
    QString &ObtenirRythme();
    QString &ObtenirTonalite();
    //quint8  ObtenirTempo();
    QString ObtenirTempo();
    //QTime   &ObtenirDuree();
    QString   &ObtenirDuree();
    QString &ObtenirNote();
    bool    RenommerFichier(const QString &_nouveau, const TYPE_CHEMIN _type);

    void    ExtraireNomDutitre(QString _chemin);

signals:
    void    AudioChange(QString &chemin);
    void    PartitionChange(QString &chemin);
    void    EnregistrementChange(QString &chemin);

private:


    QString nom;
    QString interprete;
    QString cheminAudio;
    QString cheminPartition;
    QString cheminEnregistrement;
    QString cheminRythme;
    QString tonalite;
    QString note;
    //quint8  tempo;
    QString tempo;
    //QTime   duree;
    QString duree;
};

#endif // TITRE_H
