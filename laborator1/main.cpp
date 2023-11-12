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

// 4.   Definiți o structură Student care să permită memorarea numelui, notelor, mediei și grupei corespunzătoare unui student.
//Scrieți o funcție care să calculeze mediile celor n studenți ale căror date sunt memorate într-un tablou unidimensional t cu elemente de tip Student.
// Folosind funcția qsort din biblioteca stdlib.h, sortați elementele unui tablou unidimensional t format din n elemente de tip Student
// în ordinea descrescătoare a mediilor, iar în cazul unor medii egale studenții respectivi se vor ordona alfabetic.
// Implementați funcția comparator corespunzătoare și scrieți apelul funcției qsort.

class Student {
    string nume;
    int grupa, nrNote;
    float media;
    int note[];
public:
    const string &getNume() const {
        return nume;
    }

    int getNrNote() const {
        return nrNote;
    }

    void setNrNote(int nrNote) {
        Student::nrNote = nrNote;
    }

    void setNume(const string &nume) {
        Student::nume = nume;
    }

    int getGrupa() const {
        return grupa;
    }

    void setGrupa(int grupa) {
        Student::grupa = grupa;
    }

    float getMedia() const {
        return media;
    }

    void setMedia(float media) {
        Student::media = media;
    }

    const int *getNote() const {
        return note;
    }

    void *setNote(int note[]) {
        int nrNote = Student::getNrNote(), suma = 0;
        for (int i = 0; i < nrNote; ++i) {
            Student::note[i] = note[i];
            suma += note[i];
        }
        float media = suma * 1.0 / nrNote * 1.0;
        Student::setMedia(media);
    }
};

void doEx4() {

    int n;
    cout << "Introduceti numarul de studenti: ";
    cin >> n;
    Student t[n + 1];

    for (int i = 0; i < n; i++) {
        string nume;
        int grupa, nrNote;

        cout << "\n---  STUDENT " << (i + 1) << " ---\n";

        cin.ignore(1); // Removes last \n from buffer (cin leaves a new line character)

        cout << "Introduceti nume student: ";
        getline(cin, nume);

        cout << "Introduceti nr de note: ";
        cin >> nrNote;
        int note[nrNote + 1];

        cout << "Introduceti notele (" << nrNote << "): ";
        for (int j = 0; j < nrNote; ++j) {
            int nota;
            cin >> nota;
            note[j] = nota;
        }

        cout << "Introduceti grupa: ";
        cin >> grupa;

        t[i].setNume(nume);
        t[i].setGrupa(grupa);
        t[i].setNrNote(nrNote);
        t[i].setNote(note);

    }

    cout<< "--- MEDII STUDENTI: ---";
    for (int i = 0; i < n; ++i) {
        cout << "STUDENT: " << t[i].getNume() << " | MEDIA" << t[i].getMedia() << endl;

    }
    cout<< "------------------";
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
