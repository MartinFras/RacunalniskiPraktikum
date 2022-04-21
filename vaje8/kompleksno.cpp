#include "kompleksno.h"

int Kompleksno::getRd() const
{
    return rd;
}

void Kompleksno::setRd(int newRd)
{
    rd = newRd;
}

int Kompleksno::getId() const
{
    return id;
}

void Kompleksno::setId(int newId)
{
    id = newId;
}

QString Kompleksno::vrniStevilo()
{
    QString stevilo = QString::number(rd) + " + " + QString::number(id) + "i";
    return stevilo;
}

Kompleksno Kompleksno::sestej(Kompleksno drugo)
{
    return Kompleksno(this->rd + drugo.rd, this->id + drugo.id);
}

Kompleksno Kompleksno::operator-(Kompleksno drugo)
{
    return Kompleksno(this->rd - drugo.rd, this->id - drugo.id);
}

Kompleksno::Kompleksno()
{
    rd = 0;
    id = 0;
}

Kompleksno::Kompleksno(int rd, int id)
{
    this->id = id;
    this->rd = rd;
}


