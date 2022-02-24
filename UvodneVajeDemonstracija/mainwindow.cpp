#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <string>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_naloga10Button_clicked()
{
    ///Delo s števili///
    /// stevila so int, double, float
    /// stevilo -> QString:
    /// QString::number(<stevilo>)
    /// QString -> stevilo:
    /// <steviloVOblikiQStringa>.toInt();
    /// izpis na UI:
    /// ui->imeObjektaZaIzpis->setText(<tekst v obliki QString>);
    /// cout deluje enako kot že poznate

    int vnesenoStevilo = QInputDialog::getInt(this, "Pozor novo okno!", "Vnesite celo število med 0 in 10", 0, 0, 10);
    ui->izpis->setText(QString::number(vnesenoStevilo));
    QString drugoStevilo = QInputDialog::getText(this, "QinputDialog za vnašanje števila", "Vnesi število v obliki QString teksta");
    int sestevek = vnesenoStevilo + drugoStevilo.toInt();
    ui->izpis->setText("Seštevek števil " + QString::number(vnesenoStevilo) + " in " + drugoStevilo + " je " + QString::number(vnesenoStevilo+drugoStevilo.toInt()));
    cout << "sestevek stevil je " << sestevek << endl;
}




void MainWindow::on_naloga11Button_clicked()
{
    ///String in QString
    /// QString != string
    /// potrebna je pretvorba met Std::string in Qstring
    /// string -> QString:
    /// QString::fromStdString(string);
    /// QString -> string
    /// nizOblilkeQstring.toStdString();

    string niz = "test";
    ui->izpis->setText(QString::fromStdString(niz));
    QString niz2;
    niz2 = QInputDialog::getText(this, "Qstring Input Dialog", "Vnesi QString");
    ui->izpis->setText(niz2);

    string skupenNiz = niz + niz2.toStdString();
    cout << "skupen niz: " << skupenNiz << endl;
}

