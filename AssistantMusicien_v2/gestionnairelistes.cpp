#include "gestionnairelistes.h"
#include "ui_gestionnairelistes.h"


void qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}

GestionnaireListes::GestionnaireListes(AccesBdd *_bdd, LecteurPartitions *_lecteurPartition, LecteurAudio *_lecteurAudio, QWidget *parent) :
    QWidget(parent),
    lecteurPartitions(_lecteurPartition),
    lecteurAudio(_lecteurAudio),
    accesBdd(_bdd),
    ui(new Ui::GestionnaireListes)
{
    ui->setupUi(this);


    parametres = new Parametres();
    actualiserCheminsRepertoires();

    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setDisabled(true);

    ui->pushButtonSauvegarderConcert->setDisabled(true);

    ui->lineEditNom->setDisabled(true);
    ui->lineEditInterprete->setDisabled(true);
    ui->lineEditTempo->setDisabled(true);
    ui->lineEditDuree->setDisabled(true);
    ui->lineEditTonalite->setDisabled(true);
    ui->textEditNote->setDisabled(true);

    ui->dateEditDateConcert->setDate(QDate::currentDate());

    ui->pushButtonValiderLesModifications->setVisible(false);


    player = new QMediaPlayer();
    playlist = new QMediaPlaylist();

    if(accesBdd->verifierBdd())
    {
        setup();
    }
}

GestionnaireListes::~GestionnaireListes()
{
    delete ui;
}

/**
 * @brief GestionnaireListes::afficherListeMusique
 * @details Vide la liste de musique pour l'actualiser avec listeTitre
 */
void GestionnaireListes::afficherListeMusique()
{
    ui->listWidgetListeMusique->clear();

    foreach(QString titre, listeTitre)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }
}

/**
 * @brief GestionnaireListes::afficherListeSet
 * @details Vide la liste de set et l'actualise avec leConcert
*/
void GestionnaireListes::afficherListeSet()
{
    /*
    int i=0;
    while(i < ui->listWidgetAffichageSet->count())
    {
        ui->listWidgetAffichageSet->takeItem(i++);
    }*/

    ui->listWidgetAffichageSet->clear();
    foreach(QString titre, leConcert)
    {
        ui->listWidgetAffichageSet->addItem(titre);
    }
    ui->lineEditNbTitres->setText(QString::number(ui->listWidgetAffichageSet->count()));
}
/**
 * @brief GestionnaireListes::afficherListeSetStockesBdd
 * @param listeSet
 * @details Affiche dans le comboBoxSet la liste des sets présent dans l'application
 */
void GestionnaireListes::afficherListeSetStockesBdd(QList<QString> listeSet)
{
    for(int i=0;i<ui->comboBoxListeSet->count();i++)            // Ne vide pas tout
    {
        ui->comboBoxListeSet->removeItem(i);
    }
    //ui->comboBoxListeSet->clear();                            // Fais planter
    ui->comboBoxListeSet->addItem("Ouvrir un set");
    ui->comboBoxListeSet->addItems(listeSet);


}
/**
 * @brief GestionnaireListes::ExtraireNomFichier
 * @param _chemin
 * @details Extrait le nom d'un fichier du chemin de ce dernier
 * @return le nom du fichier
 */
QString GestionnaireListes::ExtraireNomFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    return leNom;
}
/**
 * @brief GestionnaireListes::DecomposerNomFichier
 * @param _chemin
 * @details Extrait le titre d'une oeuvre dans le format nomInterprete - nomTitre,
 * sinon lui donne comme nom le premier avant un caractère spécial dans le nom de fichier,
 * sinon prend le nom de fichier.
 * @return le nom du titre
 */
QString GestionnaireListes::DecomposerNomFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    QString nom;


    if(leNom.indexOf(" - ") != -1) // Cas où le fichier est au bon format (nomTitre - interprete)
    {
        QStringList list1 = leNom.split(" - ");
        if(list1.length()==2)
        {
            nom = list1[1];
            list1 = nom.split('.');
            nom = list1[0];
        }
        else {

            nom = list1[0];
        }
    }
    else { // S'il n'es pas au bon format
        if(leNom.indexOf('-')>0)
        {
            nom=leNom.left(leNom.indexOf('-'));
        }
        else
        {
            int indice = leNom.indexOf('.');
            if(indice > 0)
            {
                nom=leNom.left(indice);
            }
            else
            {
                indice = leNom.indexOf('_');
                if(indice > 0)
                {
                    nom=leNom.left(indice);
                }
                else {
                    indice = leNom.indexOf(' . ');
                    if(indice >0)
                    {
                        nom=leNom.left(indice);
                    }
                    else {
                        nom=leNom;
                    }
                }
            }
        }
    }
    return nom;
}
/**
 * @brief GestionnaireListes::DecomposerInterpreteFichier
 * @param _chemin
 * @details Extrait l'interprete d'une oeuvre dans le format nomInterprete - nomTitre
 * Sinon si le nom du fichier n'es pas au bon format, l'interprete prend le nom de fichier pour nom (A améliorer comme pour le nomTitre)
 * @return
 */
QString GestionnaireListes::DecomposerInterpreteFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    QString interprete;

    if(leNom.indexOf(" - ") != -1) // Cas où le fichier est au bon format (Interprete - nomTitre)
    {
        QStringList list1 = leNom.split(" - ");
        if(list1.length()==2)
        {
            interprete = list1[0];
        }
        else {
            interprete = list1[0];
        }
    }
    else { // S'il n'es pas au bon format
        if(leNom.indexOf('-')>0)
        {
            interprete=leNom.right(leNom.indexOf('-'));
            if(interprete.count('.')>0)
            {
                interprete = interprete.left(interprete.lastIndexOf('.'));
            }
        }
        else
        {
            int indice = leNom.indexOf('.');
            if(indice > 0)
            {
                if(leNom.count('.') > 1)
                {
                    interprete=leNom.left(leNom.lastIndexOf('.'));
                }
                else {
                    interprete = leNom.left(indice);
                }
            }
            else
            {
                indice = leNom.indexOf('_');
                if(indice > 0)
                {
                    interprete=leNom.right(indice);
                }
                else {
                    indice = leNom.indexOf(' . ');
                    if(indice >0)
                    {
                        interprete=leNom.right(indice);
                    }
                    else {
                        interprete=leNom;
                    }
                }
            }
        }
    }

    return interprete;
}

