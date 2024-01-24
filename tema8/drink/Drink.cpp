#include "Drink.h"
#include <cstring>
#include <iostream>

using namespace std;

Drink::Drink() {
    cout << "Constructor Bautura\n";
}

Drink::~Drink() {
    cout << "Destructor Bautura\n";
}

char *Drink::getType() const {
    char *type = new char[8];
    strcpy(type, "Bautura");
    return type;
}

char *Drink::getUnit() const {
    char *unit = new char[2];
    strcpy(unit, "l");
    return unit;
}
