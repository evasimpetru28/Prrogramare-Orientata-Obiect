#include "Product.h"
#include <cstring>
#include <iostream>

using namespace std;

Product::Product() {
    this->code = new char[5];
    strcpy(this->code, "A000");

    this->supplier = new char[10];
    strcpy(this->supplier, "Supplier0");

    this->unit = new char[4];
    strcpy(this->unit, "buc");

    this->cost = 10.0;
    this->markup = 0.2;
    this->quantity = 5;

    this->expiryDate = new char[11];
    strcpy(this->expiryDate, "2024-12-31");

    cout << "Constructor Produs\n";
}

void Product::addProduct() {

}

char *Product::getProductBySupplier(char *supplier) {
    return nullptr;
}

void Product::sellProduct() {
    this->quantity = this->quantity - 1;
}

Product::~Product() {
    if (this->code) {
        delete[] code;
    }
    if (this->supplier) {
        delete[] supplier;
    }
    if (this->unit) {
        delete[] unit;
    }
    if (this->expiryDate) {
        delete[] expiryDate;
    }
    cout << "Destructor Produs\n";
}

char *Product::getCode() const {
    return this->code;
}

void Product::setCode(char *code) {
    if (this->code) {
        delete[] this->code;
    }
    this->code = new char[strlen(code) + 1];
    strcpy(this->code, code);
}

char *Product::getSupplier() const {
    return this->supplier;
}

void Product::setSupplier(char *supplier) {
    if (this->supplier) {
        delete[] this->supplier;
    }
    this->supplier = new char[strlen(supplier) + 1];
    strcpy(this->supplier, supplier);
}

char *Product::getUnit() const {
    return this->unit;
}

void Product::setUnit(char *unit) {
    if (this->unit) {
        delete[] this->unit;
    }
    this->unit = new char[strlen(unit) + 1];
    strcpy(this->unit, unit);
}

double Product::getCost() const {
    return this->cost;
}

void Product::setCost(double cost) {
    Product::cost = cost;
}

double Product::getMarkup() const {
    return this->markup;
}

void Product::setMarkup(double markup) {
    Product::markup = markup;
}

int Product::getQuantity() const {
    return this->quantity;
}

void Product::setQuantity(int quantity) {
    Product::quantity = quantity;
}

char *Product::getExpiryDate() const {
    return this->expiryDate;
}

void Product::setExpiryDate(char *expiryDate) {
    if (this->expiryDate) {
        delete[] this->expiryDate;
    }
    this->expiryDate = new char[strlen(expiryDate) + 1];
    strcpy(this->expiryDate, expiryDate);
}
