#ifndef LECTEURAUDIO_H
#define LECTEURAUDIO_H

#include <QWidget>

namespace Ui {
class LecteurAudio;
}

class LecteurAudio : public QWidget
{
    Q_OBJECT

public:
    explicit LecteurAudio(QWidget *parent = nullptr);
    ~LecteurAudio();

private:
    Ui::LecteurAudio *ui;
};

#endif // LECTEURAUDIO_H
