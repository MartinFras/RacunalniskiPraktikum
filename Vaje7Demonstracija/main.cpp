#include "mainwindow.h"

#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsPolygonItem>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsView *view = new QGraphicsView();
    view->setWindowTitle("Demonstracija");
    view->resize(402, 402);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(-200, -200, 400, 400);

    view->setScene(scene);

    QPen pen;
    QColor barva = QColor(0, 255, 0);
    pen.setColor(barva);
    pen.setWidth(5);

    //daljica
    QGraphicsLineItem *xOs = new QGraphicsLineItem(0, -200, 0, 200);
    scene->addItem(xOs);
    xOs->setPen(pen);

    //pravokotnik
    QGraphicsRectItem *border = new QGraphicsRectItem(-200, -200, 400, 400);
    scene->addItem(border);
    border->setPen(pen);

    //trikotnik
    QPolygon poli;
    poli.setPoints(3, -175, 100, 0, -200, 175, 100);
    QGraphicsPolygonItem *trikotnik = new QGraphicsPolygonItem(poli);
    scene->addItem(trikotnik);
    barva = QColor(255, 0, 0);
    pen.setColor(barva);
    trikotnik->setPen(pen);

    //elipsa oz. krožnica
    QGraphicsEllipseItem *kroznica = new QGraphicsEllipseItem(-200, -200, 400, 400);
    scene->addItem(kroznica);

    //kvadratna funkcija
    int enota = 50;
    double x1;
    double x2;
    for(int i = -16; i < 16; i++){
        x1 = i*0.25;
        x2 = (i+1)*0.25;
        QGraphicsLineItem *delLomljenke = new QGraphicsLineItem(x1*enota, -x1*x1*enota+200, x2*enota, -x2*x2*enota+200);
        scene->addItem(delLomljenke);
    }


    view->show();

    return a.exec();
}
