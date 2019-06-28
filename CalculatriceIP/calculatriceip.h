#ifndef CALCULATRICEIP_H
#define CALCULATRICEIP_H

#include <QWidget>

namespace Ui {
class CalculatriceIP;
}

class CalculatriceIP : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatriceIP(QWidget *parent = nullptr);
    ~CalculatriceIP();

private:
    Ui::CalculatriceIP *ui;
};

#endif // CALCULATRICEIP_H
