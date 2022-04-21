#ifndef KOMPLEKSNO_H
#define KOMPLEKSNO_H
#include <QString>


class Kompleksno
{
private:
    int rd, id;
public:
    Kompleksno();
    Kompleksno(int rd, int id);
    int getRd() const;
    void setRd(int newRd);
    int getId() const;
    void setId(int newId);
    QString vrniStevilo();
    Kompleksno sestej(Kompleksno drugo);
    Kompleksno operator-(Kompleksno drugo);
};

#endif // KOMPLEKSNO_H
