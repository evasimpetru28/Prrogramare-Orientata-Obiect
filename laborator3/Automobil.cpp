//
// Created by eva on 11/18/23.
//

#include "Automobil.h"
#include <iostream>
#include <string.h>

using namespace std;

Automobil::Automobil() {
    this->marca = new char[4];
    strcpy(this->marca, "###");
    this->capacitate = 0;
    this->pret = 0.0;
    cout << "Constructor fara args"<<endl;
}

Automobil::Automobil(char *marca, int capacitate, double pret) {
    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca, marca);
    this->capacitate = capacitate;
    this->pret = pret;
    cout << "Constructor cu args"<<endl;
}

Automobil::Automobil(const Automobil &ob) {
    this->marca = new char[strlen(ob.marca) + 1];
    strcpy(this->marca, ob.marca);
    this->capacitate = ob.capacitate;
    this->pret = ob.pret;
    cout << "Constructor copiere"<<endl;
}

Automobil::~Automobil() {
    if (this->marca) {
        delete[]marca;
    }
    cout << "Destructor"<<endl;
}

void Automobil::afisare() {
    cout << "[Marca: " << this->marca << ", capacitate: " << this->capacitate << ", pret: " << this->pret << "]"
         << endl;
}

char* Automobil::getMarca() {
    return marca;
}

void Automobil::setMarca(char *marca) {
    Automobil::marca = marca;
}

int Automobil::getCapacitate() {
    return capacitate;
}

void Automobil::setCapacitate(int capacitate) {
    Automobil::capacitate = capacitate;
}

double Automobil::getPret() {
    return pret;
}

void Automobil::setPret(double pret) {
    Automobil::pret = pret;
}
