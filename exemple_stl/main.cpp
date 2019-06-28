#include <QCoreApplication>
#include <list>
#include <iterator>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*vector <int> tableau;
    cout << setfill('0');
    for(int indice=0 ; indice < 30 ; indice++)
    {
        tableau.push_back(indice);
        cout << "nombre d'éléments : " << setw(2) << tableau.size();
        cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;
    }
    cout << endl;

    // retrait d'un élements à la fin du tableau
    tableau.pop_back();
    cout << "nombre d'éléments : " << setw(2) << tableau.size();
    cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;
    // retrait d'un élément au début du tableau
    //tableau.pop_front(); // n'existe pas sous QT
    cout << "nombre d'éléments : " << setw(2) << tableau.size();
    cout << " -- Capacité : " << setw(2) << tableau.capacity() << endl;*/

    vector<string> vect;
    vect.push_back( "C" );
    vect.push_back( "C++" );
    vect.push_back( "Java" );

    list<string> lst;
    // boucle sur un vecteur de la STL
    for( const string & str : vect ) {
        lst.push_front( str );
    }

    // boucle sur une liste de la STL
    for (const string & str : lst ) {
        cout << "- " << str << endl;
    }
    cout << endl;
    return a.exec();

}
