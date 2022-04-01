#include "oseba.h"

const QString &Oseba::getIme() const
{
    return ime;
}

void Oseba::setIme(const QString &newIme)
{
    ime = newIme;
}

const QString &Oseba::getPriimek() const
{
    return priimek;
}

void Oseba::setPriimek(const QString &newPriimek)
{
    priimek = newPriimek;
}

int Oseba::getStarost() const
{
    return starost;
}

void Oseba::setStarost(int newStarost)
{
    starost = newStarost;
}

int *Oseba::getId() const
{
    return id;
}

void Oseba::setId(int *newId)
{
    id = newId;
}

Oseba::Oseba()
{
    this->ime = "";
    this->priimek = "";
    this->starost = NULL;
    id = new int();
}

Oseba::Oseba(QString ime, QString priimek, int starost, int *id)
{
    this->ime = ime;
    this->priimek = priimek;
    this->starost = starost;
    this->id = id; //pomnite, da tukaj dejansko priredimo naslov kazalca in ne vrednosti.
}

Oseba::~Oseba()
{
    delete this->id;
    this->id = nullptr;
    delete this;
}


