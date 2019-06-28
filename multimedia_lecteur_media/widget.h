#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QFileDialog>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonChoisirFichier_clicked();

    void on_pushButtonJouerSon_clicked();

    void onQMediaPlayer_stateChanged(QMediaPlayer::State state);
    void onQMediaPlayer_error(QMediaPlayer::Error error);

    void onQMediaPlayer_durationChanged(qint64);
    void onQMediaPlayer_positionChanged(qint64);

private:
    Ui::Widget *ui;
    QString nomFichier;
    QMediaPlayer player;
};

#endif // WIDGET_H
