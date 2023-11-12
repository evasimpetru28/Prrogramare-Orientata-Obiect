#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void doEx1() {

}

// 2.  Scrieți un program C++ care citește de la tastatură un număr natural format din cel mult patru cifre,
// construiește în memorie un tablou bidimensional neregulat cu elemente întregi de forma indicată mai
// jos și apoi afișează pe ecran tabloul obținut


void doEx2() {
    int nr;

    cout << "Introduceti un nr (max 4 cifre)";
    cin >> nr;

    if (nr < 0 || nr > 9999) {
        exit(1);
    } else {

    }
}

// La departamentul de training se primește o listă de cursuri,  împreună cu intervalul desfășurare
// corespunzător. Directorul dorește să printeze o listă cu aceste cursuri sortate crescător după ora
// de început. Scrieți un program care să il ajute pe directorul departamentului de training.

class Curs {
    string numeCurs;
    string oraInceput;
    string oraSfarsit;

public:
    const string &getNumeCurs() const {
        return numeCurs;
    }

    void setNumeCurs(const string &numeCurs) {
        Curs::numeCurs = numeCurs;
    }

    const string &getOraInceput() const {
        return oraInceput;
    }

    void setOraInceput(const string &oraInceput) {
        Curs::oraInceput = oraInceput;
    }

    const string &getOraSfarsit() const {
        return oraSfarsit;
    }

    void setOraSfarsit(const string &oraSfarsit) {
        Curs::oraSfarsit = oraSfarsit;
    }

};

bool comparaCursuri(Curs a, Curs b) {
    int cmp = a.getOraInceput().compare(b.getOraInceput());
    if (cmp == 0) {
        return a.getOraSfarsit().compare(b.getOraSfarsit());
    } else {
        return cmp;
    }
}

void doEx3() {
    int n;

    cout << "Introduceti un nr de cursuri:";
    cin >> n;
    cin.ignore(1); // Removes last \n from buffer (cin leaves a new line character)

    Curs listaCursuri[30];

    for (int i = 0; i < n; i++) {
        string numeCurs, oraInceput, oraSfarsit;

        cout << "\n---  CURS " << (i + 1) << " ---\n";

        cout << "Introduceti nume curs: ";
        getline(cin, numeCurs);

        cout << "Introduceti ora inceput: ";
        getline(cin, oraInceput);

        cout << "Introduceti ora  sfarsit: ";
        getline(cin, oraSfarsit);

        listaCursuri[i].setNumeCurs(numeCurs);
        listaCursuri[i].setOraInceput(oraInceput);
        listaCursuri[i].setOraSfarsit(oraSfarsit);
    }

    sort(listaCursuri, listaCursuri + n, comparaCursuri);

    cout << "\n--- Lista cursuri ordonate ---\n\n";

    for (int i = 0; i < n; i++) {
        cout << listaCursuri[i].getOraInceput();
        cout << " - ";
        cout << listaCursuri[i].getOraSfarsit();
        cout << " ";
        cout << listaCursuri[i].getNumeCurs();
        cout << "\n";
    }
    cout << "\n------------------";

}

void doEx4() {

}

int main() {

    cout << "Alege exercitiu: (1-4)\n";

    int ex;
    cin >> ex;

    switch (ex) {
        case 1:
            doEx1();
            break;
        case 2:
            doEx2();
            break;
        case 3:
            doEx3();
            break;
        case 4:
            doEx4();
            break;
        default:
            exit(0);
    }

    return 0;
}
