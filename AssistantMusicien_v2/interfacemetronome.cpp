#include "interfacemetronome.h"
#include "ui_interfacemetronome.h"
#include <QDebug>
#include <QDesktopWidget>

InterfaceMetronome::InterfaceMetronome(Parametres(*cheminDefaut),QWidget *parent) :
    QWidget(parent),
    cheminDefaut(cheminDefaut),
    ui(new Ui::InterfaceMetronome)
{
    ui->setupUi(this);
    //Instanciation des attributs dynamiques
    pavenum = new PaveNum;
    signature = new Signature;
    nbNote = new NbNote;
    structure = new StructureRythm;
    leMetronome = new Metronome;
    //Inssertion des boutons dans le tableau + slot et labels
    for(int i=0;i<60;i++)
    {
        sub[i] = new QPushButton;
        sub[i]->setFlat(true);
        sub[i]->setIconSize(QSize(50,50));
        etatBoutonSub[i] = 0;
        connect(sub[i],&QPushButton::clicked,this,&InterfaceMetronome::onPushButtonSubSilence_clicked);
    }
    //Inssertion des boutons dans le tableau + slot
    for(int i=0;i<12;i++)
    {
        principale[i] = new QPushButton;
        principale[i]->setFlat(true);
        principale[i]->setIconSize(QSize(50,50));
        etatBoutonPrincipale[i] = 0;
        connect(principale[i],&QPushButton::clicked,this,&InterfaceMetronome::onPushButtonPrincipaleSilence_clicked);
        chiffres[i] = new QPushButton;
        chiffres[i]->setFlat(true);
    }
    //Inssertion des différentes icônes dans les tableaux
    imagesNotes[0] = QIcon("://images/NoteDoubleCrocheModifier.png");
    imagesNotes[1] = QIcon("://images/NoteCrocheModifier.png");
    imagesNotes[2] = QIcon("://images/NoteCrochePModifier.png");
    imagesNotes[3] = QIcon("://images/NoteNoirModifier.png");
    imagesNotes[4] = QIcon("://images/NoteNoirPModifier.png");
    imagesNotes[5] = QIcon("://images/NoteBlancheModifier.png");
    imagesNotes[6] = QIcon("://images/NoteBlanchePModifier.png");
    imagesNotes[7] = QIcon("://images/NoteRondeModifié.png");
    imageSilences[0] = QIcon("://images/SilenceDoubleTempsModifier.png");
    imageSilences[1] = QIcon("://images/SilenceUnDemieTempsModifier.png");
    imageSilences[3] = QIcon("://images/SilenceUnTempsModifier.png");
    imageSilences[4] = QIcon("://images/silenceEtDemieModifier.png");
    imageSilences[5] = QIcon("://images/PauseDeuxTempsModifier.png");
    imageSilences[6] = QIcon("://images/SilenceTroisTempsModifier.png");
    imageSilences[7] = QIcon("://images/PauseQuatreTempsModifier.png");
    imagesTempsFort[1] = QIcon("://images/CrocheTempsFortModifier.png");
    imagesTempsFort[3] = QIcon("://images/NoirTempsFortModifier.png");
    imagesTempsFort[4] = QIcon("://images/TempsFortNoirPModifier.png");
    imagesTempsFort[5] = QIcon("://images/BlancheTempsFortModifier.png");
    imagesTempsFort[6] = QIcon("://images/BlanchePTempsFortModifier.png");
    imagesTempsFort[7] = QIcon("://images/RondeTempsFortModifier.png");

    for(int i=0;i<7;i++)
    {
        ui->comboBoxUnite->addItem(imagesNotes[1+i],"");
    }
    ui->comboBoxUnite->setCurrentIndex(2);
    ui->comboBoxUnite->setIconSize(QSize(40,40));
    etatMetronome = 0;
    etatBoutonBpm = 0;
    etatSon = 0;
    QIntValidator *antiLettre = new QIntValidator (1,360,ui->lineEditTempo);
    ui->lineEditTempo->setValidator(antiLettre);
    //Connexion des attributs au slot conrrespondant
    connect(leMetronome,&Metronome::Prereglage,this,&InterfaceMetronome::onMetronome_Prereglage);
    connect(pavenum,&PaveNum::Valide,this,&InterfaceMetronome::onPaveNum_Valide);
    connect(nbNote,&NbNote::Valide,this,&InterfaceMetronome::onNbNote_Valide);
    connect(structure,&StructureRythm::Valide,this,&InterfaceMetronome::onStructureRythm_Valide);
    connect(signature,&Signature::Valide,this,&InterfaceMetronome::onSignature_Valide);
}

