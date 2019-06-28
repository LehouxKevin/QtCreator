#include "assistantmusicien.h"
#include "ui_assistantmusicien.h"

#include <QVBoxLayout>

AssistantMusicien::AssistantMusicien(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AssistantMusicien)
{
    ui->setupUi(this);

    accesBdd = new AccesBdd();
    QList <QString> listeTitre = accesBdd->obtenirListeTitre();

    /*-- Création de la barre d'outils application --*/
    applicationToolBar = new QToolBar(tr("Applications"),this);
    applicationToolBar->setOrientation(Qt::Vertical);
    applicationToolBar->setFloatable(true);
    applicationToolBar->setIconSize(QSize(130,130));
    applicationToolBar->addAction(QIcon(":/images/playlist2.png"),tr("Gestionnaire de listes"),this,SLOT(AfficherListe()));
    applicationToolBar->addAction(QIcon(":/images/rhythm.png"),tr("Lecteur de partitions"),this,SLOT(AfficherPartition()));
    applicationToolBar->addAction(QIcon(":/images/musical.png"),tr("Lecteur audio"),this,SLOT(AfficherAudio()));
    applicationToolBar->addAction(QIcon(":/images/metronome.png"),tr("Metronome"),this,SLOT(AfficherMetronome()));
    applicationToolBar->addAction(QIcon(":/images/adjust.png"),tr("Surveiller le niveau sonore"),this,SLOT(AfficherNiveau()));
    addToolBar(Qt::LeftToolBarArea, applicationToolBar);

    /*-- Création de la zone de travail avec les différentes applications --*/
    mdiAera = new QMdiArea(this);
    setCentralWidget(mdiAera);
    mdiAera->setTabsMovable(true);
    mdiAera->setTabsClosable(false);

    audio = new LecteurAudio(this);
    pAudio = mdiAera->addSubWindow(audio);
    pAudio->setWindowFlags(Qt::WindowTitleHint );
    pAudio->setWindowTitle(tr("Lecteur audio"));
    pAudio->showMaximized();

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

    metronome = new Metronome(this);
    pMetronome = mdiAera->addSubWindow(metronome);
    pMetronome->setWindowFlag(Qt::WindowTitleHint );
    pMetronome->setWindowTitle(tr("Métronome"));
    pMetronome->showMaximized();

    niveau = new Niveau(this);
    pNiveau = mdiAera->addSubWindow(niveau);
    pNiveau->setWindowFlag(Qt::WindowTitleHint );
    pNiveau->setWindowTitle(tr("Surveiller le niveau sonore"));
    pNiveau->showMaximized();

    /*-- Apparence de l'application --*/
    showMaximized();

    this->setStyleSheet("background-color:white");
    applicationToolBar->setStyleSheet("background-color:#b0c4e5");



}

AssistantMusicien::~AssistantMusicien()
{
    delete ui;
    delete applicationToolBar;
}

void AssistantMusicien::AfficherAudio()
{
    mdiAera->setActiveSubWindow(pAudio);
    pAudio->showMaximized();
}

void AssistantMusicien::AfficherPartition()
{
    mdiAera->setActiveSubWindow(pPartitions);
    pPartitions->showMaximized();
}

void AssistantMusicien::AfficherListe()
{
    mdiAera->setActiveSubWindow(pListes);
    pListes->showMaximized();
}

void AssistantMusicien::AfficherMetronome()
{
    mdiAera->setActiveSubWindow(pMetronome);
    pMetronome->showMaximized();
}

void AssistantMusicien::AfficherNiveau()
{
    mdiAera->setActiveSubWindow(pNiveau);
    pNiveau->showMaximized();
}
