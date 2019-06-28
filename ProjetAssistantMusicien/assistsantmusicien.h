#ifndef ASSISTSANTMUSICIEN_H
#define ASSISTSANTMUSICIEN_H

#include <QMainWindow>
#include <QToolBar>
#include <QMdiArea>
#include <QMdiSubWindow>

#include "lecteurpartitions.h"

namespace Ui {
class AssistsantMusicien;
}

class AssistsantMusicien : public QMainWindow
{
    Q_OBJECT

public:
    explicit AssistsantMusicien(QWidget *parent = nullptr);
    ~AssistsantMusicien();

private slots:
    void AfficherAudio();
    void AfficherPartition();
    void AfficherListe();

private:
    Ui::AssistsantMusicien *ui;

    QToolBar *applicationToolBar;
    QMdiArea *mdiAera;
    QMdiSubWindow *pAudio;
    QMdiSubWindow *pPartitions;
    QMdiSubWindow *pListes;

    QSize tailleFenetre;                    /// taille du widget

    //LecteurAudio *audio;
    LecteurPartitions *partitions;          /// Widget Lecteur de partitions
    //GestionnaireListes *listes;
};

#endif // ASSISTSANTMUSICIEN_H
