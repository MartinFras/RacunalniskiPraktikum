#ifndef KVADRAT_H
#define KVADRAT_H

#include "pravokotnik.h"

class Kvadrat : public Pravokotnik
{
public:
    Kvadrat();
    Kvadrat(int a): Pravokotnik(a, 0){}
    double ploscina(){
        return a*a;
    }
    ~Kvadrat(){}
};

#endif // KVADRAT_H
