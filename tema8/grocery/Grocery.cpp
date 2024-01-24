#include "Grocery.h"
#include <cstring>
#include <iostream>

using namespace std;

Grocery::Grocery() {
    cout << "Constructor Alimentar\n";
}

Grocery::~Grocery() {
    cout << "Destructor Alimentar\n";
}

char *Grocery::getType() const {
    char *type = new char[10];
    strcpy(type, "Alimentar");
    return type;
}

char *Grocery::getUnit() const {
    char *unit = new char[3];
    strcpy(unit, "kg");
    return unit;
}