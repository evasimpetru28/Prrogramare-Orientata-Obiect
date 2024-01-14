#include <iostream>
#include <string.h>

using namespace std;

class Angajat {
private:
    char *nume;
    double salariu;
public:
    Angajat(char *nume, double salariu) {
        this->nume = new char[2];
        strcpy(this->nume, nume);
        this->salariu = salariu;

        cout << "Constr din clasa de baza" << endl;
    }

    ~Angajat() {
        if (this->nume) {
            delete[]nume;
        }
        cout << "Destr din clasa de baza" << endl;
    }

    void afisare() {
        cout << "Nume: [" << nume << "] | Salariu: [" << salariu << "]";
    }
};

class Admin : public Angajat {
private:
    int sectie;
public:
    Admin(char *nume, double salariu, int sectie) : Angajat(nume, salariu) {
        this->sectie = sectie;
        cout << "Constr din clasa deriv" << endl;
    }

    ~Admin() {
        cout << "Destr din clasa deriv" << endl;
    }

    void afisare() {
        Angajat::afisare();
        cout << " Sectie: [" << sectie << "]" << endl;

    }
};


int main() {

    Admin admin = Admin("Ana", 200, 10);
    admin.afisare();

    return 0;
}
