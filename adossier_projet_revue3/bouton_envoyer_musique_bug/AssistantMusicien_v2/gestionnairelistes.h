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

#include "lecteuraudio.h"
#include "titre.h"

#include "accesbdd.h"

namespace Ui {
class GestionnaireListes;
}

class GestionnaireListes : public QWidget
{
    Q_OBJECT

public:
    explicit GestionnaireListes(LecteurAudio *_lecteurAudio, QWidget *parent = 0);
    ~GestionnaireListes();


    void afficherListeMusique();
    void afficherListeSet();

    QString ExtraireNomFichier(QString _chemin);
    QString DecomposerNomFichier(QString _chemin);
    QString DecomposerInterpreteFichier(QString _texte);


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

private:
    Ui::GestionnaireListes *ui;

    LecteurAudio *lecteurAudio;
    bool nouvelleListe;
    QStringList lesPartitions;
    Titre *leTitre;

    QString itemSelectionner;

    QList <QString> leConcert;
    QList <QString> listeTitre;

    AccesBdd *accesBdd;
};

#endif // GESTIONNAIRELISTES_H
