#include "titre.h"


Titre::Titre(QObject *parent)
{

}

Titre::Titre(const QString &_chemin, const Titre::TYPE_CHEMIN _type, QObject *parent)
{
    DonnerChemin(_chemin,_type);
    ExtraireNomDutitre(_chemin);
}

void Titre::DonnerChemin(const QString &_chemin, const Titre::TYPE_CHEMIN _type)
{
    switch(_type)
    {
    case AUDIO:
        cheminAudio = _chemin;
        break;
    case PARTITION:
        cheminPartition = _chemin;
        break;
    case ENREGISTREMENT:
        cheminEnregistrement =_chemin;
        break;
    }
    if(nom.isEmpty())
        ExtraireNomDutitre(_chemin);
}

void Titre::DonnerInterprete(const QString &_interprete)
{
    interprete = _interprete;
}

void Titre::DonnerTempo(const QString _tempo)
{
    tempo=_tempo;
}

/*void Titre::DonnerTempo(const quint8 _tempo)
{
    tempo = _tempo;
}*/

void Titre::DonnerDuree(const QString &_duree)
{
    duree = _duree;
}

/*void Titre::DonnerDuree(const QTime &_duree)
{
    duree = _duree;
}*/

void Titre::DonnerTonalite(const QString &_tonalite)
{
    tonalite = _tonalite;
}

void Titre::DonnerNom(const QString _nom)
{
    nom = _nom;
}

void Titre::DonnerNote(const QString _note)
{
    note = _note;
}

QString &Titre::ObtenirNom()
{
    return nom;
}

QString &Titre::ObtenirInterprete()
{
    return interprete;
}

QString &Titre::ObtenirAudio()
{
    return cheminAudio;
}

QString &Titre::ObtenirPartition()
{
    return cheminPartition;
}

QString &Titre::ObtenirEnregistrement()
{
    return cheminEnregistrement;
}

QString &Titre::ObtenirRythme()
{
    return cheminRythme;
}

QString &Titre::ObtenirTonalite()
{
    return tonalite;
}

QString Titre::ObtenirTempo()
{
    return tempo;
}

/*quint8 Titre::ObtenirTempo()
{
    return tempo;
}*/

QString &Titre::ObtenirDuree()
{
    return duree;
}

/*QTime &Titre::ObtenirDuree()
{
    return duree;
}*/

QString &Titre::ObtenirNote()
{
    return note;
}

bool Titre::RenommerFichier(const QString &_nouveau, const Titre::TYPE_CHEMIN _type)
{
    bool retour = false;
    QString chemin;
    switch(_type)
    {
    case AUDIO:
        chemin = cheminAudio;
        break;
    case PARTITION:
        chemin = cheminPartition;
        break;
    case ENREGISTREMENT:
        chemin = cheminEnregistrement;
    }
    if(!chemin.isEmpty())
    {
        QFile fichier(chemin);
        if(fichier.rename(chemin,_nouveau))
            retour = true;
        switch(_type)
        {
        case AUDIO:
            emit AudioChange(chemin);
            cheminAudio = chemin;
            break;
        case PARTITION:
            emit PartitionChange(chemin);
            cheminEnregistrement = chemin;
            break;
        case ENREGISTREMENT:
            emit EnregistrementChange(chemin);
            cheminEnregistrement = chemin;
        }
    }
    return retour;
}

void Titre::ExtraireNomDutitre(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    int indice = leNom.lastIndexOf('.');
    if(indice > 0)
        nom = leNom.left(indice);
}
