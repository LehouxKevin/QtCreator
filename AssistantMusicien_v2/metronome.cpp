#include "metronome.h"
#include <QDebug>

Metronome::Metronome(QObject *parent):
    QObject (parent)
{
    //Instanciation des attributs dynamiques
    timer = new QTimer;
    //Connexions aux slots
    connect(timer,&QTimer::timeout,this,&Metronome::on_QTimer_timeout);
    //Mettre le timer en mode précis
    timer->setTimerType(Qt::PreciseTimer);
    //Mise en place du son source
    player.setSource(QUrl::fromLocalFile("://son/high.wav"));
    player.setVolume(1);
    player2.setSource(QUrl::fromLocalFile("://son/silence.wav"));
    player2.setVolume(1);
    player3.setSource(QUrl::fromLocalFile("://son/fort.wav"));
    player3.setVolume(1);
}

Metronome::~Metronome()
{

}
/**
 * @brief Metronome::JouerUnRythme
 * @return rien
 * @details L'interval de temps du métronome est indiqué aux timers
 * et les démarrent.
 */
void Metronome::JouerUnRythme()
{
    indiceStructure = 0;
    timer->start(msecVariable/nbSub);
}
/**
 * @brief Metronome::ArretterRthyme
 * @return rien
 * @details Les timers sont stoppés.
 */
void Metronome::ArretterRythme()
{
    timer->stop();
}
/**
 * @brief Metronome::ModifierNbNote
 * @param nbNote
 * @return rien
 * @details La trame pour jouer les subdivision est créé.
 */
void Metronome::ModifierNbNote(int nbNote)
{
    nbSub = nbNote;
}
/**
 * @brief Metronome::ModifierNbTemps
 * @param newNbTemps
 * @return rien
 * @details Le nombre de temps est mise à jour.
 */
void Metronome::ModifierNbTemps(int newNbTemps)
{
    nbTemps = newNbTemps;
}
/**
 * @brief Metronome::ModifiernbMesure
 * @param newNbMesure
 * @return rien
 * @details Le nombre de mesure est mise à jour.
 */
void Metronome::ModifiernbMesure(int newNbMesure)
{
    nbMesure = newNbMesure;
}
/**
 * @brief Metronome::ModifierBpm
 * @param temps
 * @return rien
 * @details Le temps d'interval est mise à jour.
 */
void Metronome::ModifierBpm(int temps)
{
    msec = temps;
    msecVariable = temps;
}
/**
 * @brief Metronome::ModifierStructure
 * @param newStrucuture
 * @return rien
 * @details La trame de la stucture rythmique principale
 * est créé et mise à jour.
 */