void GestionnaireListes::actualiserCheminsRepertoires()
{
    cheminRepertoireAudio = parametres->obtenirCheminAudio();
    cheminRepertoirePartition = parametres->obtenirCheminPartition();
    cheminRepertoireEnregistrement = parametres->obtenirCheminEnregistrement();
    cheminRepertoireRythme = parametres->obtenirCheminRythme();
}

void GestionnaireListes::setup()
{
    listeTitre.clear();
    listeTitre = accesBdd->obtenirListeTitre();
    afficherListeMusique();

    /*QList <QString> listeSetDansBdd;/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    listeSetDansBdd= accesBdd->obtenirListeSetsDansBdd();
    afficherListeSetStockesBdd(listeSetDansBdd);*/
}

QString GestionnaireListes::ConvertirTempsEnHeuresMinutesSecondes(qint64 temps)
{
    QString retour;
    qint64 heure=temps / 3600;
    qint64 minute=((temps % 3600)/60);
    qint64 seconde=((temps%3600)%60);
    QTime time(heure,minute,seconde);
    if(heure>0)
        retour = time.toString();
    else
        retour = time.toString("mm:ss");

    return retour;
}

void GestionnaireListes::resizeEvent(QResizeEvent *event)
{
    /*QSize tailleOrganiseur = event->size() ;
    QRect  rect = ui->listWidgetAffichageSet->geometry();
    int largeurOrganisation = tailleOrganiseur.width() - rect.left() - 30;
    int hauteurOrganisation = rect.height();
    ui->listWidgetAffichageSet->resize(largeurOrganisation,hauteurOrganisation);
    ui->listWidgetAffichageSet->resize(largeurOrganisation-140,hauteurOrganisation-90);*/
    //qDebug()<<event;
}

/**
 * @brief GestionnaireListes::on_pushButtonNouveauConcert_clicked
 * @details Lors de l'appui sur le bouton Nouveau Concert, active la fenêtre d'orgaisation des sets, active le bouton de sauvegarde de sets et vide la liste set courante.
 */
void GestionnaireListes::on_pushButtonNouveauConcert_clicked()
{
    ui->stackedWidget->setDisabled(false);
    ui->pushButtonSauvegarderConcert->setDisabled(false);
    ui->dateEditDateConcert->setDate(QDate::currentDate());
    leConcert.clear();
    ui->lineEditNbTitres->clear();
    afficherListeSet();
    listeTitre = accesBdd->obtenirListeTitre();
    afficherListeMusique();
}
/**
 * @brief GestionnaireListes::on_pushButtonNote_clicked
 * @details Lors de l'appui sur le bouton "Note" , dévérouille textEditNote pour écrire pouvoir écrire une note sur l'oeuvre que l'on ajoute ou modifie.
 */
void GestionnaireListes::on_pushButtonNote_clicked()
{
    ui->textEditNote->setDisabled(false);
    ui->textEditNote->clear();
}
/**
 * @brief GestionnaireListes::on_pushButtonAjouter_clicked
 * @details Lors de l'appui sur le bouton "Ajouter", visible dans l'index 1 du stackedWidget, recupère les informations des différents
 * champs relatant de l'oeuvre que le musicien ajoute. Ajoute l'oeuvre à la base de donnée et copie les fichiers dans les
 * fichiers de l'application.
 * Retourne à l'index 0 du stackedWidget et vide les gens de l'index 1.
 */
