#include "assistantmusicien.h"
#include "ui_assistantmusicien.h"

#include <QVBoxLayout>

AssistantMusicien::AssistantMusicien(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AssistantMusicien)
{
    ui->setupUi(this);

    accesBdd = new AccesBdd();

    /*-- Création de la barre d'outils application --*/
    applicationToolBar = new QToolBar(tr("Applications"),this);
    applicationToolBar->setOrientation(Qt::Vertical);
    applicationToolBar->setFloatable(true);


    applicationToolBar->setIconSize(QSize(130,120));
    if(QApplication::desktop()->width()==1600 && QApplication::desktop()->height()==900)
    {
        applicationToolBar->setIconSize(QSize(100,90));
    }

    applicationToolBar->addAction(QIcon(":/images/playlist2.png"),tr("Gestionnaire de listes"),this,SLOT(AfficherListe()));
    applicationToolBar->addAction(QIcon(":/images/rhythm.png"),tr("Lecteur de partitions"),this,SLOT(AfficherPartition()));
    applicationToolBar->addAction(QIcon(":/images/musical.png"),tr("Lecteur audio"),this,SLOT(AfficherAudio()));
    applicationToolBar->addAction(QIcon(":/images/metronome.png"),tr("Metronome"),this,SLOT(AfficherMetronome()));
    applicationToolBar->addAction(QIcon(":/images/adjust.png"),tr("Surveiller le niveau sonore"),this,SLOT(AfficherNiveau()));
    applicationToolBar->addAction(QIcon(":/images/settings.png"),tr("Paramètres de l'application"),this,SLOT(AfficherParametres()));
    applicationToolBar->addAction(QIcon(":/images/quit.png"),tr("Quitter l'application"),this,SLOT(close()));
    addToolBar(Qt::LeftToolBarArea, applicationToolBar);

    /*-- Création de la zone de travail avec les différentes applications --*/
    mdiAera = new QMdiArea(this);
    setCentralWidget(mdiAera);
    mdiAera->setTabsMovable(true);
    mdiAera->setTabsClosable(false);

    parametres = new Parametres(this);
    pParametres = mdiAera->addSubWindow(parametres);
    pParametres->setWindowFlag(Qt::WindowTitleHint);
    pParametres->setWindowFlag(Qt::FramelessWindowHint);
    pParametres->setWindowTitle(tr("Paramètre de l'application"));
    pParametres->showMaximized();

    metronome = new InterfaceMetronome(parametres,this);
    pMetronome = mdiAera->addSubWindow(metronome);
    pMetronome->setWindowFlag(Qt::WindowTitleHint );
    pMetronome->setWindowFlag(Qt::FramelessWindowHint);
    pMetronome->setWindowTitle(tr("Métronome"));
    pMetronome->showMaximized();

    audio = new LecteurAudio(this);
    pAudio = mdiAera->addSubWindow(audio);
    pAudio->setWindowFlags(Qt::WindowTitleHint );
    pAudio->setWindowFlag(Qt::FramelessWindowHint);
    pAudio->setWindowTitle(tr("Lecteur audio"));
    pAudio->showMaximized();

    partitions = new LecteurPartitions(metronome,accesBdd,this);
    pPartitions = mdiAera->addSubWindow(partitions);
    pPartitions->setWindowFlags(Qt::WindowTitleHint );
    pPartitions->setWindowFlag(Qt::FramelessWindowHint);
    pPartitions->setWindowTitle(tr("Lecteur de partitions"));
    pPartitions->showMaximized();

    listes = new GestionnaireListes(accesBdd,partitions,audio, this);
    pListes = mdiAera->addSubWindow(listes);
    pListes->setWindowFlags(Qt::WindowTitleHint );
    pListes->setWindowFlag(Qt::FramelessWindowHint);
    pListes->setWindowTitle(tr("Gestionnaire de listes"));
    pListes->showMaximized();



    niveau = new sonometre(this);
    pNiveau = mdiAera->addSubWindow(niveau);
    pNiveau->setWindowFlag(Qt::WindowTitleHint );
    pNiveau->setWindowFlag(Qt::FramelessWindowHint);
    pNiveau->setWindowTitle(tr("Surveiller le niveau sonore"));
    pNiveau->showMaximized();



    /*-- Apparence de l'application --*/
    showMaximized();

    this->setStyleSheet("background-color:white");
    applicationToolBar->setStyleSheet("background-color:#b0c4e5");

    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        mdiAera->setActiveSubWindow(pListes);
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }

}

AssistantMusicien::~AssistantMusicien()
{
    delete ui;
    delete applicationToolBar;
}

void AssistantMusicien::AfficherAudio()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        mdiAera->setActiveSubWindow(pAudio);
        pAudio->showMaximized();
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }
}

void AssistantMusicien::AfficherPartition()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        mdiAera->setActiveSubWindow(pPartitions);
        pPartitions->showMaximized();
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }
}

void AssistantMusicien::AfficherListe()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        if(accesBdd->verifierBdd())
        {
            listes->setup();
            mdiAera->setActiveSubWindow(pListes);
            pListes->showMaximized();
        }
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }

}

void AssistantMusicien::AfficherMetronome()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        QString nomFichierParDefautMetronome = parametres->obtenirCheminRythme()+"valeurDefaut.ini";
        QFileInfo fichierIni(nomFichierParDefautMetronome);
        if(!fichierIni.exists() && !fichierIni.isFile())
        {
            metronome->CreerFichier();
        }
        mdiAera->setActiveSubWindow(pMetronome);
        pMetronome->showMaximized();
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }
}

void AssistantMusicien::AfficherNiveau()
{
    QString nomFichierIni = NOM_FICHIER_INI;
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists() && testFichier.isFile())
    {
        mdiAera->setActiveSubWindow(pNiveau);
        pNiveau->showMaximized();
    }
    else {
        mdiAera->setActiveSubWindow(pParametres);
    }
}

void AssistantMusicien::AfficherParametres()
{
    mdiAera->setActiveSubWindow(pParametres);
    pParametres->showMaximized();
}