void Metronome::ModifierStructure(QString newStructure)
{
    structureP = newStructure;
    structurePB ="";
    int indice = 0;
    for(int i=0;i<structureP.count();i++)
    {
        structurePB.append("2");
        int iVariable[5];
        if(nbMesure == 1)
        {
            iVariable[0] = 1;
        }
        if(nbMesure == 2)
        {
            iVariable[0] = 2;
            iVariable[2] = 1;
        }
        if(nbMesure == 4)
        {
            iVariable[0] = 4;
            iVariable[1] = 3;
            iVariable[2] = 2;
            iVariable[3] = 1;
        }
        if(nbMesure == 8)
        {
            iVariable[0] = 8;
            iVariable[1] = 6;
            iVariable[2] = 4;
            iVariable[3] = 2;
            iVariable[4] = 3;
        }
        switch (structureP[i].toLatin1()) {
        case '7':
            for(int i=0;i<(iVariable[0]*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        case '6':
            for(int i=0;i<(iVariable[1]*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        case '5':
            for(int i=0;i<(iVariable[2]*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        case '4':
            for(int i=0;i<(iVariable[4]*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        case '3':
            for(int i=0;i<(iVariable[3]*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        case '1':
            for(int i=0;i<(1*nbSub-1);i++)
            {
                structurePB.append("1");
            }
            break;
        }
    }
    for(int i=0;i<structurePB.count();i++)
    {
        if(structurePB[i] == '2')
        {
            indicesTrame[indice] = i;
            indice++;
        }
    }
}
/**
 * @brief Metronome::ModifierUnite
 * @param newUnite
 * @return rien
 * @details L'inuté de temps est mise à jour puis est
 * appliqué sur l'interval de temps.
 */
void Metronome::ModifierUnite(int newUnite)
{
    unite = newUnite;
    msecVariable = msec;
    switch (unite) {
    case 1:
        msecVariable=msec*(1/2);
        break;
    case 2:
        msecVariable=msec*(3/4);
        break;
    case 3:
        msecVariable=msec*1;
        break;
    case 4:
        msecVariable=msec*(3/2);
        break;
    case 5:
        msecVariable=msec*2;
        break;
    case 6:
        msecVariable=msec*3;
        break;
    case 7:
        msecVariable=msec*4;
        break;
    }
}
/**
 * @brief Metronome::MettreUnTempsFort
 * @param indice
 * @return rien
 * @details Met la trame à jour et indique le
 * temps fort sur la trame pricipale.
 */
void Metronome::MettreUnTempsFort(int indice)
{
    structurePB[indicesTrame[indice]] = '3';
}
/**
 * @brief Metronome::MettreUnSilence
 * @param indice
 * @param val
 * @return rien
 * @details Les trames sont misent à jouer et indique
 * les silences sur les trames.
 */
void Metronome::MettreUnSilence(int indice,int val)
{
    if(val == 1)
    {
        int val;
        switch (structureP[indice].toLatin1()){
        case '1':
            val = 1;
            break;
        case '3':
            val = 1;
            break;
        case '5':
            val = 2;
            break;
        case '6':
            val = 3;
            break;
        case '7':
            val = 4;
            break;
        }
        if(nbMesure == 1)
        {
            val = val/4;
        }
        if(nbMesure == 2)
        {
            val = val/2;
        }
        if(nbMesure == 8)
        {
            if(structureP[indice] == '4')
            {
                val = 3;
            }
            else
            {
                val = val*2;
            }
        }
        for(int i=0;i<nbSub*val;i++)
        {
            structurePB[indicesTrame[indice]+i] = '0';
        }
    }
    if(val == 0)
    {
        structurePB[indice] = '0';
    }
}
/**
 * @brief Metronome::EnleverSilence
 * @param indice
 * @param val
 * @return rien
 * @details Les trames sont misent à jouer et enleve
 * les silences des trames.
 */
void Metronome::EnleverSilence(int indice,int val)
{
    int indice2 = 0;
    for(int i=0;i<nbTemps;i++)
    {
        if(indice == indicesTrame[i])
        {
            indice2 = indice;
        }
    }
    if(val == 1)
    {
        int val;
        switch (structureP[indice].toLatin1()){
        case '1':
            val = 1;
            break;
        case '3':
            val = 1;
            break;
        case '5':
            val = 2;
            break;
        case '6':
            val = 3;
            break;
        case '7':
            val = 4;
            break;
        }
        if(nbMesure == 1)
        {
            val = val/4;
        }
        if(nbMesure == 2)
        {
            val = val/2;
        }
        if(nbMesure == 8)
        {
            if(structureP[indice] == '4')
            {
                val = 3;
            }
            else
            {
                val = val*2;
            }
        }
        structurePB[indicesTrame[indice]] = '2';
        for(int i=0;i<nbSub*val-1;i++)
        {
            structurePB[indicesTrame[indice]+i+1] = '1';
        }
    }
    if(val == 0)
    {
        if(indice == indice2)
        {
            structurePB[indice] = '2';
        }
        else
        {
            structurePB[indice] = '1';
        }
    }
}
/**
 * @brief Metronome::AjouterPrereglage
 * @return rien
 * @details Le régle est enregistrer et transmit à
 * la classe AccesBDD puis un fichier ini est créé
 * pour sauvegarder les données.
 */
void Metronome::AjouterPrereglage(QString silenceS,QString silenceP,QString tempsFort,QString chemin)
{
    if(silenceS != "-1")
    {
        silenceS.resize(silenceS.count()-1);
    }
    if(silenceP != "-1")
    {
        silenceP.resize(silenceP.count()-1);
    }
    if(tempsFort != "-1")
    {
        tempsFort.resize(tempsFort.count()-1);
    }

    QSettings paramsSocket(chemin+"/"+nomReglage+".ini",QSettings::IniFormat);

    paramsSocket.beginGroup("SIGNATURE");
    paramsSocket.setValue("temps",msec);
    paramsSocket.setValue("nbTemps",nbTemps);
    paramsSocket.setValue("nbMesure",nbMesure);
    paramsSocket.endGroup();

    paramsSocket.beginGroup("STRUCTURE");
    paramsSocket.setValue("unite",unite);
    paramsSocket.setValue("nbSub",nbSub);
    paramsSocket.setValue("structureP",structureP);
    paramsSocket.setValue("indiceTempsFort",tempsFort);
    paramsSocket.setValue("indiceSilenceP",silenceP);
    paramsSocket.setValue("indiceSilenceS",silenceS);
    paramsSocket.endGroup();
}
/**
 * @brief Metronome::ChargerPreset
 * @param chemin
 * @return rien
 * @details Charge et lit le fichier ini grâce au chemin
 * puis créé les trames correspondantes.
 */
void Metronome::ChargerPreset(QStringList infos)
{
    QString chemin;
    if(infos[0] == "")
    {
        chemin =  cheminDefaut+"valeursDefaut.ini";
        if(infos[1] != "valeursDefaut")
        {
            nomReglage = infos[1]+" - "+infos[2];
            chemin = infos[0];
            qDebug()<<infos[0];
            qDebug()<<nomReglage;
        }
    }
    else
    {
        chemin = infos[0];
    }
    QFileInfo Fichier(chemin);
    QSettings paramsSocket(chemin,QSettings::IniFormat);
    if(Fichier.exists() && Fichier.isFile())
    {
        msec=paramsSocket.value("SIGNATURE/temps").toInt();
        msecVariable = msec;
        nbTemps=paramsSocket.value("SIGNATURE/nbTemps").toInt();
        nbMesure=paramsSocket.value("SIGNATURE/nbMesure").toInt();
        unite=paramsSocket.value("STRUCTURE/unite").toInt();
        nbSub=paramsSocket.value("STRUCTURE/nbSub").toInt();
        structureP=paramsSocket.value("STRUCTURE/structureP").toString();
        indiceTempsFort=paramsSocket.value("STRUCTURE/indiceTempsFort").toString();
        indiceSilenceP=paramsSocket.value("STRUCTURE/indiceSilenceP").toString();
        indiceSilenceS=paramsSocket.value("STRUCTURE/indiceSilenceS").toString();
         emit Prereglage();
    }
}
/**
 * @brief Metronome::RecupererReglage
 * @return rien
 * @details Les trames trames sont récupérées et transmit
 * à l'interface du métronome.
 */
int Metronome::RecupererReglage(int indice)
{
    int reglages[5];
    reglages[0] = nbSub;
    reglages[1] = unite;
    reglages[2] = nbMesure;
    reglages[3] = nbTemps;
    reglages[4] = msec;
    return reglages[indice];
}
/**
 * @brief Metronome::MettreUnSilence
 * @param volume
 * @return rien
 * @details Le volume est mise à jour et modifie le volume
 * des players.
 */
void Metronome::ModifierVolume(int volume)
{
    player.setVolume(volume/10);
    player2.setVolume(volume/10);
    player3.setVolume(volume/10);
}
/**
 * @brief Metronome::RecupererSTF
 * @return rien
 * @details Envoit une liste de chaine de caractére pour
 * mettre en place les temps fort,silence et la structure.
 */
void Metronome::RecupererSTF(QStringList &STF)
{
    QStringList retour = {indiceTempsFort,indiceSilenceP,indiceSilenceS,structureP};
    STF = retour;
}
/**
 * @brief Metronome::CreerFichierDefaut()
 * @return rien
 * @details Creer le fichier ini par défaut.
 */
void Metronome::CreerFichierDefaut(QString _cheminDefaut)
{
    cheminDefaut = _cheminDefaut;
    QString chemin =  cheminDefaut+"valeursDefaut.ini";
    QSettings paramsSocket(chemin,QSettings::IniFormat);

    paramsSocket.beginGroup("SIGNATURE");
    paramsSocket.setValue("temps",1000);
    paramsSocket.setValue("nbTemps",4);
    paramsSocket.setValue("nbMesure",4);
    paramsSocket.endGroup();

    paramsSocket.beginGroup("STRUCTURE");
    paramsSocket.setValue("unite",3);
    paramsSocket.setValue("nbSub",2);
    paramsSocket.setValue("structureP",3333);
    paramsSocket.setValue("indiceTempsFort",1);
    paramsSocket.setValue("indiceSilenceP",-1);
    paramsSocket.setValue("indiceSilenceS",-1);
    paramsSocket.endGroup();

    QStringList vide {"","valeursDefaut",""};
    ChargerPreset(vide);
}
/**
 * @brief Metronome::on_QTimer_timeout
 * @return rien
 * @details La trame principale est lu et un son est jouer
 * en fonction du contenu.
 */
void Metronome::on_QTimer_timeout()
{
    QString indice = structurePB.at(indiceStructure);
    if(indice == '1' || indice == '2')
    {
        player.play();
    }
    if(indice == '0')
    {
        player2.play();
    }
    if(indice == '3')
    {
        player3.play();
    }
    if(indiceStructure == structurePB.count()-1)
    {
        indiceStructure = -1;
    }
    indiceStructure++;
    qDebug()<<structurePB;
}
