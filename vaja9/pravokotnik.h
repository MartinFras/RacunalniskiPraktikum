#ifndef PRAVOKOTNIK_H
#define PRAVOKOTNIK_H

#include "lik.h"

class Pravokotnik: public Lik
{
protected:
    int a;
private:
    int b;
public:
    Pravokotnik();
    Pravokotnik(int a, int b){
        this->a = a;
        this->b = b;
    }
    virtual double ploscina(){
        return a*b;
    }
    ~Pravokotnik(){}
};

#endif // PRAVOKOTNIK_H