void GestionnaireListes::on_pushButtonAjouter_clicked()
{
    if(ui->lineEditCheminFichierAudio->text() > 0 && ui->lineEditNom->text() > 0 && ui->lineEditInterprete->text() > 0)
    {
        ui->stackedWidget->setCurrentIndex(0);
        ui->textEditNote->setDisabled(true);

        actualiserCheminsRepertoires();

        // copier les fichiers dans les fichiers de l'appli via les chemins recuperés

        // copie audio

        QString repertoireInterpreteAudio = cheminRepertoireAudio +ui->lineEditInterprete->text();
        if(!QFile::exists(repertoireInterpreteAudio))
        {
            QDir dir(cheminRepertoireAudio);
            dir.mkdir(repertoireInterpreteAudio);
        }

        QString cheminEnregistrementAudio = repertoireInterpreteAudio+"/"+ExtraireNomFichier(ui->lineEditCheminFichierAudio->text());
        QFile::copy(ui->lineEditCheminFichierAudio->text(),cheminEnregistrementAudio);

        // copie partition
        if(ui->lineEditCheminFichierPartition->text()>0)
        {

            QString repertoireInterpretePartition = cheminRepertoirePartition+ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpretePartition))
            {
                QDir dir(cheminRepertoirePartition);
                dir.mkdir(repertoireInterpretePartition);
            }
            QString cheminEnregistrementPartition=repertoireInterpretePartition+"/"+ExtraireNomFichier(ui->lineEditCheminFichierPartition->text());
            QFile::copy(ui->lineEditCheminFichierPartition->text(),cheminEnregistrementPartition);
            leTitre->DonnerChemin(cheminEnregistrementPartition,Titre::PARTITION);
        }

        // copie enregistrement

        if(ui->lineEditCheminFichierEnregistrement->text()>0)
        {
            QString repertoireInterpreteEnregistrement = cheminRepertoireEnregistrement + ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpreteEnregistrement))
            {
                QDir dir(cheminRepertoireEnregistrement);
                dir.mkdir(repertoireInterpreteEnregistrement);
            }
            QString cheminEnregistrementEnregistrement=repertoireInterpreteEnregistrement+"/"+ExtraireNomFichier(ui->lineEditCheminFichierEnregistrement->text());
            QFile::copy(ui->lineEditCheminFichierEnregistrement->text(),cheminEnregistrementEnregistrement);
            leTitre->DonnerChemin(cheminEnregistrementEnregistrement,Titre::ENREGISTREMENT);
        }
        // copie rythme

        if(ui->lineEditCheminFichierRythme->text()>0)
        {
            QString repertoireInterpreteRythme = cheminRepertoireRythme + ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpreteRythme))
            {
                QDir dir(cheminRepertoireRythme);
                dir.mkdir(repertoireInterpreteRythme);

            }
            QString cheminEnregistrementRythme=repertoireInterpreteRythme+"/"+ExtraireNomFichier(ui->lineEditCheminFichierRythme->text());
            QFile::copy(ui->lineEditCheminFichierRythme->text(),cheminEnregistrementRythme);
            leTitre->DonnerChemin(cheminEnregistrementRythme,Titre::RYTHME);
        }

        // sauvegarder leTitre dans la base de donnée

        leTitre->DonnerNom(ui->lineEditNom->text());
        leTitre->DonnerInterprete(ui->lineEditInterprete->text());
        leTitre->DonnerTempo(ui->lineEditTempo->text());
        leTitre->DonnerDuree(ui->lineEditDuree->text());
        leTitre->DonnerTonalite(ui->lineEditTonalite->text());
        leTitre->DonnerChemin(cheminEnregistrementAudio,Titre::AUDIO);
        leTitre->DonnerNote(ui->textEditNote->toPlainText());

        accesBdd->enregistrerTitre(leTitre);

        // Actualisation de la liste de musiques de l'application
        listeTitre = accesBdd->obtenirListeTitre();
        afficherListeMusique();

        // Vidage des champs
        ui->lineEditNom->clear();
        ui->lineEditInterprete->clear();
        ui->lineEditCheminFichierAudio->clear();
        ui->lineEditCheminFichierPartition->clear();
        ui->lineEditCheminFichierEnregistrement->clear();
        ui->lineEditCheminFichierRythme->clear();
        ui->lineEditDuree->clear();
        ui->lineEditTempo->clear();
        ui->lineEditTonalite->clear();
        ui->textEditNote->clear();
    }
    else {
        QMessageBox message;
        message.setText("Veuillez remplir au moins les champs [Nom] [Interprète] [Chemin du fichier audio]");
        message.exec();
    }

}
/**
 * @brief GestionnaireListes::on_pushButtonAjoutFichiers_clicked
 * @details Change l'index du stackedWidget en l'index 1, où se situe l'interface de gestion de fichiers
 * Créer un objet Titre qui représente l'oeuvre que le musicien va ajouter et qui sera ajouté à la base de donnée.
 */
void GestionnaireListes::on_pushButtonAjoutFichiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    leTitre= new Titre();
}

/**
 * @brief GestionnaireListes::on_pushButtonEnvoyerMusique_clicked
 * @details Lors de l'appui sur le bouton "EnvoyerMusique", envoi l'item selectionné dans le set courant.
 */
void GestionnaireListes::on_pushButtonEnvoyerMusique_clicked()
{
    QList<QListWidgetItem*> selection = ui->listWidgetListeMusique->selectedItems();

    if ( selection.isEmpty() )
    {
        QMessageBox::information ( this, "Information", "Veuillez selectionner un élément dans la liste des musiques" );
    }
    else
    {
        foreach ( QListWidgetItem* element, selection ) {
            leConcert.append(element->text());
            listeTitre.removeOne(element->text());
        }
        afficherListeMusique();
        afficherListeSet();
    }
}
/**
 * @brief GestionnaireListes::on_listWidgetListeMusique_itemClicked
 * @param item
 * @details Lors d'un clique sur un item de la liste musique, sauvegarde le texte de l'item dans l'attribut "itemSelectionner"
 */
void GestionnaireListes::on_listWidgetListeMusique_itemClicked(QListWidgetItem *item)
{
    if(ui->listWidgetAffichageSet->isItemSelected(ui->listWidgetAffichageSet->currentItem()))
    {
        ui->listWidgetAffichageSet->setCurrentItem(nullptr);
    }
    itemSelectionner = item->text();
}
/**
 * @brief GestionnaireListes::on_listWidgetListeMusique_itemDoubleClicked
 * @param item
 * @details Lors d'un double clique sur un item de la liste musique, ajoute l'item selectionné dans la liste set courante et la retire dans la liste des musiques
 */

void GestionnaireListes::on_listWidgetListeMusique_itemDoubleClicked(QListWidgetItem *item)
{
    int index = ui->listWidgetListeMusique->row(item);
    listeTitre.removeAt(index);
    leConcert.append(item->text());
    afficherListeMusique();
    afficherListeSet();
}
/**
 * @brief GestionnaireListes::on_listWidgetAffichageSet_itemDoubleClicked
 * @param item
 * @details Lors d'un double clique sur un item dans la liste du set courant, retire l'item du set et l'ajoute à la liste des musiques
 */
void GestionnaireListes::on_listWidgetAffichageSet_itemDoubleClicked(QListWidgetItem *item)
{
    int index = ui->listWidgetAffichageSet->row(item);
    leConcert.removeAt(index);
    listeTitre.append(item->text());
    afficherListeMusique();
    afficherListeSet();
}
/**
 * @brief GestionnaireListes::on_pushButtonObtenirCheminFichierAudio_clicked
 * @details Lors d'un clique sur le bouton "ObtenirCheminFichierAudio", affiche un pop-up d'arborescence des fichiers où le musicien peut
 * choisir un fichier. Lorsqu'il le choisi, ajoute son chemin au lineEditCheminAudio , décompose le nom du fichier pour remplir le lineEditNom et le lineEditInterprete.
 */
