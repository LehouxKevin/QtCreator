#include "connexion.h"

Connexion::Connexion()
{
    /** Label **/
    QLabel *label_IP = new QLabel();
    QLabel *label_User = new QLabel();
    QLabel *label_PWD = new QLabel();

    label_IP->setText("Adresse IP du serveur :");
    label_User->setText("Utilisateur :");
    label_PWD->setText("Mot de passe :");

    /** Line Edit **/

    lineEditAdresse = new QLineEdit();
    lineEditUtilisateur = new QLineEdit();
    lineEditPassword = new QLineEdit();

    lineEditPassword->setEchoMode(QLineEdit::Password);

    lineEditAdresse->setText("172.18.58.5");
    lineEditUtilisateur->setText("snir");
    lineEditPassword->setText("snir");

    /** Boutons **/

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);

    connect(buttonBox, SIGNAL(accepted()),this, SLOT(on_buttonBox_accepted()));
    connect(buttonBox, SIGNAL(rejected()),this,SLOT(reject()));

    /** Layout **/

    QFormLayout *placementInterface = new QFormLayout();
    QVBoxLayout *verticalLayout = new QVBoxLayout();

    placementInterface->addWidget(label_IP);
    placementInterface->addWidget(lineEditAdresse);

    placementInterface->addWidget(label_User);
    placementInterface->addWidget(lineEditUtilisateur);

    placementInterface->addWidget(label_PWD);
    placementInterface->addWidget(lineEditPassword);

    placementInterface->addWidget(buttonBox);

    verticalLayout->addItem(placementInterface);
    this->setLayout(verticalLayout);

    /** ************************************************************* **/

    connectee=false;

    listeBases = new QStringList();

}

QSqlDatabase Connexion::ObtenirDb()
{
    return db;
}

QStringList Connexion::ObtenirListeBases()
{
    return *listeBases;
}

void Connexion::lireBases()
{
    QSqlQuery maRequete(db);
    if(maRequete.exec("SHOW DATABASES"))
    {
        while(maRequete.next())
        {
            QVariant bases = maRequete.value(0);  // 0 première colonne
            qDebug()<<bases.toString();
            listeBases->append(bases.toString());
        }


    }
    else {
        qDebug()<<"Client select request error";
    }
}

void Connexion::on_buttonBox_accepted()
{
    if(connectee)
    {
        db.close();
        connectee=false;
    }
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(lineEditAdresse->text());    	// l'adresse IP du serveur mySQL
    db.setUserName(lineEditUtilisateur->text());    		// le nom de l'utilisateur
    db.setPassword(lineEditPassword->text());     			// le mot de passe de l'utilisateur
    db.setDatabaseName("snirBanque1");      	// le nom de la base
    if(!db.open())
    {
        qDebug()<<"Database acces erorr : "<<db.lastError();
    }
    else {
        qDebug()<<"Database acess sucess";
        connectee=true;
        lireBases();
    }
    this->accept();
}
