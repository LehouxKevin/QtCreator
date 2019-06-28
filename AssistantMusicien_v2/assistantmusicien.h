#ifndef ASSISTANTMUSICIEN_H
#define ASSISTANTMUSICIEN_H

#include <QMainWindow>
#include <QToolBar>
#include <QMdiArea>
#include <QMdiSubWindow>

#include "lecteuraudio.h"
#include "lecteurpartitions.h"
#include "gestionnairelistes.h"
#include "interfacemetronome.h"
#include "metronome.h"
#include "Sonometre.h"
#include "parametres.h"

#include "accesbdd.h"


#define NOM_FICHIER_INI "Settings.ini"

namespace Ui {
class AssistantMusicien;
}

class AssistantMusicien : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssistantMusicien(QWidget *parent = nullptr);
    ~AssistantMusicien();

private slots:
    void AfficherAudio();
    void AfficherPartition();
    void AfficherListe();
    void AfficherMetronome();
    void AfficherNiveau();
    void AfficherParametres();

private:
    Ui::AssistantMusicien *ui;

    QToolBar *applicationToolBar;
    QMdiArea *mdiAera;
    QMdiSubWindow *pAudio;
    QMdiSubWindow *pPartitions;
    QMdiSubWindow *pListes;
    QMdiSubWindow *pMetronome;
    QMdiSubWindow *pNiveau;
    QMdiSubWindow *pParametres;

    QSize tailleFenetre;                    /// taille du widget

    LecteurAudio *audio;
    LecteurPartitions *partitions;          /// Widget Lecteur de partitions
    GestionnaireListes *listes;
    InterfaceMetronome *metronome;
    Metronome *metronome2;
    sonometre *niveau;
    Parametres *parametres;

    AccesBdd *accesBdd;
};

#endif // ASSISTANTMUSICIEN_H
