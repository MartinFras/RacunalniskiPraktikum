#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include "profesor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Student *janez = new Student();
    janez->setIme("Janez");
    qDebug() << janez->getIme();

    delete janez;

    Profesor *joze = new Profesor("Joze", "Novak", 123456);

    qDebug() << joze->getEmso() << " " << joze->getIme();

    delete joze;
}

MainWindow::~MainWindow()
{
    delete ui;
}