InterfaceMetronome::~InterfaceMetronome()
{
    delete ui;
}
/**
 * @brief InterfaceMetronome::GenererStructure
 * @return rien
 * @details Génére la structure rythmique principale.
 */
void InterfaceMetronome::GenererStructure()
{
    QString structureP=structure->RecupererStrucuture();
    leMetronome->ModifierStructure(structureP);
    int nbNote=structureP.count();
    //Vide le layout
    while(ui->horizontalLayoutPrincipale->count())
    {
        for(int i=0;i<ui->horizontalLayoutPrincipale->count();i++)
        {
            principale[i]->setIcon(QIcon(""));
            QWidget *w=ui->horizontalLayoutPrincipale->itemAt(i)->widget();
            QWidget *wid=ui->horizontalLayoutIndication->itemAt(i)->widget();
            w->setVisible(false);
            wid->setVisible(false);
            ui->horizontalLayoutPrincipale->removeWidget(w);
            ui->horizontalLayoutIndication->removeWidget(wid);
        }
    }
    for(int i=0;i<nbNote;i++)
    {
        if(structureP.at(i) == '7')
        {
            principale[i]->setIcon(imagesNotes[7]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        if(structureP.at(i) == '6')
        {
            principale[i]->setIcon(imagesNotes[6]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        if(structureP.at(i) == '5')
        {
            principale[i]->setIcon(imagesNotes[5]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        if(structureP.at(i) == '4')
        {
            principale[i]->setIcon(imagesNotes[4]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        if(structureP.at(i) == '3')
        {
            principale[i]->setIcon(imagesNotes[3]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        if(structureP.at(i) == '1')
        {
            principale[i]->setIcon(imagesNotes[1]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
        }
        chiffres[i]->setText(QString::number(i+1));
        ui->horizontalLayoutIndication->addWidget(chiffres[i]);
        chiffres[i]->setVisible(true);
    }
    for(int i=0;i<nbNote;i++)
    {
        etatBoutonPrincipale[i] = 0;
    }
}
/**
 * @brief InterfaceMetronome::GenererStructure
 * @return rien
 * @details Génére la structure secondaire avec
 * les subdivisions.
 */
void InterfaceMetronome::GenererSub()
{
    int nb=nbNote->RecupererNbnote();
    leMetronome->ModifierNbNote(nb);
    QString structureP = structure->RecupererStrucuture();
    leMetronome->ModifierStructure(structureP);
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    int indice;
    switch (nbMesure) {
    case 1:
        indice = 7;
        break;
    case 2:
        indice = 5;
        break;
    case 4:
        indice = 3;
        break;
    case 8:
        indice = 1;
        break;
    }
    //Vide le layout
    while(ui->horizontalLayoutSubdivision->count())
    {
        for(int i=0;i<ui->horizontalLayoutSubdivision->count();i++)
        {
            sub[i]->setIcon(QIcon(""));
            QWidget *w=ui->horizontalLayoutSubdivision->itemAt(i)->widget();
            w->setVisible(false);
            ui->horizontalLayoutSubdivision->removeWidget(w);
        }
    }
    if(nb == 1)
    {
        for(int i=0;i<nb*nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[indice]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
    }
    if(nbMesure == 8)
    {
        indice++;
    }
    if(nb == 2)
    {
        for(int i=0;i<nb*nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[indice-2]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
    }
    if(nb == 3)
    {
        for(int i=0;i<nb*nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[indice-2]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
    }
    if(nbMesure == 4)
    {
        indice++;
    }
    if(nb == 4)
    {
        for(int i=0;i<nb*nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[indice-4]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
    }
    if(nb == 5)
    {
        for(int i=0;i<nb*nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[indice-4]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
    }
    for(int i=0;i<nb*nbTemps;i++)
    {
        etatBoutonSub[i] = 0;
    }
}
/**
 * @brief InterfaceMetronome::CreerFichier
 * @return rien
 * @details Indique au métronome de créer le fichier par défaut
 */
void InterfaceMetronome::CreerFichier()
{
    QString chemin = cheminDefaut->obtenirCheminRythme();
    leMetronome->CreerFichierDefaut(chemin);
}
/**
 * @brief InterfaceMetronome::ChargerPreset
 * @param infos
 * @return rien
 * @details Indique de charger le preset au métronome.
 */
void InterfaceMetronome::ChargerPreset(QStringList infos)
{
    leMetronome->ChargerPreset(infos);
}
/**
 * @brief InterfaceMetronome::on_pushButtonEnregistrer_clicked
 * @return rien
 * @details Lance l'enregistrement du réglage actuel du métronome.
 */
void InterfaceMetronome::on_pushButtonEnregistrer_clicked()
{
    QString silenceS;
    QString silenceP;
    QString tempsFort;
    int nbZero = 0;
    int nbFort = 0;
    int nbSilence =0;
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    int nbSub=nbNote->RecupererNbnote();
    for(int i=0;i<nbTemps;i++)
    {
        switch (etatBoutonPrincipale[i]) {
        case 1:
            tempsFort.append(QString::number(i+1));
            tempsFort.append("/");
            nbFort++;
            break;
        case 2:
            silenceP.append(QString::number(i+1));
            silenceP.append("/");
            nbSilence++;
            break;
        }
    }
    for(int i=0;i<nbTemps*nbSub;i++)
    {
        switch (etatBoutonSub[i]) {
        case 0:
            nbZero++;
            break;
        case 1:
            silenceS.append(QString::number(i+1));
            silenceS.append("/");
            break;
        }
    }
    if(nbZero == nbTemps*nbSub)
    {
        silenceS.append("-1");
    }
    if(nbFort == 0)
    {
        tempsFort.append("-1");
    }
    if(nbSilence == 0)
    {
        silenceP.append("-1");
    }
    QString chemin = QFileDialog::getExistingDirectory(this, tr("Open File"),"/home");
    leMetronome->AjouterPrereglage(silenceS,silenceP,tempsFort,chemin);
}
/**
 * @brief InterfaceMetronome::on_pushButtonStructure_clicked
 * @return rien
 * @details Lance la fenêtre pour régler la structure et lui donne
 * le nombre de temps.
 */
void InterfaceMetronome::on_pushButtonStructure_clicked()
{
    structure->show();
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    structure->IndiquerSignature(nbTemps,nbMesure);
}
/**
 * @brief InterfaceMetronome::on_comboBoxUnite_currentIndexChanged
 * @param index
 * @return rien
 * @details Indique au métronome l'unité de temps choisie.
 */
void InterfaceMetronome::on_comboBoxUnite_currentIndexChanged(int index)
{
    leMetronome->ModifierUnite(index+1);
}
/**
 * @brief InterfaceMetronome::on_pushButtonPlus_clicked
 * @return rien
 * @details Le valeur du tempo est incrémenté de 1 puis
 * indiqué au métronome.
 */
void InterfaceMetronome::on_pushButtonPlus_clicked()
{
    int tempo=ui->lineEditTempo->text().toInt();
    tempo++;
    ui->lineEditTempo->setText(QString::number(tempo));
    leMetronome->ModifierBpm((60000/tempo));
}
/**
 * @brief InterfaceMetronome::on_pushButtonMoins_clicked
 * @return rien
 * @details Le valeur du tempo est décrémenté de 1 puis
 * indiqué au métronome.
 */
void InterfaceMetronome::on_pushButtonMoins_clicked()
{
    int tempo=ui->lineEditTempo->text().toInt();
    if((tempo > 0)&&(tempo != 1))
    {
        int tempo=ui->lineEditTempo->text().toInt();
        tempo--;
        ui->lineEditTempo->setText(QString::number(tempo));
        leMetronome->ModifierBpm((60000/tempo));
    }
}
/**
 * @brief InterfaceMetronome::on_pushButtonSon_clicked
 * @return rien
 * @details Indique au métronome de couper le son et modifie
 * l'image du bouton pour l'indiquer.
 */
void InterfaceMetronome::on_pushButtonSon_clicked()
{
    if(etatSon == 0)
    {
        leMetronome->ModifierVolume(0);
        etatSon++;
        ui->pushButtonSon->setIcon(QIcon("://images/noson.png"));
    }
    else
    {
        leMetronome->ModifierVolume(ui->verticalSliderVolume->value());
        etatSon = 0;
        ui->pushButtonSon->setIcon(QIcon("://images/son.png"));
    }
}
/**
 * @brief InterfaceMetronome::on_pushButtonPlay_clicked
 * @return rien
 * @details Indique au métrnome de ce lancer et modifie
 * le bouton en mode "pause" pour pouvoir l'arreter.
 */
void InterfaceMetronome::on_pushButtonPlay_clicked()
{
    if(etatMetronome == 0)
    {
        leMetronome->JouerUnRythme();
        etatMetronome++;
        ui->pushButtonPlay->setIcon(QIcon("://images/pause.png"));
    }
    else
    {
        leMetronome->ArretterRythme();
        etatMetronome = 0;
        ui->pushButtonPlay->setIcon(QIcon("://images/jouer.png"));
    }
}
/**
 * @brief InterfaceMetronome::on_pushButtonTaper_clicked
 * @return rien
 * @details L'interval de temps entre chaque impulsion est déterminé
 * puis indiqué au métronome.
 */
void InterfaceMetronome::on_pushButtonTaper_clicked()
{
    if(etatBoutonBpm == 0)
    {
        temps.restart();
        etatBoutonBpm++;
    }
    else
    {
        double msec=temps.elapsed();
        leMetronome->ModifierBpm(msec);
        msec=msec/1000;
        int bpm=60/msec;
        if(bpm > 360)
        {
            ui->lineEditTempo->setText(ui->lineEditTempo->text());
        }
        else
        {
            ui->lineEditTempo->setText(QString::number(bpm));
        }
        etatBoutonBpm = 0;
    }
}
/**
 * @brief InterfaceMetronome::on_verticalSliderVolume_valueChanged
 * @param value
 * @return rien
 * @details Le volume chosit est indiqué au métronome et afficher.
 */
void InterfaceMetronome::on_verticalSliderVolume_valueChanged(int value)
{
    leMetronome->ModifierVolume(value);
    ui->labelVolume->setText(QString::number(value)+"%");
}
/**
 * @brief InterfaceMetronome::on_pushButtonSub_clicked
 * @return rien
 * @details La fenêtre nbNote s'affiche.
 */
void InterfaceMetronome::on_pushButtonSub_clicked()
{
    nbNote->show();
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    nbNote->IndiquerNbMesure(nbMesure);
}
/**
 * @brief InterfaceMetronome::on_Metronome_Prereglage
 * @return rien
 * @details Le réglage chargé est récupéré puis appliqué
 * sur l'interface.
 */
void InterfaceMetronome::onMetronome_Prereglage()
{
    int reglages[5];
    //Récupére les paramètre du métronome
    for(int i=0;i<5;i++)
    {
        reglages[i]=leMetronome->RecupererReglage(i);
    }
    QStringList STF;
    leMetronome->RecupererSTF(STF);
    QString indiceTempsFort = STF[0];
    QString indiceSilenceP = STF[1];;
    QString indiceSilenceS = STF[2];;
    QString structureP = STF[3];;
    nbNote->NouveauNbNote(reglages[0]);
    signature->NouvelleSignature(reglages[3],reglages[2]);
    GenererSub();
    structure->NouvelleStructure(structureP);
    GenererStructure();
    if(indiceSilenceS != "-1")
    {
        int imageSilence;
        //Trouve l'image du silence correspondante selon le type de note
        for(int i=0;i<8;i++)
        {
            if(sub[0]->icon().cacheKey() == imagesNotes[i].cacheKey())
            {
                imageSilence = i;
            }
        }
        QStringList liste1 = indiceSilenceS.split('/');
        //Applique l'image du silence des subdivisions et l'applique au métronome
        for(int i=0;i<liste1.count();i++)
        {
            int indice = liste1.at(i).toInt();
            sub[indice-1]->setIcon(imageSilences[imageSilence]);
            etatBoutonSub[indice-1] = 1;
            leMetronome->MettreUnSilence(indice-1,0);
        }
    }
    if(indiceTempsFort != "-1")
    {
        QStringList liste2 = indiceTempsFort.split('/');
        //Applique l'image du temps fort et l'applique au métronome
        for(int i=0;i<liste2.count();i++)
        {
            int indice = liste2.at(i).toInt();
            principale[indice-1]->setIcon(imagesTempsFort[structureP.at(indice-1).toLatin1()-48]);
            etatBoutonPrincipale[indice-1] = 1;
            leMetronome->MettreUnTempsFort(indice-1);
        }
    }
    if(indiceSilenceP != "-1")
    {
        QStringList liste3 = indiceSilenceP.split('/');
        //Applique l'image du silence et l'applique au métronome
        for(int i=0;i<liste3.count();i++)
        {
            int indice = liste3.at(i).toInt();
            principale[indice-1]->setIcon(imageSilences[structureP.at(indice-1).toLatin1()-48]);
            etatBoutonPrincipale[indice-1] = 2;
            leMetronome->MettreUnSilence(indice-1,1);
        }
    }
    ui->toolButtonNominateur->setText(QString::number(reglages[3]));
    ui->toolButtonDenominateur->setText(QString::number(reglages[2]));
    ui->comboBoxUnite->setCurrentIndex(reglages[1]-1);
    ui->lineEditTempo->setText(QString::number(60000/reglages[4]));
}
/**
 * @brief InterfaceMetronome::on_PaveNum_Valide
 * @return rien
 * @details Le tempo du paveNum est récupéré puis indiqué
 * au métronome.
 */
void InterfaceMetronome::onPaveNum_Valide()
{
    int tempo = pavenum->RecupererBpm();
    leMetronome->ModifierBpm((60000/tempo));
    ui->lineEditTempo->setText(QString::number(tempo));
}
/**
 * @brief InterfaceMetronome::onSignature_Valide
 * @return rien
 * @details La signature rythmique est récupéré puis indiqué
 * au métronome.
 */
void InterfaceMetronome::onSignature_Valide()
{
    QString structureP;
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    leMetronome->ModifierNbTemps(nbTemps);
    leMetronome->ModifiernbMesure(nbMesure);
    leMetronome->ModifierNbNote(1);
    nbNote->IndiquerNbMesure(nbMesure);
    nbNote->NouveauNbNote(1);
    ui->toolButtonNominateur->setText(QString::number(nbTemps));
    ui->toolButtonDenominateur->setText(QString::number(nbMesure));
    while(ui->horizontalLayoutPrincipale->count())
    {
        for(int i=0;i<ui->horizontalLayoutPrincipale->count();i++)
        {
            principale[i]->setIcon(QIcon(""));
            QWidget *w=ui->horizontalLayoutPrincipale->itemAt(i)->widget();
            QWidget *wid=ui->horizontalLayoutIndication->itemAt(i)->widget();
            w->setVisible(false);
            wid->setVisible(false);
            ui->horizontalLayoutPrincipale->removeWidget(w);
            ui->horizontalLayoutIndication->removeWidget(wid);
        }
    }
    while(ui->horizontalLayoutSubdivision->count())
    {
        for(int i=0;i<ui->horizontalLayoutSubdivision->count();i++)
        {
            sub[i]->setIcon(QIcon(""));
            QWidget *w=ui->horizontalLayoutSubdivision->itemAt(i)->widget();
            w->setVisible(false);
            ui->horizontalLayoutSubdivision->removeWidget(w);
        }
    }
    switch (nbMesure) {
    case 1:
        for(int i=0;i<nbTemps;i++)
        {
            principale[i]->setIcon(imagesNotes[7]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
            structureP[i] = '7';
        }
        for(int i=0;i<nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[7]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
        break;
    case 2:
        for(int i=0;i<nbTemps;i++)
        {
            principale[i]->setIcon(imagesNotes[5]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
            structureP[i] = '5';
        }
        for(int i=0;i<nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[5]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
        break;
    case 4:
        for(int i=0;i<nbTemps;i++)
        {
            principale[i]->setIcon(imagesNotes[3]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
            structureP[i] = '3';
        }
        for(int i=0;i<nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[3]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
        break;
    case 8:
        for(int i=0;i<nbTemps;i++)
        {
            principale[i]->setIcon(imagesNotes[1]);
            ui->horizontalLayoutPrincipale->addWidget(principale[i]);
            principale[i]->setVisible(true);
            structureP[i] = '1';
        }
        for(int i=0;i<nbTemps;i++)
        {
            sub[i]->setIcon(imagesNotes[1]);
            ui->horizontalLayoutSubdivision->addWidget(sub[i]);
            sub[i]->setVisible(true);
        }
        break;
    }
    for(int i=0;i<12;i++)
    {
        etatBoutonPrincipale[i] = 0;
    }
    for(int i=0;i<60;i++)
    {
        etatBoutonSub[i] = 0;
    }
    for(int i=0;i<nbTemps;i++)
    {
        chiffres[i]->setText(QString::number(i+1));
        ui->horizontalLayoutIndication->addWidget(chiffres[i]);
        chiffres[i]->setVisible(true);
    }
    leMetronome->ModifierStructure(structureP);
    structure->NouvelleStructure(structureP);
}
/**
 * @brief InterfaceMetronome::onNbnote_Valide
 * @return rien
 * @details Le nombre de note pour la subdivision est récupéré
 * puis indiqué au métronome et l'affiche sur sur l'interface
 */
void InterfaceMetronome::onNbNote_Valide()
{
    GenererSub();
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    for(int i=0;i<nbTemps;i++)
    {
        switch (etatBoutonPrincipale[i]) {
        case 1:
            leMetronome->MettreUnTempsFort(i);
            break;
        case 2:
            leMetronome->MettreUnSilence(i,1);
            break;
        }
     }
}
/**
 * @brief InterfaceMetronome::onStructureRythm_Valide
 * @return rien
 * @details La stucture rythmique est récupéré puis indiqué
 * métronome et l'affiche sur l'interface.
 */
void InterfaceMetronome::onStructureRythm_Valide()
{
    GenererStructure();
    int nbTemps;
    int nbMesure;
    int note;
    signature->RecupererSignature(nbTemps,nbMesure);
    note = nbNote->RecupererNbnote();
    for(int i=0;i<nbTemps*note;i++)
    {
        if(etatBoutonSub[i] == 1)
        {
            leMetronome->MettreUnSilence(i,0);
        }
    }
}
/**
 * @brief InterfaceMetronome::onPushButtonSubSilence_clicked
 * @return rien
 * @details Le bouton appuyé est récupéré puis l'icone est modifié
 * pour indiquer un silence et remet la note de base
 * au bout du deuxième appui.
 */
void InterfaceMetronome::onPushButtonSubSilence_clicked()
{
    QPushButton *b=qobject_cast<QPushButton*>(sender());
    int nbSub=nbNote->RecupererNbnote();
    int indice;
    int nbTemps;
    int nbMesure;
    signature->RecupererSignature(nbTemps,nbMesure);
    if(nbSub != 0)
    {
        for(int i=0;i<nbSub*nbTemps;i++)
        {
            if(b == sub[i])
            {
                indice=i;
            }
        }
    }
    int indice2;
    switch (nbMesure) {
    case 1:
        indice2 = 7;
        break;
    case 2:
        indice2 = 5;
        break;
    case 4:
        indice2 = 3;
        break;
    case 8:
        indice2 = 1;
        break;
    }
    if(etatBoutonSub[indice] == 0)
    {
        if(nbSub == 1)
        {
            b->setIcon(imageSilences[indice2]);
        }
        if(nbMesure == 8)
        {
            indice2++;
        }
        if((nbSub == 2) || (nbSub == 3))
        {
            b->setIcon(imageSilences[indice2-2]);
        }
        if(nbMesure == 4)
        {
            indice2++;
        }
        if((nbSub == 4) || (nbSub == 5))
        {
            b->setIcon(imageSilences[indice2-4]);
        }
        leMetronome->MettreUnSilence(indice,0);
        etatBoutonSub[indice]++;
    }
    else
    {
        if(nbSub == 1)
        {
            b->setIcon(imagesNotes[indice2]);
        }
        if(nbMesure == 8)
        {
            indice2++;
        }
        if((nbSub == 2) || (nbSub == 3))
        {
            b->setIcon(imagesNotes[indice2-2]);
        }
        if(nbMesure == 4)
        {
            indice2++;
        }
        if((nbSub == 4) || (nbSub == 5))
        {
            b->setIcon(imagesNotes[indice2-4]);
        }
        leMetronome->EnleverSilence(indice,0);
        etatBoutonSub[indice] = 0;
    }
}
/**
 * @brief InterfaceMetronome::onPushButtonPrincipaleSilence_clicked
 * @return rien
 * @details Le bouton appuyé est récupéré puis l'icone est modifié
 * pour indiquer un temps fort ou un silence et remet la note de base
 * au bout du troisième appui.
 */
void InterfaceMetronome::onPushButtonPrincipaleSilence_clicked()
{
    QPushButton *b=qobject_cast<QPushButton*>(sender());

    QString structureP=structure->RecupererStrucuture();
    int nbNote=structureP.count();
    int indice;
    for(int i=0;i<nbNote;i++)
    {
        if(b == principale[i])
        {
            indice=i;
        }
    }
    if(etatBoutonPrincipale[indice] == 0)
    {
        if(structureP.at(indice) == '1')
        {
            b->setIcon(imagesTempsFort[1]);
        }
        if(structureP.at(indice) == '3')
        {
            b->setIcon(imagesTempsFort[3]);
        }
        if(structureP.at(indice) == '4')
        {
            b->setIcon(imagesTempsFort[4]);
        }
        if(structureP.at(indice) == '5')
        {
            b->setIcon(imagesTempsFort[5]);
        }
        if(structureP.at(indice) == '6')
        {
            b->setIcon(imagesTempsFort[6]);
        }
        if(structureP.at(indice) == '7')
        {
            b->setIcon(imagesTempsFort[7]);
        }
        leMetronome->MettreUnTempsFort(indice);
    }
    if(etatBoutonPrincipale[indice] == 1)
    {
        if(structureP.at(indice) == '1')
        {
            b->setIcon(imageSilences[1]);
        }
        if(structureP.at(indice) == '3')
        {
            b->setIcon(imageSilences[3]);
        }
        if(structureP.at(indice) == '4')
        {
            b->setIcon(imageSilences[4]);
        }
        if(structureP.at(indice) == '5')
        {
            b->setIcon(imageSilences[5]);
        }
        if(structureP.at(indice) == '6')
        {
            b->setIcon(imageSilences[6]);
        }
        if(structureP.at(indice) == '7')
        {
            b->setIcon(imageSilences[7]);
        }
        leMetronome->MettreUnSilence(indice,1);
    }
    if(etatBoutonPrincipale[indice] == 2)
    {
        if(structureP.at(indice) == '1')
        {
            b->setIcon(imagesNotes[1]);
        }
        if(structureP.at(indice) == '3')
        {
            b->setIcon(imagesNotes[3]);
        }
        if(structureP.at(indice) == '4')
        {
            b->setIcon(imagesNotes[4]);
        }
        if(structureP.at(indice) == '5')
        {
            b->setIcon(imagesNotes[5]);
        }
        if(structureP.at(indice) == '6')
        {
            b->setIcon(imagesNotes[6]);
        }
        if(structureP.at(indice) == '7')
        {
            b->setIcon(imagesNotes[7]);
        }
        leMetronome->EnleverSilence(indice,1);
    }
    etatBoutonPrincipale[indice] = (etatBoutonPrincipale[indice]+ 1)%3;
}
/**
 * @brief InterfaceMetronome::on_pushButtonTempo_clicked
 * @return rien
 * @details La fenêtre pavenum est affiché.
 */
void InterfaceMetronome::on_pushButtonTempo_clicked()
{
    pavenum->show();
}

void InterfaceMetronome::on_lineEditTempo_textChanged(const QString &arg1)
{
    if(ui->lineEditTempo->text().count()>0)
    {
        leMetronome->ModifierBpm((60000/arg1.toInt()));
        ui->lineEditTempo->setText(QString::number(arg1.toInt()));
    }
}
/**
 * @brief InterfaceMetronome::on_toolButtonNominateur_clicked
 * @return rien
 * @details La fenêtre de la signature est affiché.
 */
void InterfaceMetronome::on_toolButtonNominateur_clicked()
{
    signature->show();
}
/**
 * @brief InterfaceMetronome::on_toolButtonDenominateur_clicked
 * @return rien
 * @details La fenêtre de la signature est affiché.
 */
void InterfaceMetronome::on_toolButtonDenominateur_clicked()
{
    signature->show();
}
