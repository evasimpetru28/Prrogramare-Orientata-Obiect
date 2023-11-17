#include <iostream>
#include "Angajat.h"

using namespace std;

int main() {
//    Angajat a1("Popa Maria", 8900.34, 23);
//    a1.afisare();

    Angajat ta[10];

    for (int i = 0; i < 10; i++) {
        ta[i].afisare();
    }

//    ta[0].setNume("Popescu Maria");

    char nume[30];
    for (int i = 0; i < 3; i++) {
        cout<<"Nume: ";
        cin.get(nume, 30);
        ta[i].setNume(nume);
        cin.get();
    }

    for (int i = 0; i < 10; i++) {
        ta[i].afisare();
    }

    return 0;
}