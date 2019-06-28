#ifndef CREATIONPERSO_H
#define CREATIONPERSO_H

#include <QDialog>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class CreationPerso;
}

class CreationPerso : public QDialog
{
    Q_OBJECT

public:
    explicit CreationPerso(QWidget *parent = nullptr);
    ~CreationPerso();

    QString obtenirNom();
    QString obtenirClasse();
    QString obtenirPrenom();
    QString obtenirAge();
    QString obtenirTaille();
    QString obtenirPoids();
    QString obtenirChoixArmeDeuxMains();

private slots:
    void on_pushButtonEnter_clicked();

    void on_comboBoxClasse_currentIndexChanged(int index);

private:
    Ui::CreationPerso *ui;
    QMediaPlayer player;
    QString classe;
    QString nom;
    QString prenom;
    QString age;
    QString taille;
    QString poids;
    QString armeDeuxMains; // Oui ou Non

signals:
    void infoPerso(QString classe,QString nom,QString prenom,QString age,QString taille,QString poids,QString ArmeDeuxMain,QString mainDroite, QString mainGauche, QString armedeux);
};

#endif // CREATIONPERSO_H
