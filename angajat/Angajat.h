//
// Created by eva on 11/17/23.
//

#ifndef ANGAJAT_ANGAJAT_H
#define ANGAJAT_ANGAJAT_H



class Angajat {
    char *nume;
    double salariu;
    int varsta;

public:
    Angajat();

    Angajat(char *nume, double salariu, int varsta);

    ~Angajat();

    void afisare();

    double salariuNet();

    void setNume(char *val);

    void setVarsta(int val);

    void setSalariu(double val);

    char* getNume();

    double getSalariu();

    int getVarsta();
};

#endif //ANGAJAT_ANGAJAT_H
