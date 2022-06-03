#include "mainwindow.h"

#include <QApplication>
#include <set>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    /// SET ///
    cout << "/// SET ///" << endl;
    //set - definicija in polnjenje
        //set uredi elemente od najmanjšega do največjega
    set<int> mnozica;
    for(int i = 0; i < 10; i++){
        mnozica.insert(rand() % 10);
    }
    //ostale funkcije podatkovne strukture set:
    /*
     * insert();
     * erase();
     * clear();
     * size();
     * count();
     * empty();
     */

    //iterator
    // begin() - postavi iterator na prvi element množice
    // end() - dobimo iterator na mesto, takoj za zadnjim elementom
    //z operatorjem * dostopamo do vrednosti, na katero "kaže" iterator
    set<int>::iterator it;
    for (it = mnozica.begin(); it != mnozica.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;

    //Izpisi vseh elementov - razlika med izpisom z iteratorjem in števcem i
    for(it = mnozica.begin(); it != mnozica.end(); it++){
        cout << *it << ": " << mnozica.count(*it) << endl;
    }

    cout << "------------" << endl;
    for(int i = 0; i < 10; i++){
        cout << i << ": " << mnozica.count(i) << endl;
    }

    //Vector//
    cout << "//// VECTOR ///" << endl;

    //vektorji so prilagodljiva polja - velikost jim lahko povečujemo in zmanjšujemo.

    vector<int> polje (5);
    for(int i = 0; i < 10; i++){
        polje.push_back(rand() %10);
    }

    cout << polje.size() << endl;

    //izpis s pomočjo .at()
    // če uporabljamo polje.size() za omejevanje števca, moramo uporabiti unsigned i
    for (unsigned i = 0; i < polje.size(); i++){
        cout << polje.at(i) << ", ";
    }
    cout << endl;

    //izpis s pomočjo iteratorja
    vector<int>::iterator vit;
    for(vit = polje.begin(); vit != polje.end(); vit++){
        cout << *vit << ", ";
    }
    cout << endl;

    //spreminjanje vrednosti z .at() in z iteratorjem
    polje.at(5) = 1000;
    vit = polje.begin()+4;
    *vit = 999;

    for (int i = 0; i < 15; i++){
        cout << polje.at(i) << ", ";
    }
    cout << endl;

    return a.exec();
}
