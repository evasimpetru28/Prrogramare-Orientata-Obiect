#include <iostream>
#include <fstream>
#include <cstring>
#include "Autovehicul.h"
#include "Autoturism.h"
#include "TransportPersoane.h"

using namespace std;

int main() {

//    Instantiere simpla exemplu
//
//    Autovehicul *autovehicul = new Autoturism();
//
//    autovehicul->setMasa(5000.5);
//    autovehicul->afisare();
//
//    cout << "Impozit: " << autovehicul->calculImpozit() << endl;
//    cout << "Rovinieta: " << autovehicul->calculRovinieta() << endl;


//    Instantiere tablou cerinte
//
    Autovehicul *tv[10];
    ifstream fin("autovehicule.in");
    ofstream fout("taxe.csv");

    char *p;
    char linie[500];
    char marca[50];
    int capacitatea;
    double masa;
    double puterea;
    int data;

    int index = 0;

    while (fin.getline(linie, 500)) {
        p = strtok(linie, " ");
        strcpy(marca, p);

        p = strtok(NULL, " ");
        capacitatea = atoi(p);

        p = strtok(NULL, " ");
        puterea = atof(p);

        p = strtok(NULL, " ");
        masa = atof(p);

        p = strtok(NULL, " ");
        data = atoi(p);

        if (masa <= 3.5)
            tv[index++] = new Autoturism(marca, capacitatea, puterea, masa, data);
        else
            tv[index++] = new
                    TransportPersoane(marca, capacitatea, puterea, masa, data);
    }

    fin.close();

    fout << "Marca" << "," << "Impozit" << "," << "Rovinieta" << endl;

    for (int i = 0; i < index; i++) {
        fout << tv[i]->getMarca() << "," << tv[i]->calculImpozit()
             << "," << tv[i]->calculRovinieta() << endl;
    }

    fout.close();


    return 0;
}
