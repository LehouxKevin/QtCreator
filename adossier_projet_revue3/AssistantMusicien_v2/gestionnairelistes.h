#ifndef GESTIONNAIRELISTES_H
#define GESTIONNAIRELISTES_H

#include <QWidget>
#include <QFileDialog>
#include <QTextStream>
#include <QResizeEvent>
#include <QDebug>
#include <QListWidgetItem>
#include <QFile>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDate>
#include <QDateEdit>
#include <QApplication>
#include <QSettings>
#include <QTimer>

#include "lecteuraudio.h"
#include "titre.h"
#include "lecteurpartitions.h"

#include "accesbdd.h"
#include "parametres.h"

namespace Ui {
class GestionnaireListes;
}

class GestionnaireListes : public QWidget
{
    Q_OBJECT

public:
    //explicit GestionnaireListes(LecteurAudio *_lecteurAudio, QWidget *parent = 0);
    GestionnaireListes(AccesBdd *_bdd,LecteurPartitions *_lecteurPartition,LecteurAudio *_lecteurAudio, QWidget *parent = 0);
    ~GestionnaireListes();


    void afficherListeMusique();
    void afficherListeSet();
    void afficherListeSetStockesBdd(QList <QString> listeSet);

    QString ExtraireNomFichier(QString _chemin);
    QString DecomposerNomFichier(QString _chemin);
    QString DecomposerInterpreteFichier(QString _texte);

    void actualiserCheminsRepertoires();

    void setup();

    QString ConvertirTempsEnHeuresMinutesSecondes(qint64 temps);


private slots:

    void resizeEvent(QResizeEvent * event);

    void on_pushButtonNouveauConcert_clicked();

    void on_pushButtonNote_clicked();

    void on_pushButtonAjouter_clicked();

    void on_pushButtonAjoutFichiers_clicked();

    void on_pushButtonEnvoyerMusique_clicked();

    void on_listWidgetListeMusique_itemClicked(QListWidgetItem *item);

    void on_listWidgetListeMusique_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidgetAffichageSet_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButtonObtenirCheminFichierAudio_clicked();

    void on_pushButtonObtenirCheminFichierPartition_clicked();

    void on_pushButtonAnnuler_clicked();

    void on_lineEditRechercheParTitre_textChanged(const QString &arg1);

    void on_lineEditRechercheParInterprete_textChanged(const QString &arg1);

    void on_pushButtonObtenirCheminEnregistrement_clicked();

    void on_pushButtonObtenirCheminFichierRythme_clicked();

    void on_pushButtonModifierTitre_clicked();

    void on_pushButtonValiderLesModifications_clicked();

    void on_pushButtonPartition_clicked();

    void on_pushButtonLirePlaylist_clicked();

    void on_pushButtonAudio_clicked();

    void on_pushButtonEnvoyerPlaylist_clicked();

    void on_pushButtonSauvegarderConcert_clicked();

    void on_comboBoxListeSet_currentIndexChanged(const QString &arg1);

    void on_pushButtonSupprimerSet_clicked();

    void on_listWidgetAffichageSet_itemClicked(QListWidgetItem *item);

    void on_pushButtonEnvoyerPlaylistPartition_clicked();

    void on_pushButtonRehausserMusique_clicked();

    void on_pushButtonAbaisserMusique_clicked();

    void on_pushButtonRetirerMusique_clicked();

    void on_lineEditCheminFichierAudio_textChanged(const QString &arg1);

    void on_pushButtonSupprimerTitre_clicked();

private:
    Ui::GestionnaireListes *ui;

    LecteurAudio *lecteurAudio;     // Lecteur audio qui lis les sons
    QMediaPlayer *player;           // player en attendant le lecteur audio ET pour demarrer des son au volume 0 pour obtenir leurs durées
    QMediaPlaylist *playlist;       // playlist que le gestionnaire de liste envoi au lecteur audio

    QStringList lesPartitions;      // liste de partitions | Non utilisé pour le moment

    Titre *leTitre;                 // Titre selectionné dans le list widget
    Titre *titreAmodifier;          // Titre selectionné dans la liste avant de cliquer sur le bouton modifier

    QString itemSelectionner;       // Chaine de l'item selectionné dans une liste

    QList <QString> leConcert;      // liste des titre dans la liste set
    QList <QString> listeTitre;     // liste des titre dans la liste de musique de l'application

    LecteurPartitions *lecteurPartitions; // lecteur de partition


    AccesBdd *accesBdd;             // classe qui s'occupe des requêtes vers la base de donnée

    Parametres *parametres;

    QString cheminRepertoireAudio;
    QString cheminRepertoirePartition;
    QString cheminRepertoireEnregistrement;
    QString cheminRepertoireRythme;
};

#endif // GESTIONNAIRELISTES_H
