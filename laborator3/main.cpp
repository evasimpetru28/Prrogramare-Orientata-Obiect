#include <iostream>
#include <fstream>
#include <string.h>
#include "Automobil.h"

using namespace std;


class Persoana {
    int varsta; // int
    static int nrPersoane;
public:
    char *nume; // int; adresa primului  obiect din heap

    static int getNrPersoane() {
        return nrPersoane;
    }

    Persoana() {
        this->nume = new char[9];
        strcpy(this->nume, "John Doe");
        this->varsta = 42;
        cout << "Constructor fara argumente" << endl;
        nrPersoane++;
    }

    Persoana(char *nume, int varsta) {
        this->nume = new char[strlen(nume) + 1];
        strcpy(this->nume, nume);
        this->varsta = varsta;
        cout << "Constructor cu argumente" << endl;
        nrPersoane++;
    }

    Persoana(const Persoana &sursa) {
        this->nume = new char[strlen(sursa.nume) + 1];
        strcpy(this->nume, sursa.nume);
        this->varsta = sursa.varsta;
        cout << "Constructor de copiere" << endl;
        nrPersoane++;
    }

    ~Persoana() {
        if (this->nume) {
            delete[]nume;
        }
        cout << "Destructor" << endl;
        nrPersoane--;
    }

    void afisare() {
        cout << "[Nume: " << this->nume << ", varsta: " << this->varsta << "]" << endl;
    }

};

int Persoana::nrPersoane = 0; // definirea datelor membrre statice se realizeaza in exteriorul clasei

void f(Persoana ob) {
    ob.afisare();
}

void doEx1() {
    ifstream fin("automobile.in");

    int nr;
    fin >> nr;
    cout << "Lines nr: " << nr << endl;

    Automobil ta[nr];

    char marca[100];
    int capacitate;
    double pret;
    int i = 0;

    while (fin >> marca >> capacitate >> pret) {

        ta[i].setMarca(marca);
        ta[i].setCapacitate(capacitate);
        ta[i].setPret(pret);

        ta[i].afisare();
        i++;
    }

    fin.close();
}

void doEx2() {

}

int main() {

//    Persoana p1;
//    p1.afisare();
//    Persoana p2("Simpetru Eva", 21);
//    p2.afisare();
//
//    Persoana p3 = p2; // apel constructor de copiere implicit: bitwise copy; 2 obiecte care pointeaza catre aceeasi adresa
//    p3.afisare();
//
//    strcpy(p3.nume, "Jane Doe");
//    cout << "---------------------------------\n";
//    p2.afisare();
//    p3.afisare();

//    Persoana *p2  = new Persoana("Simpetru Eva", 21);
//    f(*p2);
//    delete p2;
//
//    Persoana tp[10];
//
//    cout << "Avem " << Persoana::getNrPersoane() << " obiecte" << endl;


    cout << "Alege exercitiul: (1/2)";
    int ex;
    cin >> ex;

    switch (ex) {
        case 1:
            doEx1();
            break;
        case 2:
            doEx2();
            break;
        default:
            exit(1);
    }

    return 0;
}
