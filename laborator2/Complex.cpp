#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
//    cout << "Constructor fara args\n";
}

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {
//    cout << "Destructor\n";
}

void Complex::afisare() {
    cout << "(";
    if (this->real != 0) {
        cout << this->real;
    }
    if (this->imaginary > 0) {
        if (this->real != 0) {
            cout << "+";
        }
        cout << this->imaginary << "i";
    }
    if (this->imaginary < 0) {
        cout << this->imaginary << "i";
    }

    cout << ")\n";
}

double Complex::getReal() {
    return this->real;
}

void Complex::setReal(double real) {
    this->real = real;
}

double Complex::getImaginary() {
    return this->imaginary;
}

void Complex::setImaginary(double imaginary) {
    this->imaginary = imaginary;
}

Complex Complex::add(Complex c2) {
    Complex c;
    c.setReal(this->real + c2.getReal());
    c.setImaginary(this->imaginary + c2.getImaginary());
    return c;
}

Complex Complex::conjugat() {
    Complex c;
    c.setReal(this->real);
    c.setImaginary(this->imaginary * -1.0);
    return c;
}
