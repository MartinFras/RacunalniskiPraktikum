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

int Oseba::getEmso() const
{
    return emso;
}

void Oseba::setEmso(int newEmso)
{
    emso = newEmso;
}

Oseba::Oseba()
{
    ime = "";
    priimek = "";
    emso = NULL;
}
