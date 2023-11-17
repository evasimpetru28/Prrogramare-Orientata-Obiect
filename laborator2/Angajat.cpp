#include <istream>
#include <cstring>
#include <iostream>
#include "Angajat.h"

using namespace std;

Angajat::Angajat() {
    this->nume = new char[9];
    strcpy(this->nume, "Jphn Doe");
    this->salariu = 0.0;
    this->varsta = 30;
    cout << "Constructor fara args" << endl;
}

Angajat::Angajat(char *nume, double salariu, int varsta) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    this->salariu = salariu;
    this->varsta = varsta;
    cout << "Constructor cu args" << endl;
}

Angajat::~Angajat() {
    if (nume) {
        delete[] nume;
    }
    cout << "Destructor" << endl;
}

void Angajat::afisare() {
    cout << "Nume: " << this->nume << " | salariu: " << this->salariu << " |  varsta: " << this->varsta << endl;
}

double Angajat::salariuNet() {
    return this->salariu * 0.58;
}

void Angajat::setNume(char *val) {
    if (this->nume) {
        delete[] nume;
    }
    this->nume = new char[strlen(val) + 1];
    strcpy(this->nume, val);
}

void Angajat::setVarsta(int val) {
    this->varsta = val;
}

void Angajat::setSalariu(double val) {
    this->salariu = val;
}

char *Angajat::getNume() {
    return this->nume;
}

double Angajat::getSalariu() {
    return this->salariu;
}

int Angajat::getVarsta() {
    return this->varsta;
}