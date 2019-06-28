#include "lecteuraudio.h"
#include "ui_lecteuraudio.h"

#include <QMessageBox>
#include <QResizeEvent>

LecteurAudio::LecteurAudio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LecteurAudio)
{
    ui->setupUi(this);

    ui->listWidgetListeDeLecture->setStyleSheet("background-color: white");

    player = new QMediaPlayer();
    playlist = new QMediaPlaylist(player);


    if(!connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),this,SLOT(On_MediaStatusChanged(QMediaPlayer::MediaStatus))))
        qDebug() << "erreur connexion SIGNAL(mediaStatusChanged) dans LecteurAudio";
    if(!connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(On_MediaPlayerStateChanged(QMediaPlayer::State))))
        qDebug() << "erreur connexion SIGNAL(stateChanged) dans LecteurAudio";
    if(!connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(On_PositionChanged(qint64))))
        qDebug() << "erreur connexion SIGNAL(positionChanged) dans LecteurAudio";
    if(!connect(ui->horizontalSliderMusique,SIGNAL(sliderMoved(int)),this,SLOT(On_SliderProgessionMoved(int))))
        qDebug() << "erreur connexion SIGNAL(valueChanged - Progression) dans LecteurAudio";
    connect(player,SIGNAL(currentMediaChanged(QMediaContent)),this,SLOT(On_CurrentMediaChanged(QMediaContent)));

    connect(ui->pushButtonStop,SIGNAL(clicked(bool)),player,SLOT(stop()));

    player->setPlaylist(playlist);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    player->setVolume(50);
    volume=50;
    ui->horizontalSliderVolume->setValue(50);
    ui->horizontalSliderRapidite->setValue(50);
    ui->lineEditRapiditee->setText("x 1.00");

    ui->pushButtonMusiquePrecedente->setDisabled(true);
    ui->pushButtonMusiqueSuivante->setDisabled(true);
    ui->pushButtonStop->setDisabled(true);
    ui->pushButtonReculerSecondes->setDisabled(true);
    ui->pushButtonAvancerSecondes->setDisabled(true);
    ui->groupBoxMarqueur->setDisabled(true);


    player->setPlaylist(playlist);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    timerDuree.setSingleShot(true);
    connect(&timerDuree,SIGNAL(timeout()),this,SLOT(On_timeoutTimerDuree()));

    ui->lineEditTitreMusique->setReadOnly(true);
}

LecteurAudio::~LecteurAudio()
{
    delete ui;
    delete player;
    delete playlist;
}


/**
 * @brief LecteurAudio::chargerPlaylist(QMediaPlaylist *playlist2)
 * @details
 * Charge la playlist dans le lecteur audio
 */

void LecteurAudio::chargerPlaylist(QMediaPlaylist *playlist2)
{
    playlist = playlist2;
    player->setPlaylist(playlist2);

    QMediaContent item = playlist->media(0);
    ui->lineEditTitreMusique->setText(SupprimerExtension(item.canonicalUrl().toString()));

    QString titre;
    ui->listWidgetListeDeLecture->clear();

    int nbMedia = playlist2->mediaCount();
    QMediaContent media;

    for(int index = 0 ; index < nbMedia ; index++)
    {
        media = playlist2->media(index);
        titre.sprintf(" (%02d)  ",index +1);
        titre += SupprimerExtension(media.canonicalUrl().toString());
        ui->listWidgetListeDeLecture->addItem(titre);
    }
}


/**
 * @brief LecteurAudio::AfficherPlayList()
 * @details
 * Affiche la Playlist dans le lecteur fichier
 */

void LecteurAudio::AfficherPlayList()
{
    QMediaContent media;
    int nbMedia = playlist->mediaCount();
    QString titre;
    ui->listWidgetListeDeLecture->clear();
    for(int index = 0 ; index < nbMedia ; index++)
    {
        media = playlist->media(index);
        titre.sprintf(" (%02d)  ",index +1);
        titre += SupprimerExtension(media.canonicalUrl().toString());
        ui->listWidgetListeDeLecture->addItem(titre);
    }
    ui->listWidgetListeDeLecture->setCurrentRow(playlist->currentIndex() != -1 ? playlist->currentIndex() : 0);
}


/**
 * @brief LecteurAudio::on_pushButtonOuvrirMusique_clicked()
 * @details
 * Ouvre le fichier audio
 */

