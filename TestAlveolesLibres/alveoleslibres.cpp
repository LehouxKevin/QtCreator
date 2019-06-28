#include "alveoleslibres.h"
#include <QDebug>

AlveolesLibres::AlveolesLibres()
{

}
/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbColonnes
 * @details Constructeur de la classe AlveolesLibres. Il initialise la pile avec le nombre de rangées multiplié par le nombre de colonnes.
 */
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes) : nbRangees(_nbRangees), nbColonnes(_nbColonnes)
{
    for(int i = 1; i <= _nbRangees*_nbColonnes ; i++)
    {
      push_back(i);
    }

    //resize();
}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee
 * @param _colonne
 * @details Méthodes de la classe AlveolesLibre. Elle recupère la valeur au dessus de la pile puis supprime cette dernière de la pile.
 * @return
 */
bool AlveolesLibres::Reserver(int &_rangee, int &_colonne)
{
    bool valeurARetourne;
    int numeroAlveole = back();
    if(numeroAlveole > 1)
    {
        _rangee = ((numeroAlveole - 1) / nbColonnes) + 1;
        _colonne = (numeroAlveole - 1) % nbColonnes + 1;

        pop_back();
        valeurARetourne = true;
    }
    else {
        valeurARetourne = false;
    }

    qDebug()<<valeurARetourne;

    return valeurARetourne;
}

/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee
 * @param _colonne
 * @return
 * @details Méthode de la classe AlveolesLibre. Elle ajoute au sommet de la pile l'alvéole qui viens d'être libérer.
 */
void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    int numAlveole=nbColonnes*(_rangee-1)+_colonne;
    push_back(numAlveole);
}
