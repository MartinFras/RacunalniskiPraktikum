#include "profesor.h"

const QString &Profesor::getOddelek() const
{
    return oddelek;
}

void Profesor::setOddelek(const QString &newOddelek)
{
    oddelek = newOddelek;
}

Profesor::Profesor()
{
    oddelek = "";
}

Profesor::Profesor(QString ime, QString priimek, int emso)
{
    this->setIme(ime);
    this->setPriimek(priimek);
    this->setEmso(emso);
    this->oddelek = "OMR";
}
