#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "kompleksno.h"
#include <QDebug>

Kompleksno sestejKompleksni(Kompleksno prvo, Kompleksno drugo){
    return Kompleksno(prvo.getRd()+drugo.getRd(), prvo.getId()+drugo.getId());
}

Kompleksno operator+(Kompleksno prvo, Kompleksno drugo){
    return Kompleksno(prvo.getRd()+drugo.getRd(), prvo.getId()+drugo.getId());
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    Kompleksno stevilo(2, 3);

    qDebug() << stevilo.vrniStevilo();

    Kompleksno drugoStevilo(3, 5);

    qDebug() << drugoStevilo.vrniStevilo();

    //metoda razreda kompleksno
    Kompleksno tretjeStevilo = stevilo.sestej(drugoStevilo);

    qDebug() << tretjeStevilo.vrniStevilo();

    drugoStevilo.setRd(10);

    //funkcija definirana znotraj mainwindow.cpp (vendar ni metoda razreda)
    tretjeStevilo = sestejKompleksni(stevilo, drugoStevilo);

    qDebug() << tretjeStevilo.vrniStevilo();

    drugoStevilo.setRd(20);

    //preoblaganje operatorja + (funkcije z imenom +)
    tretjeStevilo = stevilo + drugoStevilo;

    qDebug() << tretjeStevilo.vrniStevilo();

    //preoblaganje operatorja - definirano kot metodo razreda Kompleksno
    tretjeStevilo = drugoStevilo - stevilo;

    qDebug() << tretjeStevilo.vrniStevilo();

}



MainWindow::~MainWindow()
{
    delete ui;
}

