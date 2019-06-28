#include "gestionnairelistes.h"
#include "ui_gestionnairelistes.h"

GestionnaireListes::GestionnaireListes(LecteurAudio *_lecteurAudio, QWidget *parent) :
    QWidget(parent),
    lecteurAudio(_lecteurAudio),
    ui(new Ui::GestionnaireListes)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setDisabled(true);

    ui->lineEditNom->setDisabled(true);
    ui->lineEditInterprete->setDisabled(true);
    ui->lineEditTempo->setDisabled(true);
    ui->lineEditDuree->setDisabled(true);
    ui->lineEditTonalite->setDisabled(true);
    ui->textEditNote->setDisabled(true);

    ui->pushButtonValiderLesModifications->setVisible(false);

    accesBdd = new AccesBdd();
    listeTitre = accesBdd->obtenirListeTitre();

    foreach(QString titre, listeTitre)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }

}

GestionnaireListes::~GestionnaireListes()
{
    delete ui;
}

void GestionnaireListes::afficherListeMusique()
{
    int i=0;
    while(i < ui->listWidgetListeMusique->count())
    {
        ui->listWidgetListeMusique->takeItem(i);
    }

    foreach(QString titre, listeTitre)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }
}

void GestionnaireListes::afficherListeSet()
{
    int i=0;
    while(i < ui->listWidgetAffichageSet->count())
    {
        ui->listWidgetAffichageSet->takeItem(i);
    }

    foreach(QString titre, leConcert)
    {
        ui->listWidgetAffichageSet->addItem(titre);
    }
}

QString GestionnaireListes::ExtraireNomFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    return leNom;
}

QString GestionnaireListes::DecomposerNomFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString leNom = info.fileName();
    QString nom;
    QStringList list1 = leNom.split(" - ");
    nom = list1[1];
    list1 = nom.split('.');
    nom = list1[0];
    qDebug()<<nom;
    return nom;
}

QString GestionnaireListes::DecomposerInterpreteFichier(QString _chemin)
{
    QFileInfo info(_chemin);
    QString nomFichier = info.fileName();
    QString interprete;
    int indice = nomFichier.lastIndexOf('-');
    if(indice > 0)
        interprete = nomFichier.left(indice-1);
    qDebug()<<interprete;
    return interprete;
}

void GestionnaireListes::resizeEvent(QResizeEvent *event)
{
    /*QSize tailleOrganiseur = event->size() ;
    QRect  rect = ui->listWidgetAffichageSet->geometry();
    int largeurOrganisation = tailleOrganiseur.width() - rect.left() - 30;
    int hauteurOrganisation = rect.height();
    ui->listWidgetAffichageSet->resize(largeurOrganisation,hauteurOrganisation);
    ui->listWidgetAffichageSet->resize(largeurOrganisation-140,hauteurOrganisation-90);*/
}

void GestionnaireListes::on_pushButtonNouveauConcert_clicked()
{
    ui->stackedWidget->setDisabled(false);
}

void GestionnaireListes::on_pushButtonNote_clicked()
{
    ui->textEditNote->setDisabled(false);
}

void GestionnaireListes::on_pushButtonAjouter_clicked()
{
    if(ui->lineEditCheminFichierAudio->text() > 0 && ui->lineEditNom->text() > 0 && ui->lineEditInterprete->text() > 0)
    {
        ui->stackedWidget->setCurrentIndex(0);
        ui->textEditNote->setDisabled(true);

        // copier les fichiers dans les fichiers de l'appli via les chemins recuperés

        // copie audio

        QString repertoireInterpreteAudio = "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/audio/"+ui->lineEditInterprete->text();
        if(!QFile::exists(repertoireInterpreteAudio))
        {
            QDir dir("/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/audio");
            dir.mkdir(repertoireInterpreteAudio);

        }
        QString cheminEnregistrementAudio = repertoireInterpreteAudio+"/"+ExtraireNomFichier(ui->lineEditCheminFichierAudio->text());
        QFile::copy(ui->lineEditCheminFichierAudio->text(),cheminEnregistrementAudio);

        // copie partition
        if(ui->lineEditCheminFichierPartition->text()>0)
        {

            QString repertoireInterpretePartition = "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/partition/"+ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpretePartition))
            {
                QDir dir("/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/partition");
                dir.mkdir(repertoireInterpretePartition);
            }
            QString cheminEnregistrementPartition=repertoireInterpretePartition+"/"+ExtraireNomFichier(ui->lineEditCheminFichierPartition->text());
            QFile::copy(ui->lineEditCheminFichierPartition->text(),cheminEnregistrementPartition);
            leTitre->DonnerChemin(cheminEnregistrementPartition,Titre::PARTITION);
        }

        // copie enregistrement

        if(ui->lineEditCheminFichierEnregistrement->text()>0)
        {
            QString repertoireInterpreteEnregistrement = "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/enregistrement/"+ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpreteEnregistrement))
            {
                QDir dir("/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/enregistrement");
                dir.mkdir(repertoireInterpreteEnregistrement);
            }
            QString cheminEnregistrementEnregistrement=repertoireInterpreteEnregistrement+"/"+ExtraireNomFichier(ui->lineEditCheminFichierEnregistrement->text());
            QFile::copy(ui->lineEditCheminFichierEnregistrement->text(),cheminEnregistrementEnregistrement);
            leTitre->DonnerChemin(cheminEnregistrementEnregistrement,Titre::ENREGISTREMENT);
        }
        // copie rythme

        if(ui->lineEditCheminFichierRythme->text()>0)
        {
            QString repertoireInterpreteRythme = "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/rythme/"+ui->lineEditInterprete->text();
            if(!QFile::exists(repertoireInterpreteRythme))
            {
                QDir dir("/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/rythme");
                dir.mkdir(repertoireInterpreteRythme);

            }
            QString cheminEnregistrementRythme=repertoireInterpreteRythme+"/"+ExtraireNomFichier(ui->lineEditCheminFichierRythme->text());
            QFile::copy(ui->lineEditCheminFichierRythme->text(),cheminEnregistrementRythme);
            leTitre->DonnerChemin(cheminEnregistrementRythme,Titre::RYTHME);
        }

        // sauvegarder leTitre dans la base de donnée

        leTitre->DonnerNom(ui->lineEditNom->text());
        leTitre->DonnerInterprete(ui->lineEditInterprete->text());
        leTitre->DonnerTempo(ui->lineEditTempo->text().toInt());
        //leTitre->DonnerDuree(ui->lineEditDuree->text().);
        leTitre->DonnerTonalite(ui->lineEditTonalite->text());
        leTitre->DonnerChemin(cheminEnregistrementAudio,Titre::AUDIO);

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
    }
    else {
        QMessageBox message;
        message.setText("Veuillez remplir au moins les champs [Nom] [Interprète] [Chemin du fichier audio]");
        message.exec();
    }

}

