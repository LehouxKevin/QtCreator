#include "widget.h"
#include "ui_widget.h"

void qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    if(interfaceCreation.exec() == 0) // 0 Si signal reject
    {
        qDebug()<<"refuser";
        close();
    }
    else { // 1 Si signal accept
        etage = 1;
        etatTresor = false;
        nbPieges = NBPIEGES;
        nbMonstres = NBMONSTRES;
        nbPotions = NBPOTIONS;
        player.setVolume(100);
        musiqueFond.setVolume(10);
        musiqueFond.setMedia(QUrl("qrc:/sons/musiqueFond.mp3"));



        joueur = new Personnage(interfaceCreation.obtenirNom(),interfaceCreation.obtenirPrenom(),interfaceCreation.obtenirAge().toInt(),interfaceCreation.obtenirTaille().toInt(),interfaceCreation.obtenirPoids().toInt(),interfaceCreation.obtenirClasse());

        player.setMedia(QUrl("qrc:/sons/link-start-reupload.mp3"));
        player.play();
        qtPause(5000);

        musiqueFond.play();
        setFocus();
        genererPlateau();
        InitialiserMonde();
        afficherPlateau();
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::InitialiserMonde()
{
    quint32 ligne;
    quint32 colonne;
    for(ligne=0;ligne<HAUTEUR;ligne++)
    {
        for(colonne=0;colonne<LARGEUR;colonne++)
        {
            grille[ligne][colonne]=VIDE;
        }
    }

    posJoueur = DonnerPositionUnique();
    listePositions.append(posJoueur);

    tresor = DonnerPositionUnique();
    grille[tresor.x()][tresor.y()]=TRESOR;

    sortie = DonnerPositionUnique();
    grille[sortie.x()][tresor.y()]=SORTIE;

    nbPieges = NBPIEGES;
    nbMonstres = NBMONSTRES;
    nbPotions = NBPOTIONS;
    genererPieges();
    genererPotions();
    genererMonstres();
}

void Widget::genererPlateau()
{
    plateau = new QGridLayout();
    for(int i=0;i<LARGEUR*HAUTEUR;i++)
    {
        tabCases[i] = new QToolButton();
        tabCases[i]->setEnabled(false);
        tabCases[i]->setStyleSheet("background-color:white;");
    }
    int colonne=0, ligne=0;
    int i=0;

    for(ligne=0;ligne<HAUTEUR;ligne++)
    {
        for(int colonne=0;colonne<LARGEUR;colonne++)
        {
            plateau->addWidget(tabCases[i],ligne,colonne);
            i++;
        }
        colonne=0;
    }

    /** Affichage distance trésor **/

    interface = new QHBoxLayout();
    affichageDistanceTresor = new QLCDNumber();
    affichageDistanceTresor->setPalette(Qt::darkGray);
    interface->addWidget(affichageDistanceTresor);

    infoPerso = new QVBoxLayout();
    etatPerso = new QVBoxLayout();
    QHBoxLayout *gestionInfoPerso = new QHBoxLayout();
    QHBoxLayout *labelEtage = new QHBoxLayout();

    joueur->attribuerNom(interfaceCreation.obtenirNom());
    joueur->attribuerPrenom(interfaceCreation.obtenirPrenom());
    joueur->attribuerAge(interfaceCreation.obtenirAge().toInt());
    joueur->attribuerPoids(interfaceCreation.obtenirPoids().toFloat());
    joueur->attributerTaille(interfaceCreation.obtenirTaille().toFloat());



    nomPerso = new QLabel();
    prenomPerso = new QLabel();
    agePerso = new QLabel();
    taillePerso = new QLabel();
    poidsPerso = new QLabel();
    classePerso = new QLabel();

    nomPerso->setText("Nom : " +joueur->ObtenirNom());
    prenomPerso->setText("Prenom : "+joueur->ObtenirPrenom());
    agePerso->setText("Age : "+QString::number(joueur->ObtenirAge()));
    taillePerso->setText("Taille : "+QString::number(joueur->ObtenirTaille()));
    poidsPerso->setText("Poids : "+QString::number(joueur->ObtenirPoids()));
    classePerso->setText("Classe : "+joueur->ObtenirClasse());


    resistance = new QLabel();
    nbPv = new QLabel();
    //pvMax = new QLabel();
    niveau = new QLabel();
    exp = new QLabel();
    etageActuel = new QLabel();

    resistance->setText("Resistance : "+QString::number(joueur->ObtenirResistance()));
    nbPv->setText("Pv : "+QString::number(joueur->ObtenirPv())+"/"+QString::number(joueur->ObtenirPvMax()));
    niveau->setText("Niveau : "+QString::number(joueur->ObtenirNiveau()));
    exp->setText("Exp : " +QString::number(joueur->ObtenirXp()) + "/200");
    etageActuel->setText("Etage : "+QString::number(etage));

    infoPerso->addWidget(nomPerso);
    infoPerso->addWidget(prenomPerso);
    infoPerso->addWidget(agePerso);
    infoPerso->addWidget(taillePerso);
    infoPerso->addWidget(poidsPerso);
    infoPerso->addWidget(classePerso);

    etatPerso->addWidget(resistance);
    etatPerso->addWidget(nbPv);
    etatPerso->addWidget(niveau);
    etatPerso->addWidget(exp);

    labelEtage->addWidget(etageActuel);

    gestionInfoPerso->addLayout(infoPerso);
    gestionInfoPerso->addLayout(etatPerso);
    gestionInfoPerso->addLayout(labelEtage);


    layout = new QVBoxLayout();
    layout->addLayout(plateau);
    layout->addLayout(interface);
    layout->addLayout(gestionInfoPerso);
    setLayout(layout);
}

void Widget::afficherPlateau()
{
    // affiche joueur et case deja visité


    if(posJoueur == tresor || posJoueur == sortie || (grille[posJoueur.x()][posJoueur.y()] == PIEGE) || grille[posJoueur.x()][posJoueur.y()] == POTION || grille[posJoueur.x()][posJoueur.y()] == MONSTRE) // gerer piege et potion
    {
        if(posJoueur == tresor)
        {
            plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-color: yellow");
            etatTresor=true;
            player.setMedia(QUrl("qrc:/sons/tresorTrouver.mp3"));
            player.play();
        }
        else {
            if(posJoueur == sortie && etatTresor == true)
            {
                qDebug()<<"sortie trouver";
                etatTresor=false;
                etage++;
                player.setMedia(QUrl("qrc:/sons/Exit.wav"));
                player.play();
                etageActuel->setText("Etage : "+QString::number(etage));
                resetEtage();
            }
            else {
                if(grille[posJoueur.x()][posJoueur.y()] == PIEGE) // Si piege
                {
                    qDebug()<<"piege !!!!!!!!!";
                    plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-color: purple");
                    grille[posJoueur.x()][posJoueur.y()] = VIDE;
                    QPoint piegeASupprimer;
                    piegeASupprimer.setX(posJoueur.x());
                    piegeASupprimer.setY(posJoueur.y());
                    listePositions.removeOne(piegeASupprimer);
                    player.setMedia(QUrl("qrc:/sons/Malus.wav"));
                    player.play();
                    joueur->recevoirDegats(20);
                    nbPv->setText("Pv : "+QString::number(joueur->ObtenirPv())+"/"+QString::number(joueur->ObtenirPvMax()));
                }
                else {
                    if(grille[posJoueur.x()][posJoueur.y()] == POTION) // Si potion
                    {
                        plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-color: lightgreen");
                        grille[posJoueur.x()][posJoueur.y()] = VIDE;
                        QPoint potionASupprimer;
                        potionASupprimer.setX(posJoueur.x());
                        potionASupprimer.setY(posJoueur.y());
                        listePositions.removeOne(potionASupprimer);
                        player.setMedia(QUrl("qrc:/sons/Bonus Sound.mp3"));
                        player.play();
                        joueur->boirePotionDeVie(120);
                        nbPv->setText("Pv : "+QString::number(joueur->ObtenirPv())+"/"+QString::number(joueur->ObtenirPvMax()));
                    }
                    else {
                        if(grille[posJoueur.x()][posJoueur.y()] == MONSTRE)
                        {
                            grille[posJoueur.x()][posJoueur.y()] = VIDE;
                            QPoint monstreASupprimer;
                            monstreASupprimer.setX(posJoueur.x());
                            monstreASupprimer.setY(posJoueur.y());
                            listePositions.removeOne(monstreASupprimer);
                            plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-color: red");
                            player.setMedia(QUrl("qrc:/sons/Fight Sound.mp3"));
                            player.play();
                            Personnage *monstre = new Personnage("Mechant","Monstre",15,1.5,50,"Guerrier");
                            joueur->faireUnDuel(monstre);
                            joueur->mettreAJourNiveau(joueur,joueur->calculerGainExperience(joueur,monstre,true,etage));
                            exp->setText("Exp : "+QString::number(joueur->ObtenirXp()));
                            niveau->setText("Niveau : "+QString::number(joueur->ObtenirNiveau()));
                        }
                    }
                }
            }
        }

    }
    else {
        if((grille[posJoueur.x()][posJoueur.y()] == VIDE) || grille[posJoueur.x()][posJoueur.y()] == SORTIE)
        {

        }
        plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-color : blue");
        //plateau->itemAtPosition(posJoueur.y(),posJoueur.x())->widget()->setStyleSheet("background-image: :/images/Perso.png");
    }

}

void Widget::resetEtage()
{
    QList <QToolButton*>listeBoutons=findChildren<QToolButton*>();
    foreach(QToolButton *b, listeBoutons)
    {
        b->setStyleSheet("background-color: white");
    }

    quint32 ligne;
    quint32 colonne;
    for(ligne=0;ligne<HAUTEUR;ligne++)
    {
        for(colonne=0;colonne<LARGEUR;colonne++)
        {
            grille[ligne][colonne]=VIDE;
        }
    }

    listePositions.clear();

    tresor=DonnerPositionUnique();
    grille[tresor.x()][tresor.y()]=TRESOR;
    listePositions.append(tresor);

    sortie=DonnerPositionUnique();
    grille[sortie.x()][sortie.y()]=SORTIE;
    listePositions.append(sortie);

    posJoueur=DonnerPositionUnique();
    listePositions.append(posJoueur);

    posJoueur=DonnerPositionUnique();
    listePositions.append(posJoueur);

    nbPieges = NBPIEGES;
    nbMonstres = NBMONSTRES;
    nbPotions = NBPOTIONS;

    genererPieges();
    genererPotions();
    genererMonstres();

    afficherPlateau();
    qDebug()<<etage;
}

void Widget::genererPieges() // corriger generations de pieges, verifier la liste des pieges et faire genMonstre et genPotions et trouver le moyen de tester un QPoint en fonction de son nom si y'en a plusieurs (pieges ou potions)
{
    quint32 ligne;
    quint32 colonne;
    do
    {
        QPoint piege;
        piege = DonnerPositionUnique();
        qDebug()<<piege;
        grille[piege.x()][piege.y()]=PIEGE;
        listePositions.append(piege);
        nbPieges--;
        qtPause(50);
    }while(nbPieges!=0);
}

void Widget::genererPotions()
{
    quint32 ligne;
    quint32 colonne;
    do
    {
        QPoint potion;
        potion = DonnerPositionUnique();
        qDebug()<<potion;
        grille[potion.x()][potion.y()]=POTION;
        listePositions.append(potion);
        nbPotions--;
        qtPause(50);
    }while(nbPotions!=0);
}

void Widget::genererMonstres()
{
    quint32 ligne;
    quint32 colonne;
    do
    {
        QPoint monstre;
        monstre = DonnerPositionUnique();
        qDebug()<<monstre;
        grille[monstre.x()][monstre.y()]=MONSTRE;
        listePositions.append(monstre);
        nbMonstres--;
        qtPause(50);
    }while(nbMonstres!=0);

    int k=0;
    for(int i=0;i<LARGEUR;i++)
    {
        for(int j=0;j<HAUTEUR;j++)
        {
            if(grille[i][j] == MONSTRE)
            {
                qDebug()<<"monstre n°"<<k;
                k++;
            }
        }

    }
}

QPoint Widget::DonnerPositionUnique()
{
    QRandomGenerator gen;
    QPoint pt;
    gen.seed(QDateTime::currentMSecsSinceEpoch());
    int ligne;
    int colonne;
    do
    {
        ligne=gen.bounded(HAUTEUR);
        qtPause(20);
        colonne=gen.bounded(LARGEUR);
        qtPause(20);
        pt=QPoint(colonne,ligne);
    }while (listePositions.contains(pt));


    return pt;
}

double Widget::CalculerDistanceTresor(QPoint pos)
{
    double distance;
    int xVecteur=tresor.x()-pos.x();
    int yVecteur=tresor.y()-pos.y();
    distance=sqrt((xVecteur*xVecteur+yVecteur*yVecteur));
    return distance;
}

double Widget::CalculerDistanceSortie(QPoint pos)
{
    double distance;
    int xVecteur=sortie.x()-pos.x();
    int yVecteur=sortie.y()-pos.y();
    distance=sqrt((xVecteur*xVecteur+yVecteur*yVecteur));
    return distance;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left:
        if(posJoueur.x()-1>=LARGEUR-LARGEUR)
        {
            posJoueur.setX(posJoueur.x()-1);
            plateau->itemAtPosition(posJoueur.y(),posJoueur.x()+1)->widget()->setStyleSheet("background-color: lightgrey");
        }
        break;
    case Qt::Key_Right:
        if(posJoueur.x()+1<LARGEUR)
        {
            posJoueur.setX(posJoueur.x()+1);
            plateau->itemAtPosition(posJoueur.y(),posJoueur.x()-1)->widget()->setStyleSheet("background-color: lightgrey");
        }
        break;
    case Qt::Key_Up:
        if(posJoueur.y()-1>=HAUTEUR-HAUTEUR)
        {
            posJoueur.setY(posJoueur.y()-1);
            plateau->itemAtPosition(posJoueur.y()+1,posJoueur.x())->widget()->setStyleSheet("background-color: lightgrey");
        }
        break;
    case Qt::Key_Down :
        if(posJoueur.y()+1<HAUTEUR)
        {
            posJoueur.setY(posJoueur.y()+1);
            plateau->itemAtPosition(posJoueur.y()-1,posJoueur.x())->widget()->setStyleSheet("background-color: lightgrey");
        }
        break;
    }
    //qDebug()<<CalculerDistanceTresor(posJoueur);
    //qDebug()<<CalculerDistanceSortie(posJoueur);

    double doubleDist=0;
    if(!etatTresor)
    {
        doubleDist = CalculerDistanceTresor(posJoueur);
    }
    else {
        doubleDist = CalculerDistanceSortie(posJoueur);
    }

    QString distance;
    distance.sprintf("%+06.2f",doubleDist);
    affichageDistanceTresor->display(distance);
    afficherPlateau();
}

void Widget::on_creationPersonnage(QString classe ,QString nom,QString prenom, QString age, QString taille, QString poids, QString armeUneMainOuDeuxMainsOuiOuNon,QString choixArmeMainDroite, QString choixArmeMainGauche, QString choixArmeDeuxMains)
{

}
