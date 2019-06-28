#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H
#include <vector>

using namespace std;

typedef vector <int> pileInt;

class AlveolesLibres : public pileInt
{
public:
    AlveolesLibres();
    AlveolesLibres(const int _nbRangees, const int _nbColonnes);
    bool Reserver(int &_rangee,int &_colonne);
    void Liberer(const int _rangee, const int _colonne);

public:
    int nbRangees;
    int nbColonnes;


};




#endif // ALVEOLESLIBRES_H