void GestionnaireListes::on_pushButtonAjoutFichiers_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    leTitre= new Titre();
}

void GestionnaireListes::on_pushButtonEnvoyerMusique_clicked()
{
    leConcert.append(itemSelectionner);
    listeTitre.removeOne(itemSelectionner);
    afficherListeMusique();
    afficherListeSet();
}

void GestionnaireListes::on_listWidgetListeMusique_itemClicked(QListWidgetItem *item)
{
    itemSelectionner = item->text();
}

void GestionnaireListes::on_listWidgetListeMusique_itemDoubleClicked(QListWidgetItem *item)
{
    int index = ui->listWidgetListeMusique->row(item);
    listeTitre.removeAt(index);
    leConcert.append(item->text());
    afficherListeMusique();
    afficherListeSet();
}

void GestionnaireListes::on_listWidgetAffichageSet_itemDoubleClicked(QListWidgetItem *item)
{
    int index = ui->listWidgetAffichageSet->row(item);
    leConcert.removeAt(index);
    listeTitre.append(item->text());
    afficherListeMusique();
    afficherListeSet();
}

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

        //ui->lineEditNom->setText(DecomposerNomFichier(leTitre->ObtenirNom()));
        ui->lineEditNom->setText(DecomposerNomFichier(ui->lineEditCheminFichierAudio->text()));
        ui->lineEditInterprete->setText(DecomposerInterpreteFichier(ui->lineEditCheminFichierAudio->text()));

        ui->lineEditNom->setDisabled(false);
        ui->lineEditInterprete->setDisabled(false);
        ui->lineEditTempo->setDisabled(false);
        ui->lineEditDuree->setDisabled(false);
        ui->lineEditTonalite->setDisabled(false);
        ui->textEditNote->setDisabled(false);
    }
}


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

    ui->stackedWidget->setCurrentIndex(0);

    ui->pushButtonValiderLesModifications->setVisible(false);
    ui->pushButtonAjouter->setVisible(true);
}

void GestionnaireListes::on_lineEditRechercheParTitre_textChanged(const QString &arg1)
{
    QList <QString> liste = accesBdd->obtenirListeTitreFiltreParTitre(arg1);

    ui->listWidgetListeMusique->clear();

    foreach(QString titre, liste)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }
}

void GestionnaireListes::on_lineEditRechercheParInterprete_textChanged(const QString &arg1)
{
    QList <QString> liste = accesBdd->obtenirListeTitreFiltreParInterprete(arg1);

    ui->listWidgetListeMusique->clear();

    foreach(QString titre, liste)
    {
        ui->listWidgetListeMusique->addItem(titre);
    }
}

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

void GestionnaireListes::on_pushButtonObtenirCheminFichierRythme_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Chemin du fichier rythme",
                                                   "/home/USERS/ELEVES/SNIR2017/klehoux/Téléchargements/",
                                                   "Fichier Rythme (*.txt)");

    if(!fichier.isEmpty())
    {
        ui->lineEditCheminFichierRythme->setText(fichier);
    }
}

void GestionnaireListes::on_pushButtonModifierTitre_clicked()
{

    // Remplir les champs avec les données deja enregistrés
    // faire une requete qui fabrique un objet Titre et qui le retourne
    //ui->lineEditCheminFichierAudio

    QList<QListWidgetItem*> selection = ui->listWidgetListeMusique->selectedItems();

    if ( selection.isEmpty() )
    {
        QMessageBox::information ( this, "Information", "Veuillez selectionner un élément dans la liste des musiques" );
    }
    else
    {

        foreach ( QListWidgetItem* element, selection ) {
            Titre *titre = accesBdd->obtenirTitreAModifier(itemSelectionner);
        }

        ui->pushButtonValiderLesModifications->setVisible(true);
        ui->pushButtonAjouter->setVisible(false);
        ui->stackedWidget->setCurrentIndex(1);
    }





}

void GestionnaireListes::on_pushButtonValiderLesModifications_clicked()
{
    ui->pushButtonValiderLesModifications->setVisible(false);
    ui->pushButtonAjouter->setVisible(true);
    ui->stackedWidget->setCurrentIndex(0);
}