void LecteurAudio::on_pushButtonOuvrirMusique_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,
                                                   "Ouverture du fichier audio",
                                                   "/home/USERS/ELEVES/SNIR2017/phabert/Musique",
                                                   "Audio (*.mp3 *.wav *.ogg) ");

    playlist->addMedia(QUrl::fromLocalFile(fichier));
    AfficherPlayList();

}


/**
 * @brief LecteurAudio::on_pushButtonPlay_clicked()
 * @details
 * Lance la musique
 */

void LecteurAudio::on_pushButtonPlay_clicked()
{
    if(player->state() != QMediaPlayer::PlayingState)
    {
        int index1 = ui->listWidgetListeDeLecture->currentRow();
        int index2 = playlist->currentIndex();
        if(index1 != index2)
        {
            playlist->setCurrentIndex(index1);
        }
        QMediaContent media = playlist->currentMedia();
        QString titre = media.canonicalUrl().fileName();
        ui->lineEditTitreMusique->setText(SupprimerExtension(titre));
        player->play();
        timerDuree.start(200);
    }

}

/**
 * @brief LecteurAudio::On_MediaPlayerStateChanged(QMediaPlayer::State _etat)
 * @details
 * Les différents états du lecteur audio et leurs fonctions
 */

void LecteurAudio::On_MediaPlayerStateChanged(QMediaPlayer::State _etat)
{
    int index = playlist->currentIndex();

    switch(_etat)
    {
    //   La musique est lancee
    case QMediaPlayer::PlayingState:
        ui->pushButtonPlay->setIcon(QIcon("://images/pause.png"));
        ui->groupBoxMarqueur->setEnabled(true);
        ui->pushButtonMusiquePrecedente->setEnabled(true);
        ui->pushButtonMusiqueSuivante->setEnabled(true);
        ui->pushButtonReculerSecondes->setEnabled(true);
        ui->pushButtonAvancerSecondes->setEnabled(true);
        ui->pushButtonStop->setEnabled(true);
        disconnect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(play()));
        connect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(pause()));
        ui->listWidgetListeDeLecture->setCurrentRow(index);
        break;

        //   La musique est en pause
    case QMediaPlayer::PausedState:
        ui->pushButtonPlay->setIcon(QIcon("://images/jouer.png"));
        disconnect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(pause()));
        connect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(play()));
        break;
        //   La musique est en stop
    case QMediaPlayer::StoppedState:
        ui->pushButtonPlay->setIcon(QIcon("://images/jouer.png"));
        disconnect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(pause()));
        connect(ui->pushButtonPlay,SIGNAL(clicked(bool)),player,SLOT(play()));
        ui->lineEditTempsMarqueur1->clear();
        ui->lineEditTempsMarqueur2->clear();
        ui->pushButtonStop->setDisabled(true);
        ui->pushButtonMarqueur2->setDisabled(true);
        ui->groupBoxMarqueur->setDisabled(true);
        positionMarqueur1 = 0;
        positionMarqueur2 = 0;
        break;
    default:
        break;
    }
}


/**
 * @brief LecteurAudio::on_pushButtonStop_clicked()
 * @details
 * arrete la lecture de la musique en cours
 */

void LecteurAudio::on_pushButtonStop_clicked()
{

}


/**
 * @brief LecteurAudio::on_pushButtonAvancerSecondes_clicked()
 * @details
 * Avance la musique de 5 secondes
 */

void LecteurAudio::on_pushButtonAvancerSecondes_clicked()
{
    ui->horizontalSliderMusique->setValue(ui->horizontalSliderMusique->value()+5);
    player->setPosition(ui->horizontalSliderMusique->value()*1000);
}


/**
 * @brief LecteurAudio::on_pushButtonReculerSecondes_clicked()
 * @details
 * Recule la musique de 5 secondes
 */

void LecteurAudio::on_pushButtonReculerSecondes_clicked()
{
    ui->horizontalSliderMusique->setValue(ui->horizontalSliderMusique->value()-5);
    player->setPosition(ui->horizontalSliderMusique->value()*1000);
}


/**
 * @brief LecteurAudio::on_pushButtonMusiquePrecedente_clicked()
 * @details
 * Joue la musique précèdente à la musique en cours
 */

