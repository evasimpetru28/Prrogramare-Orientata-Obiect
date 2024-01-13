//
// Created by eva on 11/18/23.
//

#ifndef LABORATOR3_AUTOMOBIL_H
#define LABORATOR3_AUTOMOBIL_H


class Automobil {
    char *marca;
    int capacitate;
    double pret;
    static int TVA;
    static int count;
    static int countByPriceLessThan;
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

    double getTVAPret();

    static int getCount();

//    VARIANTA 1:
    static int getCountByPriceLessThan();
    static void numara(Automobil automobil, double pret);

//    VARIANTA 2:
//    static int getCountByPriceLessThan(Automobil automobileList[], double pret);

};


#endif //LABORATOR3_AUTOMOBIL_H
