#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "domacazival.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //primer klica privzetega konstruktorja
    DomacaZival curiMuri;
    cout << curiMuri.getIme().toStdString() << endl;

    DomacaZival mucaMaca;
    //spreminjanje lastnosti objekta//
    //mucaMaca.ime = "Maca"; //Ker smo lastnost ime skrili, je več ne moremo direktno dostopati. Potrebujemo metodo:
    mucaMaca.setIme("Maca");
    cout << mucaMaca.getIme().toStdString() << endl;

    //primer klica konstruktorja, ki priredi vrednosti objekta glede na parametre
    DomacaZival mucaCopatarica {"Copatarica", "muca", 200 };
    cout << mucaCopatarica.getIme().toStdString() << endl;

    //primer kopirnega konstruktorja
    DomacaZival kopijaMuceCopatarice {mucaCopatarica};
    cout << kopijaMuceCopatarice.getIme().toStdString() << endl;

    //primeri public vs private (javne vs privatne)
    DomacaZival muca1;
    //muca1.ime = "Muca Maca"; //za public oz. vidne spremenljivke
    muca1.setIme("Muca Maca"); //za private oz. skrite spremenljivke
    //muca1.starost = 1;
    muca1.setStarost(1);
    //muca1.vrsta = "muca";
    muca1.setVrsta("muca");
    //cout << muca1.ime.toStdString() << endl; //public
    cout << muca1.getIme().toStdString() << endl; //private
        
    //primeri klica metode razreda.
    cout << kopijaMuceCopatarice.izpisiZival().toStdString() << endl;
    cout << muca1.izpisiZival().toStdString() << endl
}

MainWindow::~MainWindow()
{
    delete ui;
}

