#include "accesbdd.h"

AccesBdd::AccesBdd()
{
    connexionBDD();
}

void AccesBdd::connexionBDD()
{
    bdd=QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName("172.18.58.14");
    bdd.setDatabaseName("AssistantMusicien");
    bdd.setUserName("snir");
    bdd.setPassword("snir");

    if(!bdd.open())
    {
        qDebug()<<"pb acces bdd"<<bdd.lastError();
    }
    else {
        qDebug()<<"acces bdd ok";
    }
}

QList<QString> AccesBdd::obtenirListeTitre()
{
    QSqlQuery requete("select nomTitre, interprete from Titre;" );

    QString titre, interprete;
    QList <QString> listeTitre;

    if(!requete.exec())
    {
        qDebug()<<"pb requete"<<requete.lastError();
    }
    int nbLignes=requete.size();
    while(requete.next())
    {
        titre=requete.value("nomTitre").toString();
        interprete=requete.value("interprete").toString();
        listeTitre.append(titre+" - "+interprete);
    }

    return listeTitre;
}

void AccesBdd::enregistrerTitre(Titre *titre)
{
    // nomTitre, interprete, cheminAudio, cheminPartition, cheminEnregistrement, cheminRythme, tonalite, tempo, dureeTitre, idTitre, note
    QSqlQuery requete;
    requete.prepare("insert into Titre (nomTitre,interprete,cheminAudio,cheminPartition,cheminEnregistrement,cheminRythme,tonalite,tempo,dureeTitre,note) "
                    "values (:nomTitre,:interprete,:cheminAudio,:cheminPartition,:cheminEnregistrement,:cheminRythme,:tonalite,:tempo,:dureeTitre,:note);");

    requete.bindValue(":nomTitre",titre->ObtenirNom());
    requete.bindValue(":interprete",titre->ObtenirInterprete());
    requete.bindValue(":cheminAudio",titre->ObtenirAudio());
    requete.bindValue(":cheminPartition",titre->ObtenirPartition());
    requete.bindValue(":cheminEnregistrement",titre->ObtenirEnregistrement());
    requete.bindValue(":cheminRythme",titre->ObtenirRythme());
    requete.bindValue(":tonalite",titre->ObtenirTonalite());
    requete.bindValue(":tempo",titre->ObtenirTempo());
    requete.bindValue(":dureeTitre",titre->ObtenirDuree());
    requete.bindValue(":note",titre->ObtenirNote());

    if (!requete.exec()){
        qDebug()<<"pb requete enregistrer titre "<<requete.lastError();
    }
}

QList<QString> AccesBdd::obtenirListeTitreFiltreParTitre(QString texte)
{
    QSqlQuery requete;
    QString champs = texte+"%";
    requete.prepare("select nomTitre, interprete from Titre where nomTitre like :champs;");
    requete.bindValue(":champs",champs);

    QString titre, interprete;
    QList <QString> listeTitre;

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste titre par filtre titre : "<<requete.lastError();
    }
    while(requete.next())
    {
        titre=requete.value("nomTitre").toString();
        interprete=requete.value("interprete").toString();
        listeTitre.append(titre+" - "+interprete);
    }

    return listeTitre;
}

QList<QString> AccesBdd::obtenirListeTitreFiltreParInterprete(QString texte)
{
    QSqlQuery requete;
    QString champs = texte+"%";
    requete.prepare("select nomTitre, interprete from Titre where interprete like :champs;");
    requete.bindValue(":champs",champs);
    QString titre, interprete;
    QList <QString> listeTitre;

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste titre par filtre interprete : "<<requete.lastError();
    }
    while(requete.next())
    {
        titre=requete.value("nomTitre").toString();
        interprete=requete.value("interprete").toString();
        listeTitre.append(titre+" - "+interprete);
    }

    return listeTitre;
}

Titre* AccesBdd::obtenirTitreAModifier(QString nomTitre)
{
    QList <QString> liste = nomTitre.split(" - ");
    QString nom = liste[0];
    QString interprete = liste[1];
    Titre *titre = new Titre();

    QSqlQuery requete;
    requete.prepare("select nomTitre, interprete, cheminAudio, cheminPartition, cheminEnregistrement, cheminRythme, tonalite, tempo, dureeTitre, note"
                    "from Titre"
                    "where nomTitre = :nom"
                    "and interprete = :interprete");

    requete.bindValue(":nom",nom);
    requete.bindValue(":interprete",interprete);

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir titre à modifier: "<<requete.lastError();
    }
    else {
        /*
        Titre->DonnerNom(requete.value("nomTitre").toString());
        Titre->DonnerInterprete(requete.value("interprete").toString());
        Titre.DonnerChemin(requete.value("cheminAudio").toString(),Titre::AUDIO);
        Titre.DonnerChemin(requete.value("cheminPartition").toString(),Titre::PARTITION);
        Titre.DonnerChemin(requete.value("cheminEnregistrement").toString(),Titre::ENREGISTREMENT);
        Titre.DonnerChemin(requete.value("cheminRythme").toString(),Titre::RYTHME);
        Titre.DonnerTonalite(requete.value("toanlite").toString());
        Titre.DonnerTempo(requete.value("tempo").toString());
        Titre.DonnerDuree(requete.value("dureeTitre").toString());
        Titre.DonnerNote(requete.value("note").toString());*/
    }



    return titre;
}
