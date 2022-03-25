#include "oseba.h"
#include <iostream>

int Oseba::getId() const
{
    return id;
}

int Oseba::getS_idGenerator()
{
    return s_idGenerator;
}

void Oseba::setS_idGenerator(int newS_idGenerator)
{
    s_idGenerator = newS_idGenerator;
}

Oseba::Oseba(int a) : id(a)
{
    s_idGenerator++;
}
