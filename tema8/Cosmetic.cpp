#include "Cosmetic.h"
#include <cstring>
#include <iostream>

using namespace std;

Cosmetic::Cosmetic() {
    char *unit = new char[4];
    strcpy(unit, "buc");
    this->setUnit(unit);
    cout << "Constructor Cosmetic\n";
}

Cosmetic::~Cosmetic() {
    cout << "Destructor Cosmetic\n";
}

double Cosmetic::calculateSellingPrice() const {
    return this->getCost() * (1 + this->getMarkup());
}

char *Cosmetic::getType() const {
    char *type = new char[9];
    strcpy(type, "Cosmetic");
    return type;
}