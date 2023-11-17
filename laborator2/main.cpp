#include <iostream>
#include "Punct.h"
#include "Complex.h"
#include "Angajat.h"

using namespace std;

void doEx1() {
    int x1, x2, y1, y2;

    cout << "Introduceti coordonatele X si Y pentru punctul 1: ";
    cin >> x1 >> y1;
    Punct p1(x1, y1);
    cout << "Introduceti coordonatele X si Y pentru punctul 2: ";
    cin >> x2 >> y2;
    Punct p2(x2, y2);

    cout << "\n---------------------------------\n\n";
    p1.afisare();
    p2.afisare();
    cout << "Distanta: " << p1.distanta(p2);
}

void doEx2() {
    double real1, real2, imaginar1, imaginar2;

    cout << "Introduceti a si b pentru primul numar complex: ";
    cin >> real1 >> imaginar1;
    Complex c1(real1, imaginar1);
    cout << "Introduceti a si b pentru al doilea numar complex: ";
    cin >> real2 >> imaginar2;
    Complex c2(real2, imaginar2);

    cout << "\n---------------------------------\n\n";
    cout << "Complex nr 1:\n";
    c1.afisare();
    cout << "Conjugatul:\n";
    c1.conjugat().afisare();

    cout << "Complex nr 2:\n";
    c2.afisare();
    cout << "Conjugatul:\n";
    c2.conjugat().afisare();

    cout << "\n---------------------------------\n\n";
    Complex suma = c1.add(c2);
    cout << "Suma:\n";
    suma.afisare();
    cout << "Conjugatul:\n";
    suma.conjugat().afisare();
    cout << "\n---------------------------------\n\n";

}

void doEx3() {
    cout << "--------------------------------------------------\n";
    Angajat a1("Diaconu Alex", 5400.29, 19);
    a1.afisare();
    cout << "Salariu net: " << a1.salariuNet() << endl;

    cout << "--------------------------------------------------\n";

    Angajat a2("Ionescu Delia", 7905.2, 27);
    a2.afisare();
    cout << "Salariu net: " << a2.salariuNet() << endl;
    cout << "--------------------------------------------------\n";

}

int main() {

    cout << "Alege exercitiu: (1-3)\n";

    int ex;
    cin >> ex;

    switch (ex) {
        case 1:
            doEx1();
            break;
        case 2:
            doEx2();
            break;
        case 3:
            doEx3();
            break;
        default:
            exit(0);
    }

    return 0;
}