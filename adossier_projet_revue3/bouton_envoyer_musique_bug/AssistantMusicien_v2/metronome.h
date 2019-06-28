#ifndef METRONOME_H
#define METRONOME_H

#include <QWidget>

namespace Ui {
class Metronome;
}

class Metronome : public QWidget
{
    Q_OBJECT

public:
    explicit Metronome(QWidget *parent = nullptr);
    ~Metronome();

private:
    Ui::Metronome *ui;
};

#endif // METRONOME_H
