#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "oseba.h"

int Oseba::s_idGenerator = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Oseba peter(Oseba::getS_idGenerator());
    //peter.setId(Oseba::getS_idGenerator());

    QString text = "";
    text += QString::number(peter.getId());

    Oseba joze(Oseba::getS_idGenerator());
    //joze.setId(Oseba::getS_idGenerator());
    text += ", " + QString::number(joze.getId());

    ui->textBrowser->setText(text);



}

MainWindow::~MainWindow()
{
    delete ui;
}

