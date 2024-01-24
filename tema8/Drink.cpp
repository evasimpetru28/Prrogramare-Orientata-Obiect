#include "Drink.h"
#include <cstring>
#include <iostream>

using namespace std;

Drink::Drink() {
    char *unit = new char[2];
    strcpy(unit, "l");
    this->setUnit(unit);
    cout << "Constructor Bautura\n";
}

Drink::~Drink() {
    cout << "Destructor Bautura\n";
}

double Drink::calculateSellingPrice() const {
    return this->getCost() * (1 + this->getMarkup());
}

char *Drink::getType() const {
    char *type = new char[8];
    strcpy(type, "Bautura");
    return type;
}