void LecteurAudio::on_pushButtonMusiquePrecedente_clicked()
{
    if(ui->listWidgetListeDeLecture->currentRow()-1<0)
    {
        ui->listWidgetListeDeLecture->setCurrentRow(0);
    }
    else{

        playlist->previous();
        QMediaContent media = playlist->currentMedia();
        QString titre = media.canonicalUrl().fileName();
        ui->lineEditTitreMusique->setText(SupprimerExtension(titre));
        timerDuree.start(200);
        ui->listWidgetListeDeLecture->setCurrentRow(ui->listWidgetListeDeLecture->currentRow()-1);
    }
}


/**
 * @brief LecteurAudio::on_pushButtonMusiqueSuivante_clicked()
 * @details
 * Joue la musique suivante à la musique en cours
 */

void LecteurAudio::on_pushButtonMusiqueSuivante_clicked()
{
    if(ui->listWidgetListeDeLecture->currentRow()+1>ui->listWidgetListeDeLecture->count()-1)
    {
        ui->listWidgetListeDeLecture->setCurrentRow(ui->listWidgetListeDeLecture->count()-1);

    }
    else{
        playlist->next();
        QMediaContent media = playlist->currentMedia();
        QString titre = media.canonicalUrl().fileName();
        ui->lineEditTitreMusique->setText(SupprimerExtension(titre));
        timerDuree.start(200);
        ui->listWidgetListeDeLecture->setCurrentRow(ui->listWidgetListeDeLecture->currentRow()+1);
    }
}


/**
 * @brief LecteurAudio::On_PositionChanged(qint64 _position)
 * @details
 * Affiche le temps courant de la musique dans le label prévu à cet effet
 */

QString LecteurAudio::ConvertirTempsEnHeuresMinutesSecondes(qint64 temps)
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


/**
 * @brief LecteurAudio::On_PositionChanged(qint64 _position)
 * @details
 * Affiche le temps courant de la musique dans le label prévu à cet effet
 */

void LecteurAudio::On_PositionChanged(qint64 _position)
{
    _position /= 1000;
    ui->labelTempsCourant->setText(ConvertirTempsEnHeuresMinutesSecondes(_position));
    ui->horizontalSliderMusique->setValue(_position);
    if(positionMarqueur2 != 0 && _position >= positionMarqueur2)
    {
        ui->horizontalSliderMusique->setSliderPosition(positionMarqueur1);
        player->setPosition(positionMarqueur1*1000);
    }

}


/**
 * @brief LecteurAudio::On_SliderProgessionMoved(int _valeur)
 * @details
 * Change la position du curseur quand la musique est joué
 */

void LecteurAudio::On_SliderProgessionMoved(int _valeur)
{
    player->setPosition(_valeur*1000);
    if(ui->horizontalSliderMusique->value()==ui->horizontalSliderMusique->maximum())
    {
        //;
        //ui->listWidgetListeDeLecture->setCurrentRow(ui->listWidgetListeDeLecture->count()-1);
    }
}

void LecteurAudio::On_CurrentMediaChanged(QMediaContent titre)
{
    ui->lineEditTitreMusique->setText(SupprimerExtension(titre.canonicalUrl().toString()));
}


/**
 * @brief LecteurAudio::On_timeoutTimerDuree()
 * @details
 * Affiche la duree total de la musique
 */

void LecteurAudio::On_timeoutTimerDuree()
{
    qint64 temps=player->duration()/1000;
    if(temps > 0)
    {
        ui->labelDuree->setText(ConvertirTempsEnHeuresMinutesSecondes(temps));
        ui->horizontalSliderMusique->setMaximum(temps);
    }
}

/**
 * @brief LecteurAudio::on_pushButtonAleatoire_clicked()
 * @details
 * Joue la liste de lecture en mode aleatoire
 */

void LecteurAudio::on_pushButtonAleatoire_clicked()
{
    ui->pushButtonRepeter->setIcon(QIcon("://images/repeterBleue.png"));
    ui->pushButtonAleatoire->setIcon(QIcon("://images/iconeAleatoireVerte.png"));
    playlist->setPlaybackMode(QMediaPlaylist::Random);
}

/**
 * @brief LecteurAudio::on_pushButtonRepeter_clicked()
 * @details
 * Déplace la musique selectionnée d'une place vers le haut dans la liste de lecture
 */

