#include "domacazival.h"

DomacaZival::DomacaZival()
{
ime = "Muri";
vrsta = "muca";
starost = 3;
}

DomacaZival::DomacaZival(QString imeZivali, QString vrstaZivali, int starostZivali){
    ime = imeZivali;
    vrsta = vrstaZivali;
    starost = starostZivali;
}

DomacaZival::DomacaZival(const DomacaZival &original){
    ime = original.ime;
    vrsta = original.vrsta;
    starost = original.starost;
}

QString DomacaZival::getIme(){
    return ime;
}

QString DomacaZival::getVrsta(){
    return vrsta;
}

int DomacaZival::getStarost(){
    return starost;
}

void DomacaZival::setIme(QString imeZivali){
    ime = imeZivali;
}

void DomacaZival::setVrsta(QString  vrstaZivali){
    vrsta = vrstaZivali;
}

void DomacaZival::setStarost(int starostZivali){
    starost = starostZivali;
}

DomacaZival::~DomacaZival(){}

QString DomacaZival::izpisiZival(){
    return ime + " je " + vrsta + " star/stara " + QString::number(starost) + " let.";
}
