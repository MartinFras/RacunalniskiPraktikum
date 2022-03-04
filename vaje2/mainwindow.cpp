#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString options[] = {
      ".append()", ".at()", ".back()", ".contains()", ".count()", ".indexOf()", ".insert()"};
    /*Druge pogosto uporabljene funkcije:
     .isEmpty(), .isNull(), .isUpper(), .lastIndexOf(), .length(), .prepend(), .remove(), .replace(), .resize(), .split(), .toLower(), .toUpper()
    */

    for (int i = 0; i < options->length()-1; i++){
        ui->selectFunction->addItem(options[i]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pocistiVnosnaPolja(){
    ui->inputParameter->clear();
    ui->inputIndex->clear();
    ui->inputStartingString->clear();
}

void MainWindow::on_buttonReset_clicked()
{
   pocistiVnosnaPolja();
}

void MainWindow::preberiVnosnaPolja(){
    index = ui->inputIndex->text().toInt();
    osnovniNiz = ui->inputStartingString->text();
    paramNiz = ui->inputParameter->text();
    izbranaFunkcija = ui->selectFunction->currentIndex();
}

void MainWindow::izvediFunkcijo(int izbira){
    switch(izbira){
    case 0: // .append()
        output = osnovniNiz.append(paramNiz);
        razlaga = "niz.append(param) prilepi parameter na konec niza";
        ui->inputIndex->clear();
        break;
    case 1: // .at()
        output = osnovniNiz.at(index);
        razlaga = "niz.at(index) vrne znak iz niza, ki je na podanem indeksu";
        ui->inputParameter->clear();
        break;
    case 2: // .back()
        output = osnovniNiz.back();
        razlaga = "niz.back() vrne zadnji znak v nizu";
        ui->inputParameter->clear();
        ui->inputIndex->clear();
        break;
    case 3: // .contains()
        output = osnovniNiz.contains(paramNiz, Qt::CaseInsensitive)? "true": "false";
        razlaga = "niz.contains(param) vrne true, če se param nahaja znotraj niza, drugače vrne false";
        ui->inputIndex->clear();
        break;
    case 4: // .count()
        output = QString::number(osnovniNiz.count());
        razlaga = "niz.count() vrne dolžino znakov v nizu oz. dolžino QString niza";
        ui->inputParameter->clear();
        ui->inputIndex->clear();
        break;
    case 5: // .indexOf()
        output = QString::number(osnovniNiz.indexOf(paramNiz));
        razlaga = "niz.indexOf(param) vrne index preveri ali se parameter pojavi v nizu in v kolikor je to res vrne indeks v nizu na katerem se začne parameter";
        ui->inputIndex->clear();
        break;
    case 6: // .insert()
        output =osnovniNiz.insert(index, paramNiz);
        razlaga = "niz.insert(index, param) vrine param v niz na podanem indeksu";
        break;
    }
    ui->outputText->setText(output);
    ui->explanationOutput->setText(razlaga);
}

void MainWindow::on_buttonGo_clicked()
{
    preberiVnosnaPolja();
    izvediFunkcijo(izbranaFunkcija);

}