void LecteurAudio::on_pushButtonRepeter_clicked()
{
    ui->pushButtonAleatoire->setIcon(QIcon("://images/iconeAleatoireBleue.png"));
    ui->pushButtonRepeter->setIcon(QIcon("://images/RepeterVerte.png"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
}

/**
 * @brief LecteurAudio::on_pushButtonHaut_clicked
 * @details
 * Déplace la musique selectionnée d'une place vers le haut dans la liste de lecture
 */

void LecteurAudio::on_pushButtonHaut_clicked()
{
    player->stop();
    int index = ui->listWidgetListeDeLecture->currentIndex().row();
    playlist->moveMedia(index, index-1);
    playlist->setCurrentIndex(index-1);
    AfficherPlayList();
}


/**
 * @brief LecteurAudio::on_pushButtonBas_clicked()
 * @details
 * Déplace la musique selectionnée d'une place vers le bas dans la liste de lecture
 */

void LecteurAudio::on_pushButtonBas_clicked()
{
    player->stop();
    int index = ui->listWidgetListeDeLecture->currentIndex().row();
    playlist->moveMedia(index, index+1);
    playlist->setCurrentIndex(index+1);
    AfficherPlayList();
}


/**
 * @brief LecteurAudio::on_listWidgetListeDeLecture_currentRowChanged(int currentRow)
 * @details
 * Active ou désactive les flèches lorsque la sélection est aux extrémités
 */

void LecteurAudio::on_listWidgetListeDeLecture_currentRowChanged(int currentRow)
{
    if(currentRow == 0)
        ui->pushButtonHaut->setDisabled(true);
    else
        ui->pushButtonHaut->setEnabled(true);
    if(currentRow == ui->listWidgetListeDeLecture->count()-1)
        ui->pushButtonBas->setDisabled(true);
    else
        ui->pushButtonBas->setEnabled(true);
}


/**
 * @brief LecteurAudio::on_pushButtonEffacer_clicked()
 * @details
 * Efface la musique selectionnée dans la liste de lecture
 */

void LecteurAudio::on_pushButtonEffacer_clicked()
{
    int index = ui->listWidgetListeDeLecture->currentRow();
    QMediaContent media = playlist->media(index);
    QMessageBox question(this);
    question.setWindowTitle(tr("Assistant musicien"));
    QString texte = "Etes-vous sûr de vouloir supprimer\n";
    texte += SupprimerExtension(media.canonicalUrl().toString());
    question.setText(texte);
    question.addButton(tr("Annuler"),QMessageBox::ActionRole);
    question.setIcon(QMessageBox::Question);
    QAbstractButton *boutonValider = question.addButton(tr("Accepter"),QMessageBox::ActionRole);
    question.exec();
    if(question.clickedButton() == boutonValider)
    {
        player->stop();
        int index = ui->listWidgetListeDeLecture->currentIndex().row();
        playlist->removeMedia(index);
        playlist->setCurrentIndex(index);
        AfficherPlayList();
    }
}


/**
 * @brief LecteurAudio::SupprimerExtension(QString _nomFichier)
 * @details
 * Récupère le nom d'un fichier sans son extension
 */

QString LecteurAudio::SupprimerExtension(QString _nomFichier)
{

    QFileInfo info(_nomFichier);
    QString nom = info.fileName();
    int indice = nom.lastIndexOf('.');
    if(indice > 0)
        nom = nom.left(indice);
    return nom;
}


/**
 * @brief LecteurAudio::on_horizontalSliderRapidite_sliderMoved(int valeur)
 * @details
 * Modifie la vitesse quand le curseur est deplace
 */

void LecteurAudio::on_horizontalSliderRapidite_sliderMoved(int valeur)
{
    qreal vitesse = 1   + (valeur - 50)/100.0;
    ui->lineEditRapiditee->setText("x " + QString::number(vitesse,'g',3));
    player->setPlaybackRate(vitesse);
    qint64  position = player->position();
    //player->stop();
    player->setPosition(position);
    player->play();
}


/**
 * @brief LecteurAudio::on_horizontalSliderVolume_sliderMoved(int position)
 * @details
 * Modifie le volume quand le curseur est deplacé
 */

void LecteurAudio::on_horizontalSliderVolume_sliderMoved(int position)
{
    player->setVolume(position);
}


/**
 * @brief LecteurAudio::on_pushButtonDiminuerVolume_clicked()
 * @details
 * Diminue le volume de 5
 */

void LecteurAudio::on_pushButtonDiminuerVolume_clicked()
{
    if(ui->horizontalSliderVolume->value()>0)
    {
        volume-=5;
        player->setVolume(volume);
        ui->horizontalSliderVolume->setValue(volume);
    }
}


/**
 * on_pushButtonAugmenterVolume_clicked()
 * @details
 * Augmente le volume de 5
 */

void LecteurAudio::on_pushButtonAugmenterVolume_clicked()
{
    if(ui->horizontalSliderVolume->value()<100)
    {
        volume+=5;
        player->setVolume(volume);
        ui->horizontalSliderVolume->setValue(volume);
    }
}


/**
 * @brief LecteurAudio::on_pushButtonMarqueur1_clicked()
 * @details
 * Place le marqueur 1 et affiche son temps auquel on a cliqué sur le bouton
 */

void LecteurAudio::on_pushButtonMarqueur1_clicked()
{
    if(positionMarqueur1 == 0)
    {
        positionMarqueur1 = player->position()/1000;
        ui->pushButtonMarqueur2->setEnabled(true);
        ui->lineEditTempsMarqueur1->setEnabled(true);
        ui->pushButtonMoins1->setEnabled(true);
        ui->pushButtonPlus1->setEnabled(true);
        ui->lineEditTempsMarqueur1->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur1));
    }
    else
    {
        positionMarqueur1 = 0;
        ui->lineEditTempsMarqueur1->setEnabled(true);
        ui->pushButtonMoins1->setEnabled(true);
        ui->pushButtonMoins1->setEnabled(true);
        ui->lineEditTempsMarqueur1->clear();
    }
}

