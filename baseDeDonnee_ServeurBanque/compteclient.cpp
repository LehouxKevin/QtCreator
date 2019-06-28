#include "compteclient.h"





//InterfaceAccesBDBanque CompteClient::bd("172.18.58.14","banque","snir","snir");
InterfaceAccesBDBanque CompteClient::bd;

CompteClient::CompteClient(QObject *object) : QTcpSocket (object)
{

}

bool CompteClient::Retirer(float montant)
{
    bool retVal = false;
    if(this->solde >= montant)
    {
        this->solde -= montant;
        bd.MettreAjourLeSolde(this->numCompte,bd.ObtenirSolde(this->numCompte)-montant);
        retVal = true;
    }
    return retVal;
}

void CompteClient::Deposer(float montant)
{
    if(montant > 0)
    {
        this->solde += montant;
        bd.MettreAjourLeSolde(this->numCompte,bd.ObtenirSolde(this->numCompte)+montant);
    }
}

float CompteClient::ObtenirSolde()
{
    return bd.ObtenirSolde(this->numCompte);
}

void CompteClient::DefinirNumCompte(int nc)
{
    bd.creerCompte(nc);
    this->numCompte = nc;
    this->solde = bd.ObtenirSolde(nc);

}

int CompteClient::ObtenirNumCompte()
{
    return this->numCompte;
}
