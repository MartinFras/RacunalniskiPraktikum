#ifndef OSEBA_H
#define OSEBA_H
#include <QString>
#include <iostream>
#include <QDebug>

using namespace std;

class Oseba
{
private:
    QString ime;
    QString priimek;
    int emso;

public:
    Oseba();
    const QString &getIme() const;
    void setIme(const QString &newIme);
    const QString &getPriimek() const;
    void setPriimek(const QString &newPriimek);
    int getEmso() const;
    void setEmso(int newEmso);
};

#endif // OSEBA_H