void GestionnaireListes::on_pushButtonObtenirCheminFichierAudio_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Chemin du fichier audio",
                                                   "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                   "Fichier Audio (*.mp3)");

    if(!fichier.isEmpty())
    {
        ui->lineEditCheminFichierAudio->setText(fichier);

        // Decomposer le nom pour garder le nom du fichier

        if(ui->pushButtonAjouter->isVisible())
        {
            ui->lineEditNom->setText(DecomposerNomFichier(ui->lineEditCheminFichierAudio->text()));
            ui->lineEditInterprete->setText(DecomposerInterpreteFichier(ui->lineEditCheminFichierAudio->text()));
        }


        ui->lineEditNom->setDisabled(false);
        ui->lineEditInterprete->setDisabled(false);
        ui->lineEditTempo->setDisabled(false);
        ui->lineEditDuree->setDisabled(false);
        ui->lineEditTonalite->setDisabled(false);
        ui->textEditNote->setDisabled(false);
    }
}

/**
 * @brief GestionnaireListes::on_pushButtonObtenirCheminFichierPartition_clicked
* @details  Lors d'un clique sur le bouton "ObtenirCheminFichierPartition", affiche un pop-up d'arborescence des fichiers où le musicien peut
 * choisir un fichier. Lorsqu'il le choisi, ajoute son chemin au lineEditCheminPartition.
*/
void GestionnaireListes::on_pushButtonObtenirCheminFichierPartition_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Chemin de la partition",
                                                   "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                   "Fichier Partition (*.pdf)");

    if(!fichier.isEmpty())
    {
        ui->lineEditCheminFichierPartition->setText(fichier);
    }
}
/**
 * @brief GestionnaireListes::on_pushButtonAnnuler_clicked
 * @details Lors d'un clique sur le bouton "Annuler" , vide les champs que le musicien peut avoir potentioellement remplit et reviens à l'index 1 du stackedWidget,
 * l'index d'organisation du set.
 */
void GestionnaireListes::on_pushButtonAnnuler_clicked()
{
    ui->lineEditNom->clear();
    ui->lineEditInterprete->clear();
    ui->lineEditCheminFichierAudio->clear();
    ui->lineEditCheminFichierPartition->clear();
    ui->lineEditCheminFichierEnregistrement->clear();
    ui->lineEditCheminFichierRythme->clear();
    ui->lineEditDuree->clear();
    ui->lineEditTempo->clear();
    ui->lineEditTonalite->clear();
    ui->textEditNote->clear();

    ui->stackedWidget->setCurrentIndex(0);

    ui->pushButtonValiderLesModifications->setVisible(false);
    ui->pushButtonAjouter->setVisible(true);
}
/**
 * @brief GestionnaireListes::on_lineEditRechercheParTitre_textChanged
 * @param arg1
 * @details Lorsque le musicien entre du texte dans le lineEditRechercheParTitre, lance une requête vers la base de donnée pour filtrer la liste de titre
 * avec le texte entré par le musicien et affiche cette nouvelle liste filtré par nom de titre.
 * ( Une amélioration peut être de filtrer à partir de la liste
 * déja présente dans le listWidgetListeMusique pour ne pas remettre dans la listeMusique les titres déjà présent dans le set et qui ne sont donc
 * plus présent dans la listeMusique).
 */
void GestionnaireListes::on_lineEditRechercheParTitre_textChanged(const QString &arg1)
{
    QList <QString> liste = accesBdd->obtenirListeTitreFiltreParTitre(arg1);

    ui->listWidgetListeMusique->clear();

    foreach(QString titre, liste)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }

    /*
    QList <int> listeIndex;
    QList <QString> listeTitreWidgetListeMusique;
    int l=0;

    for(int i=0;i<ui->listWidgetListeMusique->count();i++)
    {
        listeTitreWidgetListeMusique.append(ui->listWidgetListeMusique->item(i)->text());
    }

    do
    {
        l = listeTitreWidgetListeMusique.indexOf(arg1,l);
        listeIndex.append(l);
        qDebug()<<l;
    }
    while(l!=-1);
qDebug()<<"clear";
    ui->listWidgetListeMusique->clear();
    foreach(int index,listeIndex)
    {
        //ui->listWidgetListeMusique->addItem(listeTitreWidgetListeMusique.at(index));
        ui->listWidgetListeMusique->addItem("bonjour");
    }*/
}
/**
 * @brief GestionnaireListes::on_lineEditRechercheParInterprete_textChanged
 * @param arg1
 * @details Lorsque le musicien entre du texte dans le lineEditRechercheParInterprete, lance une requête vers la base de donnée pour filtrer la liste de titre
 * en fonction du texte entré par le musicien qui correspond à l'interprète et affiche la nouvelle liste filtré en fonction de l'interprète dans
 * la liste des musiques.
 * (Même amélioration possible que pour le filtre par titre)
 */
void GestionnaireListes::on_lineEditRechercheParInterprete_textChanged(const QString &arg1)
{
    QList <QString> liste = accesBdd->obtenirListeTitreFiltreParInterprete(arg1);

    ui->listWidgetListeMusique->clear();

    foreach(QString titre, liste)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }
}

/**
 * @brief GestionnaireListes::on_pushButtonObtenirCheminEnregistrement_clicked
 * @details  Lors d'un clique sur le bouton "ObtenirCheminFichierEnregistrement", affiche un pop-up d'arborescence des fichiers où le musicien peut
 * choisir un fichier. Lorsqu'il le choisi, ajoute son chemin au lineEditCheminEnregistrement.
 */
