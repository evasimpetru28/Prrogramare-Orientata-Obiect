#include <iostream>
#include <bits/stdc++.h>
#include "Curs.h"
#include "Student.h"

using namespace std;

void doEx1() {

}

// 2.  Scrieți un program C++ care citește de la tastatură un număr natural format din cel mult patru cifre,
// construiește în memorie un tablou bidimensional neregulat cu elemente întregi de forma indicată mai
// jos și apoi afișează pe ecran tabloul obținut


void doEx2() {
    int nr;

    cout << "Introduceti un nr (max 4 cifre):";
    cin >> nr;

    if (nr < 0 || nr > 9999) {
        exit(1);
    } else {

        int **matrix = new int *[nr];
        int *coloane = new int[nr];

        for (int r = 0; r < nr; r++) {
            coloane[r] = r + 1;
            matrix[r] = new int[coloane[r]];

            for (int j = 0; j < coloane[r]; j++) {
                matrix[r][j] = j + 1;
            }
        }

        for (int i = 0; i < nr; i++) {
            for (int j = 0; j < coloane[i]; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < nr; ++i)
            delete[] matrix[i];
        delete[]matrix;
        delete[]coloane;
    }
}

// La departamentul de training se primește o listă de cursuri,  împreună cu intervalul desfășurare
// corespunzător. Directorul dorește să printeze o listă cu aceste cursuri sortate crescător după ora
// de început. Scrieți un program care să il ajute pe directorul departamentului de training.


bool comparaCursuri(Curs a, Curs b) {
    int cmp = a.getOraInceput().compare(b.getOraInceput());
    if (cmp == 0) {
        int cmp2 = a.getOraSfarsit().compare(b.getOraSfarsit());
        if (cmp2 == 0) {
            return a.getNumeCurs().compare(b.getNumeCurs());
        }
        return cmp2 == -1;
    } else {
        return cmp == -1;
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

// 4.   Definiți o structură Curs care să permită memorarea numelui, notelor, mediei și grupei corespunzătoare unui student.
//Scrieți o funcție care să calculeze mediile celor n studenți ale căror date sunt memorate într-un tablou unidimensional t cu elemente de tip Curs.
// Folosind funcția qsort din biblioteca stdlib.h, sortați elementele unui tablou unidimensional t format din n elemente de tip Curs
// în ordinea descrescătoare a mediilor, iar în cazul unor medii egale studenții respectivi se vor ordona alfabetic.
// Implementați funcția comparator corespunzătoare și scrieți apelul funcției qsort.


void doEx4() {

    int n;
    cout << "Introduceti numarul de studenti: ";
    cin >> n;
    Student studenti[n];

    for (int i = 0; i < n; i++) {
        char nume[30];
        int grupa, nrNote;

        cout << "\n---  STUDENT " << (i + 1) << " ---\n";

        cin.ignore(1); // Removes last \n from buffer (cin leaves a new line character)

        cout << "Introduceti nume student: ";
        cin.get(nume, 30);

        cout << "Introduceti nr de note: ";
        cin >> nrNote;
        int note[nrNote];

        cout << "Introduceti notele (" << nrNote << "): ";
        for (int j = 0; j < nrNote; ++j) {
            int nota;
            cin >> nota;
            note[j] = nota;
        }

        cout << "Introduceti grupa: ";
        cin >> grupa;

//        Student s(nume, grupa, nrNote, note);
        studenti[i].setNume(nume);
        studenti[i].setGrupa(grupa);
        studenti[i].setNrNote(nrNote);
        studenti[i].setNote(note);
//
        cout << "--------------------\n";
        studenti[i].afisare();

    }

    cout << "\n--- MEDII STUDENTI: ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "STUDENT: " << studenti[i].getNume() << " | MEDIA " << studenti[i].getMedia() << endl;
    }
    cout << "-----------------------'\n";
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
