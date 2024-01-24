#include "Product.h"
#include "../grocery/Grocery.h"
#include "../cosmetic/Cosmetic.h"
#include "../drink/Drink.h"
#include <cstring>
#include <iostream>

using namespace std;

Product::Product() {
    this->code = new char[5];
    strcpy(this->code, "A000");

    this->supplier = new char[10];
    strcpy(this->supplier, "Supplier0");

    this->cost = 10.0;
    this->markup = 0.2;
    this->quantity = 5;

    this->expiryDate = new char[11];
    strcpy(this->expiryDate, "2024-12-31");

    cout << "Constructor Produs\n";
}

void Product::sellProduct() {
    if (this->quantity > 0) {
        this->quantity = this->quantity - 1;
    } else {
        cout << "-- EMPTY STOCK -- \n";
    }
}

Product::~Product() {
    if (this->code) {
        delete[] code;
    }
    if (this->supplier) {
        delete[] supplier;
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

void Product::displayProductInfo() {
    cout << "[ Product Type: " << getType() << " | Code: " << code << " | Supplier: " << supplier << " | Unit: "
         << " | Cost: " << cost << " | Markup: " << markup << " | Quantity: " << quantity << " | Expiry Date: "
         << expiryDate << " ]" << endl;
}

double Product::calculateSellingPrice() const {
    return this->getCost() * (1 + this->getMarkup());
}
