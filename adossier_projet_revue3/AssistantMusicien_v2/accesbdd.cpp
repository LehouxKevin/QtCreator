#include "accesbdd.h"

AccesBdd::AccesBdd()
{
    LireFichierIni();
    connexionBDD();
}

void AccesBdd::connexionBDD()
{
    bdd=QSqlDatabase::addDatabase(database);
    bdd.setHostName(hostname);
    bdd.setDatabaseName(dataBaseName);
    bdd.setUserName(username);
    bdd.setPassword(password);

    if(!bdd.open())
    {
        qDebug()<<"pb acces bdd"<<bdd.lastError();
    }
    else {
        qDebug()<<"acces bdd ok";
    }
}

void AccesBdd::LireFichierIni()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni,QSettings::IniFormat);

        database=paramsSocket.value("CONFIG_BDD/database").toString();
        hostname=paramsSocket.value("CONFIG_BDD/hostname").toString();
        dataBaseName=paramsSocket.value("CONFIG_BDD/dataBaseName").toString();
        username=paramsSocket.value("CONFIG_BDD/username").toString();
        password=paramsSocket.value("CONFIG_BDD/password").toString();
    }
    else {
        qDebug()<<"fichier ini non valide";

    }
}

bool AccesBdd::verifierBdd()
{
    bool retVal;
    if(bdd.isOpen())
    {
        retVal = true;
    }
    else {
        LireFichierIni();
        connexionBDD();
        retVal = bdd.isOpen();
    }
    return retVal;
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

void AccesBdd::enregistrerModificationTitre(Titre *titre)
{
    QSqlQuery requete;

    requete.prepare("update Titre set tonalite = :tonalite , tempo = :tempo , dureeTitre = :dureeTitre , note = :note where (nomTitre = :nomTitre and interprete = :interprete);");
    requete.bindValue(":tonalite",titre->ObtenirTonalite());
    requete.bindValue(":tempo", titre->ObtenirTempo());
    requete.bindValue(":dureeTitre",titre->ObtenirDuree());
    requete.bindValue(":note",titre->ObtenirNote());
    requete.bindValue(":nomTitre",titre->ObtenirNom());
    requete.bindValue(":interprete",titre->ObtenirInterprete());

    if(!requete.exec())
    {
        qDebug()<<"pb requete update modification d'un titre: "<<requete.lastError();
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

    qDebug()<<"nom : "<<nom;
    qDebug()<<"interprete :" << interprete;
    QSqlQuery requete;
    requete.prepare("select nomTitre, interprete, cheminAudio, cheminPartition, cheminEnregistrement, cheminRythme, tonalite, tempo, dureeTitre, note from Titre where (nomTitre = :nom and interprete = :interprete);" );

    requete.bindValue(":nom",nom);
    requete.bindValue(":interprete",interprete);

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir titre à modifier: "<<requete.lastError();
    }
    else {

        while(requete.next())
        {
            titre->DonnerNom(requete.value("nomTitre").toString());
            titre->DonnerInterprete(requete.value("interprete").toString());
            titre->DonnerChemin(requete.value("cheminAudio").toString(),Titre::AUDIO);
            titre->DonnerChemin(requete.value("cheminPartition").toString(),Titre::PARTITION);
            titre->DonnerChemin(requete.value("cheminEnregistrement").toString(),Titre::ENREGISTREMENT);
            titre->DonnerChemin(requete.value("cheminRythme").toString(),Titre::RYTHME);
            titre->DonnerTonalite(requete.value("tonalite").toString());
            titre->DonnerTempo(requete.value("tempo").toString());
            titre->DonnerDuree(requete.value("dureeTitre").toString());
            titre->DonnerNote(requete.value("note").toString());
        }

    }
    return titre;
}

QList<Titre *> AccesBdd::obtenirListeTitreSet(QList<QString> listeSet)
{
    QList <QString> listeNom;
    QList <QString> listeInterprete;
    QList <Titre *> listeTitre;


    int i=0;
    foreach(QString titre, listeSet)
    {
        QList <QString> listeTmp;
        listeTmp = listeSet[i].split(" - ");
        listeNom.append(listeTmp[0]);
        listeInterprete.append(listeTmp[1]);
        i++;
    }
    int k=0;

    foreach(QString titre, listeSet)
    {
    QSqlQuery requete;
    requete.prepare("select cheminAudio, cheminPartition, cheminEnregistrement, cheminRythme from Titre where (nomTitre = :nomTitre and interprete = :interprete);");
    requete.bindValue(":nomTitre",listeNom[k]);
    requete.bindValue(":interprete",listeInterprete[k]);

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste titre set: "<<requete.lastError();
    }
    else {
        while(requete.next())
        {
            Titre *titre = new Titre();
            titre->DonnerChemin(requete.value("cheminAudio").toString(),Titre::AUDIO);
            titre->DonnerChemin(requete.value("cheminPartition").toString(),Titre::PARTITION);
            titre->DonnerChemin(requete.value("cheminEnregistrement").toString(),Titre::ENREGISTREMENT);
            titre->DonnerChemin(requete.value("cheminRythme").toString(),Titre::RYTHME);
            listeTitre.append(titre);
        }
    }
    k++;
    }

    return listeTitre;
}

