#include "Cosmetic.h"
#include <cstring>
#include <iostream>

using namespace std;

Cosmetic::Cosmetic() {
    cout << "Constructor Cosmetic\n";
}

Cosmetic::~Cosmetic() {
    cout << "Destructor Cosmetic\n";
}

char *Cosmetic::getType() const {
    char *type = new char[9];
    strcpy(type, "Cosmetic");
    return type;
}

char *Cosmetic::getUnit() const {
    char *unit = new char[4];
    strcpy(unit, "buc");
    return unit;
}
