#include "mainwindow.h"

#include <QApplication>
#include "fileworker.h"

void pisiVDatoteko(){

    ofstream datoteka("demonstracijaPisanja.txt");

    int stevec = 0;

    //testiraj datoteko
    if(!datoteka.fail()){
        while (stevec < 9){
            datoteka << stevec << endl;
            stevec++;
        }
        //datoteka << stevec; // endl na koncu datotek prepreči eof();
    }else{
        cout << "Napaka pri odpiranju datoteke" << endl;
    }
    cout << "Konec pisanja" << endl;

    datoteka.close();
}

void beriIzDatoteke(){

    ifstream datoteka("demonstracijaPisanja.txt");

    if(!datoteka){
        cout << "Napaka pri odpiranju datoteke" << endl;
        return;
    }

    while(!datoteka.eof()){ //kaj pa če je while(datoteka)
        string input;
        //datoteka >> input;
        getline(datoteka, input);
        if(!datoteka.fail()) // EOF je za zadnjim endl;
            cout << input << endl;
        //cout << "skusam brati" << endl;
    }

    cout << "Konec branja" << endl;
    datoteka.close();
}

void dopisiVDatoteko(){

    ofstream datoteka;
    datoteka.open("demonstracijaPisanja.txt", ios::app);

    //testiraj datoteko
    if(!datoteka.fail()){
        //testiramo branje izbrane vrstice s pomočjo ignoriranja znakov
        //datoteka << "asdjasdlkjasdlkjasdlkjasdlkjasdlkjadlskjasdjasdjasdkhasdkjashdkasjdhkasjhdkasjdhkasjhdkasjdhkasjdhkasjdhkasdjhkasdjhkasdjhkasdjha" << endl;
        datoteka << "Hello there General Kenobi";
    }
    cout << "Konec pisanja" << endl;

    datoteka.close();
}

void preberiNtoVrstico(int n){
    int stevec = 0;
    ifstream datoteka("demonstracijaPisanja.txt");
    string trashCan;

    if(!datoteka.fail()){
        while( stevec < n){
            getline(datoteka, trashCan);
            //.ignore(bytes, or untill symbol)
            //datoteka.ignore(2, '\n');
            //datoteka.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            stevec++;
        }
    }
    string input;
    getline(datoteka, input);
    cout << "Prebrana " << n+1 << "-ta vrstica: " << input << endl;

    datoteka.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    pisiVDatoteko();
    beriIzDatoteke();
    dopisiVDatoteko();
    beriIzDatoteke();
    preberiNtoVrstico(5);

    return a.exec();
}



