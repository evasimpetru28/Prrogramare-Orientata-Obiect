#include "Autoturism.h"
#include "Autovehicul.h"
#include <iostream>

using namespace std;

int Autoturism::valoareImpozit = 8;
double Autoturism::valoareRovinieta = 0.02;

Autoturism::Autoturism() {
    this->nrUsi = 3;
    cout << "Constr fara param AUTOTURISM" << endl;
}

Autoturism::Autoturism(char *marca, int capacitatea, double putere, double masa, int nrUsi)
        : Autovehicul(marca, capacitatea, putere, masa) {
    this->nrUsi = nrUsi;
    cout << "Constr cu param AUTOTURISM" << endl;
}

void Autoturism::afisare() {
    Autovehicul::afisare();
    cout << "Numar usi: " << this->nrUsi << endl;
    cout << "Impozit: " << this->valoareImpozit << endl;
    cout << "Rovienieta: " << this->valoareRovinieta << endl;
}

int Autoturism::getNrUsi() const {
    return nrUsi;
}

void Autoturism::setNrUsi(int nrUsi) {
    Autoturism::nrUsi = nrUsi;
}

double Autoturism::calculImpozit() {
    return this->masa / 200 * this->valoareImpozit;
}

double Autoturism::calculRovinieta() {
    return this->masa * this->valoareRovinieta;
}
