//
// Created by eva on 11/17/23.
//

#include "Punct.h"
#include <iostream>
#include <math.h>

using namespace std;

Punct::Punct() {
    x = 0;
    y = 0;
    cout << "Constructor fara args" << endl;
}

Punct::Punct(double x, double y) {
    this->x = x;
    this->y = y;
}

Punct::~Punct() {
    cout << "\nDestructor";
}

void Punct::afisare() {
    cout << "(" << x << ", " << y << ")" << endl;
}

double Punct::distanta(Punct p2) {
    return sqrt((this->x - p2.x) * (this->x - p2.x) + (this->y - p2.y) * (this->y - p2.y));
}

void Punct::setX(double val) {
    this->x = val;
}

void Punct::setY(double val) {
    this->y = val;
}

double Punct::getX() {
    return this->x;
}

double Punct::getY() {
    return this->y;
}