/**
 * @brief LecteurAudio::on_pushButtonMarqueur2_clicked()
 * @details
 * Place le marqueur 2 et affiche son temps auquel on a cliqué sur le bouton
 */

void LecteurAudio::on_pushButtonMarqueur2_clicked()
{
    if(positionMarqueur2>0)
    {
        positionMarqueur2=0;
        ui->lineEditTempsMarqueur2->clear();
    }
    else {
        positionMarqueur2 = player->position()/1000;
        if(positionMarqueur2<positionMarqueur1)
        {
            qint64 tmp;
            tmp = positionMarqueur1;
            positionMarqueur1 = positionMarqueur2;
            positionMarqueur2=tmp;

            ui->lineEditTempsMarqueur1->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur1));
            ui->lineEditTempsMarqueur2->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur2));
        }
        ui->lineEditTempsMarqueur2->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur2));
    }
}


/**
 * @brief LecteurAudio::on_pushButtonMoins1_clicked()
 * @details
 * Diminue le temps auquel est positionné le marqueur 1 d'une seconde
 */

void LecteurAudio::on_pushButtonMoins1_clicked()
{
    positionMarqueur1 -=1;
    ui->lineEditTempsMarqueur1->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur1));
}


/**
 * @brief LecteurAudio::on_pushButtonPlus1_clicked()
 * @details
 * Augmente le temps auquel est positionné le marqueur 1 d'une seconde
 */

void LecteurAudio::on_pushButtonPlus1_clicked()
{
    if(positionMarqueur1+1<positionMarqueur2)
    {
        positionMarqueur1 += 1;
    }
    ui->lineEditTempsMarqueur1->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur1));
}


/**
 * @brief LecteurAudio::on_pushButtonMoins2_clicked()
 * @details
 * Diminue le temps auquel est positionné le marqueur 2 d'une seconde
 */

void LecteurAudio::on_pushButtonMoins2_clicked()
{
    if(positionMarqueur2-1>positionMarqueur1)
    {
        positionMarqueur2 -= 1;
    }
    ui->lineEditTempsMarqueur2->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur2));
}


/**
 * @brief LecteurAudio::on_pushButtonPlus2_clicked()
 * @details
 * Augmente le temps auquel est positionné le marqueur 2 d'une seconde
 */

void LecteurAudio::on_pushButtonPlus2_clicked()
{
    positionMarqueur2 +=1;
    ui->lineEditTempsMarqueur2->setText(ConvertirTempsEnHeuresMinutesSecondes(positionMarqueur2));
}
