#ifndef NIVEAU_H
#define NIVEAU_H

#include <QWidget>

namespace Ui {
class Niveau;
}

class Niveau : public QWidget
{
    Q_OBJECT

public:
    explicit Niveau(QWidget *parent = nullptr);
    ~Niveau();

private:
    Ui::Niveau *ui;
};

#endif // NIVEAU_H
