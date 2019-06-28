#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.18.58.5");    	// l'adresse IP du serveur mySQL
    db.setUserName("snir");    		// le nom de l'utilisateur
    db.setPassword("snir");     			// le mot de passe de l'utilisateur
    db.setDatabaseName("snirBanque1");      	// le nom de la base
    if(!db.open())
    {
        qDebug()<<"Database acces erorr : "<<db.lastError();
    }
    else {
        qDebug()<<"Database acess sucess";

        QSqlQuery maRequete(db);
        if(maRequete.exec("SELECT * FROM client"))
        {
            while(maRequete.next())
            {
                QVariant id = maRequete.value(0);  // 0 première colonne
                QVariant nom = maRequete.value("nom");
                QVariant prenom = maRequete.value("prenom");
                QVariant ville = maRequete.value("ville");
                qDebug()<<id.toString() << nom.toString() << prenom.toString() << ville.toString();
            }

        }
        else {
            qDebug()<<"Client select request error";
        }

        //QString insRequete = "INSERT INTO `snirBanque`.`client`(`nom`, `prenom`, `ville`) VALUES (:prenom, :nom, :ville)";

        //maRequete.prepare(insRequete);
        maRequete.prepare("INSERT INTO client(nom, prenom, ville) VALUES (:prenom, :nom, :ville)");
        maRequete.bindValue(":prenom","Kévin");
        maRequete.bindValue(":nom","Lehoux");
        maRequete.bindValue(":ville","Vaas");

        if(!maRequete.exec())
        {
            qDebug()<<"Client insert request error";
        }
    }

    db.close();

    return a.exec();
}
