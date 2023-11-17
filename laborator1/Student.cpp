#include "Student.h"
#include <string.h>

Student::Student() {
    this->nume = new char[10];
    strcpy(this->nume, "John  Doe");
    this->grupa = 100;
    this->nrNote = 1;
    this->note = new int[2];
    note[0] = 0;
    cout << "Constructor fara args\n";
}

Student::Student(char *val, int grupa, int nrNote, int note[10]) {
    this->nume = new char[strlen(val) + 1];
    this->note = new int[nrNote + 1];
    strcpy(this->nume, val);
    this->grupa = grupa;
    this->nrNote = nrNote;
    for (int i = 0; i < nrNote; ++i) {
        this->note[i] = note[i];
    }
}

Student::~Student() {
    if (nume) {
        delete[]nume;
    }
    if (note) {
        delete[]note;
    }
    cout << "Destructor\n";
}

void Student::afisare() {
    cout << "Nume  " << nume << " | Grupa " << grupa << " | Note ";
    for (int i = 0; i < nrNote; ++i) {
        cout << note[i] << " ";
    }
    cout << endl;
}

string Student::getNume() {
    return this->nume;
}

void Student::setNume(char *val) {
    if (this->nume) {
        delete[]nume;
    }
    this->nume = new char[strlen(val) + 1];
    strcpy(this->nume, val);
}

int Student::getNrNote() {
    return this->nrNote;
}

void Student::setNrNote(int nrNote) {
    this->nrNote = nrNote;
}

int Student::getGrupa() {
    return this->grupa;
}

void Student::setGrupa(int grupa) {
    this->grupa = grupa;
}

float Student::getMedia() {
    return this->media;
}

void Student::setMedia(float media) {
    this->media = media;
}

int *Student::getNote() {
    return this->note;
}

void Student::setNote(int note[]) {
    int nrNote = this->getNrNote(), suma = 0;
    this->note = new int[nrNote + 1];
    for (int i = 0; i < nrNote; ++i) {
        this->note[i] = note[i];
        suma += note[i];
    }
    float media = suma * 1.0 / nrNote * 1.0;
    this->setMedia(media);
}