QList<QString> AccesBdd::obtenirListeSetsDansBdd()
{
    QList <QString> listeSets;

    QSqlQuery requete;
    requete.prepare("select nomSet, date, genre from SetMusical;");

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste set dans bdd : "<<requete.lastError();
    }
    else {
        while(requete.next())
        {
            listeSets.append(requete.value("nomSet").toString()+ " | "+requete.value("date").toString() + " | " + requete.value("genre").toString());
        }

    }
    return listeSets;
}

QList<QString> AccesBdd::obtenirListeTitreDansSetSelectionner(QString nomSet, QString date, QString genre)
{
    QList <QString> listeTitreDansSet;

    QSqlQuery requete;

    requete.prepare("select nomTitre, interprete from Titre,SetMusical,RelationTitreSet where SetMusical.nomSet = :nomSet and SetMusical.date = :date and SetMusical.genre = :genre and Titre.idTitre = RelationTitreSet.idTitre and RelationTitreSet.idSet = SetMusical.idSet");
    requete.bindValue(":nomSet",nomSet);
    requete.bindValue(":date",date);
    requete.bindValue(":genre",genre);

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste titre dans set selectionner  : "<<requete.lastError();
    }
    else {
        while(requete.next())
        {
            listeTitreDansSet.append(requete.value("nomTitre").toString()+" - "+requete.value("interprete").toString());
        }
    }

    return listeTitreDansSet;
}

int AccesBdd::creerSetMusical(QString nomSet, QString genre, QString jours, QString mois, QString annee)
{
    int idSet=0;
    QSqlQuery requete;
    requete.prepare("insert into SetMusical (nomSet,date,genre) values (:nomSet , :date , :genre);");
    requete.bindValue(":nomSet",nomSet);
    requete.bindValue(":date",annee+"-"+mois+"-"+jours);
    requete.bindValue(":genre",genre);

    if(!requete.exec())
    {
        qDebug()<<"pb requete creer set musical: "<<requete.lastError();
    }

    QSqlQuery requeteIdSet;
    requeteIdSet.prepare("select idSet from SetMusical where (nomSet = :nomSet and date = :date and genre = :genre);");
    requeteIdSet.bindValue(":nomSet",nomSet);
    requeteIdSet.bindValue(":date",annee+"-"+mois+"-"+jours);
    requeteIdSet.bindValue(":genre",genre);
    if(!requeteIdSet.exec())
    {
        qDebug()<<"pb requete creer set musical select id set : "<<requeteIdSet.lastError();
    }
    else {
        while(requeteIdSet.next())
        {
            idSet = requeteIdSet.value("idSet").toInt();
        }
    }
    return idSet;
}

void AccesBdd::enregistrerSetMusical(QList<QString> listeTitreSet, int idSet)
{
    QSqlQuery requete;
    QList <QString> listeNom;
    QList <QString> listeInterprete;
    QList <int> listeIdTitre;

    int i=0;
    foreach(QString titre, listeTitreSet)
    {
        QList <QString> listeTmp;
        listeTmp = listeTitreSet[i].split(" - ");
        listeNom.append(listeTmp[0]);
        listeInterprete.append(listeTmp[1]);
        i++;
    }

    int k=0;
    foreach(QString titre, listeTitreSet)
    {
    QSqlQuery requete;
    requete.prepare("select idTitre from Titre where (nomTitre = :nomTitre and interprete = :interprete);");
    requete.bindValue(":nomTitre",listeNom[k]);
    requete.bindValue(":interprete",listeInterprete[k]);


    if(!requete.exec())
    {
        qDebug()<<"pb requete enregistrer set musical: "<<requete.lastError();
    }
    else {
        while(requete.next())
        {
            listeIdTitre.append(requete.value("idTitre").toInt());
        }
    }
    k++;
    }
    qDebug()<<"passage";
    int t=0;
    foreach(int id, listeIdTitre)
    {
        QSqlQuery requeteEnregistrer;
        requeteEnregistrer.prepare("insert into RelationTitreSet (idTitre,idSet) values (:idTitre , :idSet);");
        requeteEnregistrer.bindValue(":idTitre",id);
        requeteEnregistrer.bindValue(":idSet",idSet);

        if(!requeteEnregistrer.exec())
        {
            qDebug()<<"pb requete sauvegarder set: "<<requeteEnregistrer.lastError();
        }
    }
    qDebug()<<"passage 2";

}

