#include<iostream>
#include "TransportPersoane.h"

using namespace std;

int TransportPersoane::valoareImpozit = 24;
double TransportPersoane::valoareRovinieta = 0.04;

TransportPersoane::TransportPersoane() : Autovehicul() {
    this->nrLocuri = 0;
}

TransportPersoane::TransportPersoane(char *marca, int capacitate, double putere, double masa, int nrLocuri)
        : Autovehicul(marca, capacitate, putere, masa) {
    this->nrLocuri = nrLocuri;
}

void TransportPersoane::afisare() {
    Autovehicul::afisare();
    cout << "Nr locuri: " << this->nrLocuri << endl;
}

int TransportPersoane::getNrLocuri() {
    return this->nrLocuri;
}

void TransportPersoane::setNrLocuri(int val) {
    this->nrLocuri = val;
}

double TransportPersoane::calculImpozit() {
    return (this->capacitatea / 200) * this->valoareImpozit;
}

double TransportPersoane::calculRovinieta() {
    return (this->capacitatea) * this->valoareRovinieta;
}