void GestionnaireListes::on_pushButtonObtenirCheminEnregistrement_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Chemin de l'enregistrement",
                                                   "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                   "Fichier Enregistrement (*.mp3)");

    if(!fichier.isEmpty())
    {
        ui->lineEditCheminFichierEnregistrement->setText(fichier);
    }
}

/**
 * @brief GestionnaireListes::on_pushButtonObtenirCheminFichierRythme_clicked
 * @details  Lors d'un clique sur le bouton "ObtenirCheminFichierRythme", affiche un pop-up d'arborescence des fichiers où le musicien peut
 * choisir un fichier. Lorsqu'il le choisi, ajoute son chemin au lineEditCheminRythme.
 */
void GestionnaireListes::on_pushButtonObtenirCheminFichierRythme_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Chemin du fichier rythme",
                                                   "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                   "Fichier Rythme (*.ini)");

    if(!fichier.isEmpty())
    {
        ui->lineEditCheminFichierRythme->setText(fichier);
    }
}

/**
 * @brief GestionnaireListes::on_pushButtonModifierTitre_clicked
 * @details Change l'onglet de l'interface, rempli les champs nom, interprete, tempo, duree, tonalite et chemin avec ceux déja enregistré sur la base de donnée.
 * L'utilisateur peut changer les informations puis valider pour enregistrer les changements.
 */

void GestionnaireListes::on_pushButtonModifierTitre_clicked()
{

    // Remplir les champs avec les données deja enregistrés

    //QList<QListWidgetItem*> selection = ui->listWidgetListeMusique->selectedItems();

    if (itemSelectionner.isEmpty())
    {
        QMessageBox::information ( this, "Information", "Veuillez selectionner un élément dans la liste des musiques" );
    }
    else
    {
        titreAmodifier = new Titre();
        /*foreach ( QListWidgetItem* element, selection ) {
            titreAmodifier = accesBdd->obtenirTitreAModifier(itemSelectionner);
        }*/
        titreAmodifier = accesBdd->obtenirTitreAModifier(itemSelectionner);

        qDebug()<<"TITRE A MODIFIER RECUPERER CHEMIN AUDIO: "<<titreAmodifier->ObtenirAudio();
        ui->pushButtonValiderLesModifications->setVisible(true);
        ui->pushButtonAjouter->setVisible(false);

        ui->lineEditNom->setDisabled(false);
        ui->lineEditInterprete->setDisabled(false);
        ui->lineEditNom->setReadOnly(true);
        ui->lineEditInterprete->setReadOnly(true);

        ui->lineEditTempo->setDisabled(false);
        ui->lineEditDuree->setDisabled(false);
        ui->lineEditTonalite->setDisabled(false);
        ui->textEditNote->setDisabled(false);

        ui->lineEditNom->setText(titreAmodifier->ObtenirNom());
        ui->lineEditInterprete->setText(titreAmodifier->ObtenirInterprete());
        ui->lineEditTempo->setText(titreAmodifier->ObtenirTempo());
        ui->lineEditDuree->setText(titreAmodifier->ObtenirDuree());
        ui->lineEditTonalite->setText(titreAmodifier->ObtenirTonalite());
        ui->lineEditCheminFichierAudio->setText(titreAmodifier->ObtenirAudio());
        ui->lineEditCheminFichierPartition->setText(titreAmodifier->ObtenirPartition());
        ui->lineEditCheminFichierEnregistrement->setText(titreAmodifier->ObtenirEnregistrement());
        ui->lineEditCheminFichierRythme->setText(titreAmodifier->ObtenirRythme());
        ui->textEditNote->setText(titreAmodifier->ObtenirNote());

        ui->stackedWidget->setCurrentIndex(1);
    }

}
/**
 * @brief GestionnaireListes::on_pushButtonValiderLesModifications_clicked
 * @details Lors d'un clique sur le bouton "ValiderLesModifications", récupère les informations des champs et si elle ont changer, modifie les informations de la base de donnée
 * et copie les nouveaux fichiers dans les fichiers de l'application. Retourne ensuite à l'index 0 du stackedWidget et vide les champs de l'index 1.
 */
