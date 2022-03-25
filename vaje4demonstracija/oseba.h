#ifndef OSEBA_H
#define OSEBA_H


class Oseba
{
private:
    const int id;
    static int s_idGenerator;
public:
    Oseba(int a);
    int getId() const;
    static int getS_idGenerator();
    static void setS_idGenerator(int newS_idGenerator);
};

#endif // OSEBA_H
