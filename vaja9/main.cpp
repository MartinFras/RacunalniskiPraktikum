#include "mainwindow.h"

#include <QApplication>

#include "pravokotnik.h"
#include "kvadrat.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    Pravokotnik prviPravokotnik(2, 4);

    qDebug()<<QString::number(prviPravokotnik.ploscina());

    Kvadrat prviKvadrat(4);

    qDebug() << QString::number(prviKvadrat.ploscina());

    Pravokotnik* drugiPravokotnik = new Pravokotnik(4, 5);

    qDebug() << QString::number(drugiPravokotnik->ploscina());

    Kvadrat* drugiKvadrat = new Kvadrat(5);

    qDebug() << QString::number(drugiKvadrat->ploscina());


    //Pravokotnik* tretjiPravokotnik = new Kvadrat(5);

    //Kvadrat* tretjiKvadrat = dynamic_cast<Kvadrat*>(tretjiPravokotnik);
    Kvadrat* tretjiKvadrat = dynamic_cast<Kvadrat*>(drugiPravokotnik);

    if( tretjiKvadrat != nullptr){
        qDebug() << QString::number(tretjiKvadrat->ploscina());
    }
    else {
        qDebug() << "Napaka tretjiKvadrat=nullptr";
    }

    delete drugiPravokotnik;
    delete drugiKvadrat;
    delete tretjiKvadrat;
    //delete tretjiPravokotnik;
    return a.exec();
}
