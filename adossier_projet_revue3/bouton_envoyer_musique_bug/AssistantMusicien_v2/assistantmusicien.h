#ifndef ASSISTANTMUSICIEN_H
#define ASSISTANTMUSICIEN_H

#include <QMainWindow>
#include <QToolBar>
#include <QMdiArea>
#include <QMdiSubWindow>

#include "lecteuraudio.h"
#include "lecteurpartitions.h"
#include "gestionnairelistes.h"
#include "metronome.h"
#include "niveau.h"

#include "accesbdd.h"

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

private:
    Ui::AssistantMusicien *ui;

    QToolBar *applicationToolBar;
    QMdiArea *mdiAera;
    QMdiSubWindow *pAudio;
    QMdiSubWindow *pPartitions;
    QMdiSubWindow *pListes;
    QMdiSubWindow *pMetronome;
    QMdiSubWindow *pNiveau;

    QSize tailleFenetre;                    /// taille du widget

    LecteurAudio *audio;
    LecteurPartitions *partitions;          /// Widget Lecteur de partitions
    GestionnaireListes *listes;
    Metronome *metronome;
    Niveau *niveau;

    AccesBdd *accesBdd;
};

#endif // ASSISTANTMUSICIEN_H
