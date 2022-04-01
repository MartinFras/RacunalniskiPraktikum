#ifndef OSEBA_H
#define OSEBA_H

#include <QString>

class Oseba
{
private:
    QString ime;
    QString priimek;
    int starost;
    int *id;
public:
    Oseba();
    Oseba(QString ime, QString priimek, int starost, int *id);
    ~Oseba();

    const QString &getIme() const;
    void setIme(const QString &newIme);
    const QString &getPriimek() const;
    void setPriimek(const QString &newPriimek);
    int getStarost() const;
    void setStarost(int newStarost);
    int *getId() const;
    void setId(int *newId);
};

#endif // OSEBA_H
