#include <iostream>
#include <valarray>

using namespace std;

class Punct {
    double x;
    double y;

public:
    Punct() {
        x = 0;
        y = 0;
        cout << "Constructor fara arg" << endl;
    }

    Punct(double x, double y) {
        this->x = x;
        this->y = y;
    }

    ~Punct() {
        cout << "Destructor" << endl;
    }

    void afisare();

    double distanta(Punct p2) {
        return sqrt((this->x - p2.x) * (this->x - p2.x) + (this->y - p2.y) * (this->y - p2.y));
    }

    void setX(double val) {
        this->x = val;
    }

    void setY(double val) {
        this->y = val;
    }

    double getX() {
        return this->x;
    }

    double getY() {
        return this->y;
    }
};

void Punct::afisare() {
    cout << "(" << x << ", " << y << ")" << endl;
}

int main() {

//    Punct p1; //apelul constructorului fara argumente
//    p1.afisare();
//
//    Punct p2(1.2, 2.3); //apel constructor cu argumente
//    p2.afisare();

    Punct p1(1, 2);
    Punct p2(3, 4);
    cout << "Distanta: " << p1.distanta(p2) << endl;

    return 0;
}