void AccesBdd::supprimerSet(QString nomSet, QString date, QString genre)
{
    QSqlQuery requeteIdSet;
    int idSet;
    requeteIdSet.prepare("select idSet from SetMusical where (nomSet = :nomSet and date = :date and genre = :genre);");
    requeteIdSet.bindValue(":nomSet",nomSet);
    requeteIdSet.bindValue(":date",date);
    requeteIdSet.bindValue(":genre",genre);
    if(!requeteIdSet.exec())
    {
        qDebug()<<"pb requete select id set delete set : "<<requeteIdSet.lastError();
    }
    else {
        while(requeteIdSet.next())
        {
            idSet = requeteIdSet.value("idSet").toInt();
        }
    }

    QSqlQuery requete;
    requete.prepare("delete from SetMusical where idSet = :idSet;");
    requete.bindValue(":idSet",idSet);

    if(!requete.exec())
    {
        qDebug()<<"pb requete supprimer set : "<<requete.lastError();
    }

    QSqlQuery requeteViderTableRelation;
    requeteViderTableRelation.prepare("delete from RelationTitreSet where idSet = :idSet");
    requeteViderTableRelation.bindValue(":idSet",idSet);

    if(!requeteViderTableRelation.exec())
    {
        qDebug()<<"pb requete supression relationTitreSet";
    }

}

QList <QString> AccesBdd::supprimerTitre(QString nomTitre)
{
    QList <QString> liste = nomTitre.split(" - ");
    QString nom = liste[0];
    QString interprete = liste[1];
    QList <QString> listeCheminAsupprimer;

    QSqlQuery requete;
    requete.prepare("select cheminAudio,cheminPartition,cheminEnregistrement,cheminRythme from Titre where (nomTitre = :nomTitre and interprete = :interprete); ");
    requete.bindValue(":nomTitre",nom);
    requete.bindValue(":interprete",interprete);

    if(!requete.exec())
    {
        qDebug()<<"pb requete select chemins dans supprimer Titre";
    }
    else {
        requete.next();

        listeCheminAsupprimer.append(requete.value("cheminAudio").toString());
        listeCheminAsupprimer.append(requete.value("cheminPartition").toString());
        listeCheminAsupprimer.append(requete.value("cheminEnregistrement").toString());
        listeCheminAsupprimer.append(requete.value("cheminRythme").toString());
    }

    QSqlQuery requeteSupprimer;
    requeteSupprimer.prepare("delete from Titre where (nomTitre = :nomTitre and interprete = :interprete);");
    requeteSupprimer.bindValue(":nomTitre",nom);
    requeteSupprimer.bindValue(":interprete",interprete);

    if(!requeteSupprimer.exec())
    {
        qDebug()<<"Pb requete supprimer titre";
    }

    return listeCheminAsupprimer;
}

QList<QString> AccesBdd::obtenirListeCheminsPartitions(QList<QString> listeSetPartitions)
{
    QList <QString> listeNom;
    QList <QString> listeInterprete;
    QList <QString> listeChemins;

    int i=0;
    foreach(QString titre, listeSetPartitions)
    {
        QList <QString> listeTmp;
        listeTmp = listeSetPartitions[i].split(" - ");
        listeNom.append(listeTmp[0]);
        listeInterprete.append(listeTmp[1]);
        i++;
    }
    int k=0;
    foreach(QString titre, listeNom)
    {
    QSqlQuery requete;
    requete.prepare("select cheminPartition from Titre where (nomTitre = :nomTitre and interprete = :interprete);");
    requete.bindValue(":nomTitre",listeNom[k]);
    requete.bindValue(":interprete",listeInterprete[k]);


    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir liste chemin partitions: "<<requete.lastError();
    }
    else {
        while(requete.next())
        {
            listeChemins.append(requete.value("cheminPartition").toString());
        }
    }
    k++;
    }
    return listeChemins;
}

QStringList AccesBdd::obtenirCheminMetronome(QString cheminPartition)
{
    QSqlQuery requete;
    QStringList infoRhytme;
    requete.prepare("select cheminRythme,nomTitre,interprete from Titre where (cheminPartition = :cheminPartition);");
    requete.bindValue(":cheminPartition",cheminPartition);

    if(!requete.exec())
    {
        qDebug()<<"pb requete obtenir chemin métronome: "<<requete.lastError();
    }
    else
    {
        requete.next();
        QString un = requete.value("cheminRythme").toString();
        QString deux = requete.value("nomTitre").toString();
        QString trois = requete.value("interprete").toString();
        infoRhytme << un << deux << trois;
    }
    return  infoRhytme;
}


