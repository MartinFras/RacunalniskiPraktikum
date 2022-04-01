#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "oseba.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //statična alokacija spomina - OS začasno avtomatsko rezervira prostor, vendar mora vedeti natančno koliko spomina mora rezervirati. OS bo sam poskrbel tudi za sprostitev spomina,
    // ko se le ta ne bo več uporabljal - najkasneje takrat, ko se program ustavi.
    int stevilo;
    //dinamična alokacija spomina - program operacijskemu sistemu pove, da rezervira prostor za program. OS ne poskrbi za sprostitev spomina. Tako le ta ostane rezerviran, dokler
    // ga ne sprostimo ročno (z delete) ali ponovno zaženemo računalnik.
    int *dinamicnoStevilo = new int();

    *dinamicnoStevilo = 5;

    cout << dinamicnoStevilo << endl;
    cout << *dinamicnoStevilo << endl;

    //v primeru uporabe dinamične alokacije spomina je potrebno pomnilnik vrniti operacijskemu sistemu
    delete dinamicnoStevilo; //delete pove OS, da lahko ponovno uporablja lokacijo, ki je bila do sedaj rezervirana za dinamicnoStevilo.
    //dobra praksa je, da po uporabi delete nastavimo naslov na katerega kaže kazalec še na nullptr:
    dinamicnoStevilo = nullptr; //ker dinamicnoStevilo še vedno hrani naslov do lokacije, ki jo sedaj lahko uporablja tudi OS, ponastavimo naslov na nullptr, tako da do dejanskega
                                //naslova na katerega je kazal kazaled dinamicnoStevilo ne moremo več dostopati
    //Če ne uporabljamo delete pride do tako imenovanega Memory Leak-a, to je rezervacija spomina, ki se ne sprosti. Če to ponavljamo eventuelno popolnoma rezerviramo možen spomin
    // na naši napravi in smo prisiljeni ponovno zagnati napravo.

    ////// Delo z razredi /////
    //veljajo enaka pravila, kot pri dinamični alokaciji spremenljivk

    Oseba *janez = new Oseba();

    //čiščenje pomnilnika - destruktorji razreda se vedno kličejo avtomatsko na koncu bloka kode. Če jih uporabimo prej, se bodo klicali večkrat in se program sesuje
    //delete janez;
    //janez->~Oseba();

    int jozeID = 12345;
    int *jozeIDptr = new int(123);

    Oseba *joze = new Oseba("Joze", "Novak", 50, &jozeID);

    //klicanje metod dinamično ustvarjenih razredov se sedaj dela s -> namesto s .
    cout << joze->getIme().toStdString() << endl;

    joze->setId(new int(10));
    //z new rezerviramo nov prostor v pomnilniku. Kaj pa se zgodi s staro rezervacijo? Morda je bolje uporabiti poseben kazalec, ki ga lahko kasneje tudi počistimo
    joze->setId(jozeIDptr);
    delete jozeIDptr;
    jozeIDptr = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void funkcijaZDinamičnoSpremenljivko(){

    //spremenljivke definirane v funkcijah so lokalne za te funkcije. Bodite pozorni, da dinamično ustvarjene spremenljivke tudi za seboj počistite

    int *funkcijiLokalnaSpremenljivka = new int(10);

    /*vsebina funkcije .... */

    //na koncu funkcije sprostimo pomnilnik za lokalne dinamične spremenljivke
    delete funkcijiLokalnaSpremenljivka;
    //v tem primeru ni potrebe po nastavitvi na nullptr, saj zaradi lokalnosti do spremenljivke po koncu bloka funkcije ne bomo mogli več dostopati preko imena
}

