#ifndef LECTEURAUDIO_H
#define LECTEURAUDIO_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include <QStringList>
#include <QMediaContent>
#include <QUrl>
#include <QTime>
#include <QTimer>


namespace Ui {
class LecteurAudio;
}

class LecteurAudio : public QWidget
{
    Q_OBJECT

public:

    LecteurAudio(QWidget *parent = nullptr);
    ~LecteurAudio();
    void LancerChanson(QStringList &selection, bool exterieur);
     void chargerPlaylist(QMediaPlaylist *playlist);

private slots:

    void On_PositionChanged(qint64 _position);

    void On_MediaPlayerStateChanged(QMediaPlayer::State _etat);

    void On_SliderProgessionMoved(int _valeur);

    void On_CurrentMediaChanged(QMediaContent);

    void on_pushButtonMusiquePrecedente_clicked();

    void on_pushButtonMusiqueSuivante_clicked();

    void on_pushButtonAvancerSecondes_clicked();

    void on_pushButtonReculerSecondes_clicked();

    void on_pushButtonPlay_clicked();

    void on_pushButtonOuvrirMusique_clicked();

    void on_pushButtonAleatoire_clicked();

    void on_pushButtonRepeter_clicked();

    void on_horizontalSliderVolume_sliderMoved(int position);

    void on_horizontalSliderRapidite_sliderMoved(int valeur);

    void on_pushButtonDiminuerVolume_clicked();

    void on_pushButtonAugmenterVolume_clicked();

    void on_pushButtonMarqueur1_clicked();

    void on_pushButtonMarqueur2_clicked();

    void on_pushButtonMoins1_clicked();

    void on_pushButtonPlus1_clicked();

    void on_pushButtonMoins2_clicked();

    void on_pushButtonPlus2_clicked();

    void on_pushButtonHaut_clicked();

    void on_pushButtonBas_clicked();

    void on_pushButtonEffacer_clicked();

    void on_listWidgetListeDeLecture_currentRowChanged(int currentRow);

    void On_timeoutTimerDuree();

    void on_pushButtonStop_clicked();


private:
    Ui::LecteurAudio *ui;

    enum ETAT
    {
        LECTURE,
        PAUSE ,
        ARRET
    };
    enum JALON
    {
        AUCUN,
        JALON_A,
        JALON_B
    };

    ETAT etat;
    JALON jalon;
    qint64 positionMarqueur1;
    qint64 positionMarqueur2;

    QString ConvertirTempsEnHeuresMinutesSecondes(qint64 temps);
    QString SupprimerExtension(QString _nomFichier);
    void AfficherPlayList();

    int volume;

    QMediaPlayer *player;
    QString chanson;
    QMediaPlaylist *playlist;
    QTimer timerDuree;

    //QString cheminAudio;
};

#endif // LECTEURAUDIO_H
