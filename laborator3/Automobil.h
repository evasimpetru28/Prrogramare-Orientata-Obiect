//
// Created by eva on 11/18/23.
//

#ifndef LABORATOR3_AUTOMOBIL_H
#define LABORATOR3_AUTOMOBIL_H


class Automobil {
    char *marca;
    int capacitate;
    double pret;
public:
    Automobil();

    ~Automobil();

    Automobil(char *marca, int capacitate, double pret);

    Automobil(const Automobil &ob);

    void afisare();

    char* getMarca();

    void setMarca(char *marca);

    int getCapacitate();

    void setCapacitate(int capacitate);

    double getPret();

    void setPret(double pret);
};


#endif //LABORATOR3_AUTOMOBIL_H