void GestionnaireListes::on_pushButtonValiderLesModifications_clicked()
{
    // sauvegarder leTitre dans la base de donnée

    titreAmodifier = accesBdd->obtenirTitreAModifier(ui->lineEditNom->text() + " - " + ui->lineEditInterprete->text());

    leTitre = new Titre();
    leTitre->DonnerNom(ui->lineEditNom->text());
    leTitre->DonnerInterprete(ui->lineEditInterprete->text());
    leTitre->DonnerTempo(ui->lineEditTempo->text());
    leTitre->DonnerDuree(ui->lineEditDuree->text());
    leTitre->DonnerTonalite(ui->lineEditTonalite->text());
    leTitre->DonnerNote(ui->textEditNote->toPlainText());

    actualiserCheminsRepertoires();

    if(ui->lineEditCheminFichierAudio->text() != titreAmodifier->ObtenirAudio())
    {
        QString repertoireInterpreteAudio = cheminRepertoireAudio +ui->lineEditInterprete->text();
        QString cheminEnregistrementAudio = repertoireInterpreteAudio+"/"+titreAmodifier->ObtenirNom()+ " - " +titreAmodifier->ObtenirInterprete()+".mp3";
        leTitre->DonnerChemin(cheminEnregistrementAudio,Titre::AUDIO);
        //if(QFile::remove(titreAmodifier->ObtenirAudio()))
        //{
        if(!QFile::exists(repertoireInterpreteAudio))
        {
            QDir dir(cheminRepertoireRythme);
            dir.mkdir(repertoireInterpreteAudio);
        }
        QFile::copy(ui->lineEditCheminFichierAudio->text(),cheminEnregistrementAudio);
        //}
        /*else {
            qDebug()<<"Echec suppression audio";
        }*/
    }
    else {
        leTitre->DonnerChemin(titreAmodifier->ObtenirAudio(),Titre::AUDIO);
    }
    if(ui->lineEditCheminFichierPartition->text() != titreAmodifier->ObtenirPartition())
    {
        QString repertoireInterpretePartition = cheminRepertoirePartition+ui->lineEditInterprete->text();
        QString cheminEnregistrementPartition=repertoireInterpretePartition+"/"+titreAmodifier->ObtenirNom()+ " - "+titreAmodifier->ObtenirInterprete()+".pdf";
        leTitre->DonnerChemin(cheminEnregistrementPartition,Titre::PARTITION);
        //if(QFile::remove(titreAmodifier->ObtenirPartition()))
        //{
        if(!QFile::exists(repertoireInterpretePartition))
        {
            QDir dir(cheminRepertoireRythme);
            dir.mkdir(repertoireInterpretePartition);
        }
        QFile::copy(ui->lineEditCheminFichierPartition->text(),cheminEnregistrementPartition);
        //}
        /*else {
            qDebug()<<"Echec suppression partition";
        }*/
    }
    else {
        leTitre->DonnerChemin(titreAmodifier->ObtenirPartition(),Titre::PARTITION);
    }
    if(ui->lineEditCheminFichierEnregistrement->text() != titreAmodifier->ObtenirEnregistrement())
    {
        QString repertoireInterpreteEnregistrement = cheminRepertoireEnregistrement + ui->lineEditInterprete->text();
        QString cheminEnregistrementEnregistrement=repertoireInterpreteEnregistrement+"/"+titreAmodifier->ObtenirNom()+ " - " + titreAmodifier->ObtenirInterprete()+".mp3";
        leTitre->DonnerChemin(cheminEnregistrementEnregistrement,Titre::ENREGISTREMENT);
        //if(QFile::remove(titreAmodifier->ObtenirEnregistrement()))
        //{
        if(!QFile::exists(repertoireInterpreteEnregistrement))
        {
            QDir dir(cheminRepertoireRythme);
            dir.mkdir(repertoireInterpreteEnregistrement);
        }
        QFile::copy(ui->lineEditCheminFichierEnregistrement->text(),cheminEnregistrementEnregistrement);

        //}
        /*else {
            qDebug()<<"Echec suppression enregistrement";
        }*/
    }
    else {
        leTitre->DonnerChemin(titreAmodifier->ObtenirEnregistrement(),Titre::ENREGISTREMENT);
    }
    if(ui->lineEditCheminFichierRythme->text() != titreAmodifier->ObtenirRythme())
    {
        QString repertoireInterpreteRythme = cheminRepertoireRythme + ui->lineEditInterprete->text();
        QString cheminEnregistrementRythme=repertoireInterpreteRythme+"/"+titreAmodifier->ObtenirNom()+" - " +titreAmodifier->ObtenirInterprete()+".ini";
        leTitre->DonnerChemin(cheminEnregistrementRythme,Titre::RYTHME);
        //if(QFile::remove(titreAmodifier->ObtenirRythme()))
        //{
        if(!QFile::exists(repertoireInterpreteRythme))
        {
            QDir dir(cheminRepertoireRythme);
            dir.mkdir(repertoireInterpreteRythme);

        }
        QFile::copy(ui->lineEditCheminFichierRythme->text(),cheminEnregistrementRythme);
        //}
        //else {
            qDebug()<<"Echec suppression rythme";
        //}
    }
    else {
        leTitre->DonnerChemin(titreAmodifier->ObtenirRythme(),Titre::RYTHME);
    }

    accesBdd->enregistrerModificationTitre(leTitre);

    // Actualisation de la liste de musiques de l'application
    listeTitre = accesBdd->obtenirListeTitre();
    afficherListeMusique();



    ui->pushButtonValiderLesModifications->setVisible(false);
    ui->pushButtonAjouter->setVisible(true);
    ui->stackedWidget->setCurrentIndex(0);

    ui->lineEditNom->setDisabled(true);
    ui->lineEditInterprete->setDisabled(true);
    ui->lineEditNom->setReadOnly(false);
    ui->lineEditInterprete->setReadOnly(false);

    ui->lineEditTempo->setDisabled(true);
    ui->lineEditDuree->setDisabled(true);
    ui->lineEditTonalite->setDisabled(true);
    ui->textEditNote->setDisabled(true);

    ui->lineEditNom->clear();
    ui->lineEditInterprete->clear();
    ui->lineEditCheminFichierAudio->clear();
    ui->lineEditCheminFichierPartition->clear();
    ui->lineEditCheminFichierEnregistrement->clear();
    ui->lineEditCheminFichierRythme->clear();
    ui->lineEditDuree->clear();
    ui->lineEditTempo->clear();
    ui->lineEditTonalite->clear();
    ui->textEditNote->clear();
}
/**
 * @brief GestionnaireListes::on_pushButtonPartition_clicked
 * @details Lors d'un clique sur le bouton "Partition" , lis le chemin mis dans le lineEditCheminPartition et affiche le pdf
 * dans l'onglet d'affichage des pdf
 */
void GestionnaireListes::on_pushButtonPartition_clicked()
{
    lecteurPartitions->ChargerPartitionDepuisGestionnaire(ui->lineEditCheminFichierPartition->text());
    //lecteurPartitons->ChargerPartition(ui->lineEditCheminFichierPartition->text());
}
/**
 * @brief GestionnaireListes::on_pushButtonLirePlaylist_clicked
 * @details Lors d'un clique sur le bouton "LirePlaylist", cela lance la playlist sur le LecteurAudio.
 */
