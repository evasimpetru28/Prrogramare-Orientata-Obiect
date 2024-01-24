#pragma once

class Autovehicul {
protected:
    char *marca;
    int capacitatea;
    double putere;
    double masa;

public:
    Autovehicul();

    Autovehicul(char *marca, int capacitatea, double putere, double masa);

    ~Autovehicul();

    Autovehicul(const Autovehicul &ob);

    void setMarca(char *val);

    void setCapacitate(int val);

    void setPutere(double val);

    void setMasa(double val);

    char *getMarca();

    int getCapacitate();

    double getPutere();

    double getMasa();

    // FUNCTIE VIRTUALA
    virtual void afisare();

    // OBLIGATORIU DE IMPLEMENTAT (nu am implementare in clasa de baza; prea abstract):
    // FUNCTII VIRTUALE PURE
    virtual double calculImpozit() = 0;

    virtual double calculRovinieta() = 0;

};
