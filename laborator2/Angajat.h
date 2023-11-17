#ifndef LABORATOR2_ANGAJAT_H
#define LABORATOR2_ANGAJAT_H


class Angajat {
    char *nume;
    int varsta;
    double salariu;

public:
    Angajat();

    Angajat(char *nume, double salariu, int varsta);

    ~Angajat();

    void afisare();

    double salariuNet();

    void setNume(char *val);

    void setVarsta(int val);

    void setSalariu(double val);

    char *getNume();

    double getSalariu();

    int getVarsta();
};

#endif //LABORATOR2_ANGAJAT_H
