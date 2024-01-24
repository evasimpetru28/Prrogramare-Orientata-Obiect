#include "Grocery.h"
#include <cstring>
#include <iostream>

using namespace std;

Grocery::Grocery() {
    char *unit = new char[3];
    strcpy(unit, "kg");
    this->setUnit(unit);
    cout << "Constructor Alimentar\n";
}

Grocery::~Grocery() {
    cout << "Destructor Alimentar\n";
}

double Grocery::calculateSellingPrice() const {
    return this->getCost() * (1 + this->getMarkup());
}

char *Grocery::getType() const {
    char *type = new char[10];
    strcpy(type, "Alimentar");
    return type;
}