#include "student.h"

const QString &Student::getVpisnaSt() const
{
    return vpisnaSt;
}

void Student::setVpisnaSt(const QString &newVpisnaSt)
{
    vpisnaSt = newVpisnaSt;
}

Student::Student()
{
    vpisnaSt = "";
}
