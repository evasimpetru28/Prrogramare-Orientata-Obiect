//
// Created by eva on 11/17/23.
//

#ifndef LABORATOR1_CURS_H
#define LABORATOR1_CURS_H

#include <iostream>

using namespace std;

class Curs {
    string numeCurs;
    string oraInceput;
    string oraSfarsit;
public:
    string getNumeCurs();

    void setNumeCurs(string &nume);

    string getOraInceput();

    void setOraInceput(string &oraInceput);

    string getOraSfarsit();

    void setOraSfarsit(string &oraSfarsit);
};


#endif //LABORATOR1_CURS_H