void GestionnaireListes::on_pushButtonLirePlaylist_clicked()
{
    if(ui->listWidgetAffichageSet->count() > 0)
    {
        QList <QString> listePlaylist;
        QList<QMediaContent> musiques;
        QList <Titre*> listeTitreSet;

        player->stop();
        playlist->clear();

        int nbLignes = ui->listWidgetAffichageSet->count();
        int i=0;
        while(i < nbLignes)
        {
            listePlaylist.append(ui->listWidgetAffichageSet->item(i)->text());
            i++;
        }

        listeTitreSet = accesBdd->obtenirListeTitreSet(listePlaylist);

        foreach(Titre *titre, listeTitreSet)
        {
            musiques.push_back(QUrl::fromLocalFile(titre->ObtenirAudio()));
        }
        playlist->addMedia(musiques);

        int index1 = ui->listWidgetAffichageSet->currentRow();
        int index2 = playlist->currentIndex();
        if(index1 != index2)
        {
            playlist->setCurrentIndex(index1);
        }
        QMediaContent media = playlist->currentMedia();

        player->setPlaylist(playlist);
        player->setVolume(100);
        player->play();
    }
    else {
        ui->listWidgetAffichageSet->setStyleSheet("background-color: #c12924");
        qtPause(2000);
        ui->listWidgetAffichageSet->setStyleSheet("background-color: #C2D3EF");
    }
}
/**
 * @brief GestionnaireListes::on_pushButtonAudio_clicked
 * @details Lors d'un clique sur le bouton "Audio", lance le fichier audio via le chemin entré
 * dans le lineEditCheminFichierAudio sur le LecteurAudio
 */
void GestionnaireListes::on_pushButtonAudio_clicked()
{
    QString fichier = ui->lineEditCheminFichierAudio->text();
    if(!fichier.isEmpty())
    {
        QMediaPlaylist *playlistAlire;
        playlistAlire = new QMediaPlaylist();

        QList <QMediaContent> musiques;
        musiques.push_back(QUrl::fromLocalFile(ui->lineEditCheminFichierAudio->text()));
        playlistAlire->addMedia(musiques);
        lecteurAudio->chargerPlaylist(playlistAlire);

    }
}
/**
 * @brief GestionnaireListes::on_pushButtonEnvoyerPlaylist_clicked
 * @details Lors d'un clique sur le bouton "EnvoyerPlaylist", envoi la playlist au LecteurAudio
 */
void GestionnaireListes::on_pushButtonEnvoyerPlaylist_clicked()
{
    QList <QString> listePlaylist;
    QList<QMediaContent> musiques;
    QList <Titre*> listeTitreSet;
    QMediaPlaylist *playlistAenvoyer;

    playlistAenvoyer = new QMediaPlaylist();


    player->stop();
    playlist->clear();

    int nbLignes = ui->listWidgetAffichageSet->count();
    int i=0;
    while(i < nbLignes)
    {
        listePlaylist.append(ui->listWidgetAffichageSet->item(i)->text());
        i++;
    }

    listeTitreSet = accesBdd->obtenirListeTitreSet(listePlaylist);

    foreach(Titre *titre, listeTitreSet)
    {
        musiques.push_back(QUrl::fromLocalFile(titre->ObtenirAudio()));
    }

    playlistAenvoyer->addMedia(musiques);

    lecteurAudio->chargerPlaylist(playlistAenvoyer);
}
/**
 * @brief GestionnaireListes::on_pushButtonSauvegarderConcert_clicked
 * @details Lors d'un clique sur le bouton "SauvegarderConcert", sauvegarde la playlist dans la base de donnée en fonction des informations
 * entré par le musicien tel que le nom du set, le genre et la date. Par défault la date prend celle du jours où le set a été enregistré
 */
void GestionnaireListes::on_pushButtonSauvegarderConcert_clicked()
{
    if(ui->lineEditNomSet->text()>0 && ui->listWidgetAffichageSet->count() > 0)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Avertissement", "Voulez-vous vraiment enregistrer le set ?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            QList <QString> listeTitreSet;

            int nbLignes = ui->listWidgetAffichageSet->count();
            int i=0;
            while(i < nbLignes)
            {
                listeTitreSet.append(ui->listWidgetAffichageSet->item(i)->text());
                i++;
            }

            int idSet=0;
            idSet=accesBdd->creerSetMusical(ui->lineEditNomSet->text(),ui->lineEditGenreSet->text(),QString::number(ui->dateEditDateConcert->date().day()),QString::number(ui->dateEditDateConcert->date().month()),QString::number(ui->dateEditDateConcert->date().year()));
            accesBdd->enregistrerSetMusical(listeTitreSet, idSet);

            QList <QString> listeSetDansBdd;
            listeSetDansBdd= accesBdd->obtenirListeSetsDansBdd();
            afficherListeSetStockesBdd(listeSetDansBdd);
        }
    }
    else {
        QMessageBox message;
        message.setText("Veuillez entrer un titre et remplir la liste");
        message.exec();
    }
}

/**
 * @brief GestionnaireListes::on_comboBoxListeSet_currentIndexChanged
 * @param arg1
 * @details Lors du changement d'un index dans le comboBoxListeSet, charge les données de la base de donnée correspondant au set choisi et les affiches
 */
void GestionnaireListes::on_comboBoxListeSet_currentIndexChanged(const QString &arg1)
{
    if(arg1 != "Ouvrir un set")
    {
        QString nomSet;
        QString date;
        QString genre;
        QList <QString> listeTmp = arg1.split(" | ");
        nomSet = listeTmp[0];
        date = listeTmp[1];
        genre = listeTmp[2];

        leConcert = accesBdd->obtenirListeTitreDansSetSelectionner(nomSet,date,genre);
        afficherListeSet();

        ui->lineEditGenreSet->setText(genre);
        QDate dateRecuperer;
        QList <QString> listeTmpDate = date.split("-");
        dateRecuperer.setDate(listeTmpDate[0].toInt(),listeTmpDate[1].toInt(),listeTmpDate[2].toInt());
        ui->dateEditDateConcert->setDate(dateRecuperer);
        ui->lineEditNomSet->setText(nomSet);


    }


}

