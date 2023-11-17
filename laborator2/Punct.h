//
// Created by eva on 11/17/23.
//

#ifndef LABORATOR2_PUNCT_H
#define LABORATOR2_PUNCT_H


class Punct {
    double x;
    double y;
public:
    Punct();

    Punct(double x, double y);

    ~Punct();

    void afisare();

    double distanta(Punct p2);

    double getX();

    void setX(double val);

    double getY();

    void setY(double val);

};


#endif //LABORATOR2_PUNCT_H
