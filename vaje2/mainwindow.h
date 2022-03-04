#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <iostream>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void preberiVnosnaPolja();
    void pocistiVnosnaPolja();
    void izvediFunkcijo(int izbira);
    int index;
    QString osnovniNiz;
    QString paramNiz;
    QString output;
    QString razlaga;
    int izbranaFunkcija;

private slots:
    void on_buttonReset_clicked();

    void on_buttonGo_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
