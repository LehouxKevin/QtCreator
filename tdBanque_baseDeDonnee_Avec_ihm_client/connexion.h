#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QVBoxLayout>

class Connexion : public QDialog
{
    Q_OBJECT
public:
    Connexion();
    QSqlDatabase ObtenirDb();
    QStringList ObtenirListeBases();

    //QGridLayout *placementInterface;

private :
    QSqlDatabase db;
    QStringList *listeBases;
    bool connectee;

    void lireBases();

    QLineEdit *lineEditAdresse;
    QLineEdit *lineEditUtilisateur;
    QLineEdit *lineEditPassword;

private slots:

    void on_buttonBox_accepted();
};

#endif // CONNEXION_H
