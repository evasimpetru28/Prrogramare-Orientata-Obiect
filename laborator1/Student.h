//
// Created by eva on 11/17/23.
//

#ifndef LABORATOR1_STUDENT_H
#define LABORATOR1_STUDENT_H

#include <iostream>

using namespace std;

class Student {
    char *nume;
    int grupa, nrNote;
    float media;
    int *note;
public:

    Student();

    Student(char *val, int grupa, int nrNote, int *note);

    ~Student();

    void afisare();

    string getNume();

    void setNume(char *nume);

    int getNrNote();

    void setNrNote(int nrNote);

    int getGrupa();

    void setGrupa(int grupa);

    float getMedia();

    void setMedia(float media);

    int *getNote();

    void setNote(int note[10]);
};


#endif //LABORATOR1_STUDENT_H
