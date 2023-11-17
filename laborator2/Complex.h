//
// Created by eva on 11/17/23.
//

#ifndef LABORATOR2_COMPLEX_H
#define LABORATOR2_COMPLEX_H


class Complex {
    double real;
    double imaginary;
public:
    Complex();

    Complex(double real, double imaginary);

    ~Complex();

    void afisare();

    double getReal();

    double getImagiary();

    void setReal(double real);

    double getImaginary();

    void setImaginary(double imaginary);

    Complex add(Complex c2);

    Complex conjugat();

};


#endif //LABORATOR2_COMPLEX_H