void GestionnaireListes::on_pushButtonSupprimerSet_clicked()
{
    QString chaine = ui->comboBoxListeSet->currentText();
    QString nomSet;
    QString date;
    QString genre;
    QList <QString> listeTmp = chaine.split(" | ");
    nomSet = listeTmp[0];
    date = listeTmp[1];
    genre = listeTmp[2];

    accesBdd->supprimerSet(nomSet,date,genre);
    QList <QString> listeSetDansBdd;
    listeSetDansBdd= accesBdd->obtenirListeSetsDansBdd();
    afficherListeSetStockesBdd(listeSetDansBdd);
    ui->dateEditDateConcert->setDate(QDate::currentDate());
    ui->lineEditNomSet->clear();
    ui->lineEditGenreSet->clear();
    leConcert.clear();
    afficherListeSet();

}

void GestionnaireListes::on_listWidgetAffichageSet_itemClicked(QListWidgetItem *item)
{
    if(ui->listWidgetListeMusique->isItemSelected(ui->listWidgetListeMusique->currentItem()))
    {
        ui->listWidgetListeMusique->setCurrentItem(nullptr);
    }
    itemSelectionner = item->text();
}

void GestionnaireListes::on_pushButtonEnvoyerPlaylistPartition_clicked()
{
    if(ui->listWidgetAffichageSet->count() > 0)
    {
        QList <QString> listeSetPartitions;
        int nbLignes = ui->listWidgetAffichageSet->count();
        int i=0;
        while(i < nbLignes)
        {
            listeSetPartitions.append(ui->listWidgetAffichageSet->item(i)->text());
            i++;
        }

        QList <QString> listeChemin = accesBdd->obtenirListeCheminsPartitions(listeSetPartitions);
        lecteurPartitions->actualiserPlaylist(listeSetPartitions,listeChemin);
        lecteurPartitions->ChargerPartitionDepuisGestionnaire(listeChemin.at(0));
    }
    else {
        //d63631
        ui->listWidgetAffichageSet->setStyleSheet("background-color: #c12924");
        qtPause(2000);
        ui->listWidgetAffichageSet->setStyleSheet("background-color: #C2D3EF");
    }
}

void GestionnaireListes::on_pushButtonRehausserMusique_clicked()
{
    int index = leConcert.indexOf(itemSelectionner);

    if(!index-1<0)
    {
        QString titrePrecedent = leConcert.at(index-1);

        leConcert.replace(index,titrePrecedent);
        leConcert.replace(index-1,itemSelectionner);

        afficherListeSet();
        ui->listWidgetAffichageSet->setCurrentRow(index-1);
    }

}

void GestionnaireListes::on_pushButtonAbaisserMusique_clicked()
{
    int index = leConcert.indexOf(itemSelectionner);

    if(index+1<ui->listWidgetAffichageSet->count())
    {
        QString titreSuivant = leConcert.at(index+1);

        leConcert.replace(index,titreSuivant);
        leConcert.replace(index+1,itemSelectionner);

        afficherListeSet();
        ui->listWidgetAffichageSet->setCurrentRow(index+1);
    }
}

void GestionnaireListes::on_pushButtonRetirerMusique_clicked()
{
    QList<QListWidgetItem*> selection = ui->listWidgetAffichageSet->selectedItems();

    if ( selection.isEmpty() )
    {
        QMessageBox::information ( this, "Information", "Veuillez selectionner un élément dans la liste du set" );
    }
    else
    {
        foreach ( QListWidgetItem* element, selection ) {
            listeTitre.append(element->text());
            leConcert.removeOne(element->text());
        }
        afficherListeMusique();
        afficherListeSet();
    }
}

void GestionnaireListes::on_lineEditCheminFichierAudio_textChanged(const QString &arg1)
{
    // Donner la durée à la base de donnée en seconde ou milliseconde et non pas en transformée


    player->setMedia(QUrl::fromLocalFile(arg1));
    player->setVolume(0);
    player->play();
    qtPause(50);

    qint64 temps=player->duration()/1000;

    if(temps > 0)
    {
        ui->lineEditDuree->setText(ConvertirTempsEnHeuresMinutesSecondes(temps));
    }
    else {
        qtPause(50);
        qint64 temps=player->duration()/1000;
        ui->lineEditDuree->setText(ConvertirTempsEnHeuresMinutesSecondes(temps));

    }
    player->stop();
    player->setVolume(50);
}

void GestionnaireListes::on_pushButtonSupprimerTitre_clicked()
{
    QList<QListWidgetItem*> selection = ui->listWidgetListeMusique->selectedItems();
    QList <QString> listeCheminAsupprimer;

    if ( selection.isEmpty() )
    {
        QMessageBox::information ( this, "Information", "Veuillez selectionner un élément dans la liste des musiques" );
    }
    else {
        QMessageBox::StandardButton reponse;

        reponse = QMessageBox::question(this, "Avertissement", "Voulez-vous vraiment supprimer le titre  ["+itemSelectionner+"]  ?",
                                        QMessageBox::Yes|QMessageBox::No);
        if (reponse == QMessageBox::Yes) {
            foreach ( QListWidgetItem* element, selection ) {
                listeCheminAsupprimer = accesBdd->supprimerTitre(element->text());
            }

            foreach(QString chemin, listeCheminAsupprimer)
            {
                if(!chemin.isNull())
                {
                    QFile file;
                    file.remove(chemin);
                }
            }
        }
    }
}
