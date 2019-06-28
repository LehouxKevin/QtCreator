#ifndef LECTEURPARTITIONS_H
#define LECTEURPARTITIONS_H

#include <QWidget>

#include <QLabel>
//#include <poppler-qt5.h>
#include <poppler/qt5/poppler-qt5.h>
#include <QResizeEvent>
#include <QScrollBar>
#include <QFileDialog>
#include <QDebug>
#include <QResizeEvent>
#include <QPainter>
#include <QApplication>
#include <QDesktopWidget>

#include <QVBoxLayout>
#include "interfacemetronome.h"
#include "accesbdd.h"


#define REPERTOIRE_AUDIO "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/audio/"
#define REPERTOIRE_PARTITION "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/partition/"
#define REPERTOIRE_ENREGISTREMENT "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/enregistrement/"
#define REPERTOIRE_RYTHME "/home/USERS/ELEVES/SNIR2017/klehoux/QtCreator/AssistantMusicien_v2/fichiers/rythme/"

namespace Ui {
class LecteurPartitions;
}

class LecteurPartitions : public QWidget
{
    Q_OBJECT

public:
    explicit LecteurPartitions(InterfaceMetronome *_metronome,AccesBdd *accesBdd,QWidget *parent = nullptr);
    ~LecteurPartitions();

    void ChargerPartition(QString _cheminPartition);

    void ChargerPartitionDepuisGestionnaire(QString _cheminPartition);

    void actualiserPlaylist(QList <QString> listeSetPartitions, QList <QString> listeChemin);

private slots:

    void resizeEvent(QResizeEvent *event);

    void onQPushButtonListePartitions_clicked();


    void on_pushButtonCharger_clicked();

    void on_pushButtonPagePrec_clicked();

    void on_pushButtonPageSuiv_clicked();

    void on_pushButtonZoomPlus_clicked();

    void on_pushButtonPartitionPrecedente_clicked();

    void on_pushButtonPartitionSuivante_clicked();

    void on_pushButtonPresetMetronome_clicked();

private:
    Ui::LecteurPartitions *ui;

    int largeurResolution,hauteurResolution;

    Poppler::Document* document;
    int nbPages;
    int numeroPage;

    QList <QImage> images;
    QList <QLabel*> listeImage;

    QList <QImage> listeImagesMiniature;
    QList <QLabel*> listeLabelImageMiniature;

    QList <QPushButton *> listeBoutonSetPartition;
    int indexCheminPartitionOuvert;

    QList<QString> listeCheminPartitions;


    QList <QVBoxLayout*> listeLayout;

    QVBoxLayout *layoutPage1;
    QVBoxLayout *layoutPage2;
    QVBoxLayout *layoutImageMiniature;

    QWidget *widgetPage1;
    QWidget *widgetPage2;

    InterfaceMetronome *metronome;

    AccesBdd *accesBdd;
};

#endif // LECTEURPARTITIONS_H
