#ifndef DOMACAZIVAL_H
#define DOMACAZIVAL_H
#include <QMainWindow>

class DomacaZival
{
private:
    QString vrsta;
    QString ime;
    int starost;
public:
    DomacaZival();
    DomacaZival(QString imeZivali, QString vrstaZivali, int starostZivali);
    DomacaZival(const DomacaZival &original);
    ~DomacaZival();
    QString getIme();
    void setIme(QString imeZivali);
    QString getVrsta();
    void setVrsta(QString vrstaZivali);
    int getStarost();
    void setStarost(int starostZivali);
    QString izpisiZival();
};

#endif // DOMACAZIVAL_H
