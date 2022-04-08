#ifndef PROFESOR_H
#define PROFESOR_H
#include "oseba.h"


class Profesor : public Oseba
{
private:
    QString oddelek;
public:
    Profesor();
    Profesor(QString ime, QString priimek, int emso);
    const QString &getOddelek() const;
    void setOddelek(const QString &newOddelek);
    ~Profesor(){
        cout << "brisem profesorja" << endl;
    };
};

#endif // PROFESOR_H
