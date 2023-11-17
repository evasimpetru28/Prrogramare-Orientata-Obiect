//
// Created by eva on 11/17/23.
//

#include "Curs.h"
#include <iostream>

using namespace std;

string Curs::getNumeCurs() {
    return numeCurs;
}

void Curs::setNumeCurs(string &numeCurs) {
    this->numeCurs = numeCurs;
}

string Curs::getOraInceput() {
    return oraInceput;
}

void Curs::setOraInceput(string &oraInceput) {
    this->oraInceput = oraInceput;
}

string Curs::getOraSfarsit() {
    return this->oraSfarsit;
}

void Curs::setOraSfarsit(string &oraSfarsit) {
    this->oraSfarsit = oraSfarsit;
}
