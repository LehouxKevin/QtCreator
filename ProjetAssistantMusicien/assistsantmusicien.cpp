#include "assistsantmusicien.h"
#include "ui_assistsantmusicien.h"

AssistsantMusicien::AssistsantMusicien(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AssistsantMusicien)
{
    ui->setupUi(this);

    /*-- Création de la barre d'outils application --*/
    applicationToolBar = new QToolBar(tr("Applications"),this);
    applicationToolBar->setOrientation(Qt::Vertical);
    applicationToolBar->setFloatable(true);
    applicationToolBar->setIconSize(QSize(80,80));
    applicationToolBar->addAction(QIcon(":/images/playlist.png"),tr("Gestionnaire de listes"),this,SLOT(AfficherListe()));
    applicationToolBar->addAction(QIcon(":/images/music-sheet.png"),tr("Lecteur de partitions"),this,SLOT(AfficherPartition()));
    //applicationToolBar->addAction(QIcon(":/images/sound-wave.png"),tr("Lecteur audio"),this,SLOT(AfficherAudio()));
    addToolBar(Qt::LeftToolBarArea, applicationToolBar);

    /*-- Création de la zone de travail avec les différentes applications --*/
    mdiAera = new QMdiArea(this);
    setCentralWidget(mdiAera);
    mdiAera->setTabsMovable(true);
    mdiAera->setTabsClosable(false);

    /*audio = new LecteurAudio(this);
    pAudio = mdiAera->addSubWindow(audio);
    pAudio->setWindowFlags(Qt::WindowTitleHint );
    pAudio->setWindowTitle(tr("Lecteur audio"));
    pAudio->showMaximized();*/

    partitions = new LecteurPartitions(this);
    pPartitions = mdiAera->addSubWindow(partitions);
    pPartitions->setWindowFlags(Qt::WindowTitleHint );
    pPartitions->setWindowTitle(tr("Lecteur de partitions"));
    pPartitions->showMaximized();

    listes = new GestionnaireListes(audio, this);
    pListes = mdiAera->addSubWindow(listes);
    pListes->setWindowFlags(Qt::WindowTitleHint );
    pListes->setWindowTitle(tr("Gestionnaire de listes"));
    pListes->showMaximized();
    mdiAera->setActiveSubWindow(pListes);

    /*-- Apparence de l'application --*/
    showMaximized();
}

AssistsantMusicien::~AssistsantMusicien()
{
    delete ui;
    delete applicationToolBar;
}

void AssistsantMusicien::AfficherAudio()
{
    /*mdiAera->setActiveSubWindow(pAudio);
    pAudio->showMaximized();*/
}

void AssistsantMusicien::AfficherPartition()
{
    mdiAera->setActiveSubWindow(pPartitions);
    pPartitions->showMaximized();
}

void AssistsantMusicien::AfficherListe()
{
    mdiAera->setActiveSubWindow(pListes);
    pListes->showMaximized();
}
