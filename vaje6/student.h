#ifndef STUDENT_H
#define STUDENT_H
#include "oseba.h"

class Student : public Oseba
{

private:
    QString vpisnaSt;

public:
    Student();
    const QString &getVpisnaSt() const;
    void setVpisnaSt(const QString &newVpisnaSt);
    ~Student(){
        cout << "brisem studenta" << endl;
        //debug se zgodi pred build, tako se bodo v konzoli najprej izpisali vsi qDebug-i, šele nato pa cout-i
        qDebug() << "brisem studenta qdebug";
    }
};

#endif // STUDENT_H
