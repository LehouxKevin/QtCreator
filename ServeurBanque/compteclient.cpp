#include "compteclient.h"

CompteClient::CompteClient(QObject *object) : QTcpSocket (object)
{

}

bool CompteClient::Retirer(float montant)
{
    bool retVal = false;
    if(this->solde >= montant)
    {
        this->solde -= montant;
        retVal = true;
    }
}

void CompteClient::Deposer(float montant)
{
    this->solde += montant;
}

float CompteClient::ObtenirSolde()
{
    return this->solde;
}

void CompteClient::DefinirNumCompte(int nc)
{
    this->numCompte = nc;
    this->solde = 200;
}

int CompteClient::ObtenirNumCompte()
{
    return this->numCompte;
}
