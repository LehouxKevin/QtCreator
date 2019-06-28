#ifndef SONOMETRE_H
#define SONOMETRE_H

#include <QWidget>
#include <QAudioInput>
#include <QByteArray>
#include <QComboBox>
#include <QMainWindow>
#include <QObject>
#include <QPixmap>
#include <QPushButton>
#include <QSlider>
#include <QWidget>
#include <QScopedPointer>
#include <QDebug>
#include "audioinfo.h"
#include <QTimer>

namespace Ui {
class sonometre;
}

class sonometre : public QWidget
{
    Q_OBJECT

public:
    explicit sonometre(QWidget *parent = 0);
    ~sonometre();


private slots:

    void LevelChange(); //affichage du niveau dans le labelDb

    void on_pushButtonQuitter_clicked(); // quitter l'application

    void calculerMoyenne();
    void on_lineEditSeuil_textChanged(const QString &arg1);

    void on_horizontalSliderSeuil_valueChanged(int value);

private:
    Ui::sonometre *ui;
    QScopedPointer<AudioInfo> m_audioInfo; //données de l'audio
    QScopedPointer<QAudioInput> m_audioInput; //données du microphone
    qreal m_level ; //valeur du niveau sonore


    void initializeAudio(const QAudioDeviceInfo &deviceInfo); // fonction initialisant l'audio et lancant l'ecoute
    void sliderChanged(int value); // gere le slider de volume du microphone


    int indice;
    float stockageDB;
    float seuil;
};

#endif // SONOMETRE_H
