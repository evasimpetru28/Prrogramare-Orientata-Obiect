#include "Supermarket.h"
#include "../grocery/Grocery.h"
#include "../cosmetic/Cosmetic.h"
#include "../drink/Drink.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <ctime>

Supermarket::Supermarket() {
    this->count = 0;
}

Supermarket::~Supermarket() {
    for (Product *product: this->products) {
        delete product;
    }
    cout << "Destructor Supermarket\n";
}

int Supermarket::getCount() const {
    return this->count;
}

void Supermarket::setCount(int count) {
    this->count = count;
}

void Supermarket::loadProductsFromFile(const string &filename) {
    ifstream fin(filename);
    if (fin.is_open()) {
        while (!fin.eof()) {
            int type;
            fin >> type;

            Product *product;

            if (type == 1) {
                product = new Grocery();
            } else if (type == 2) {
                product = new Cosmetic();
            } else if (type == 3) {
                product = new Drink();
            } else {
                cout << "Invalid product type: " << type << endl;
                return;
            }

            char code[10], supplier[20], expiryDate[11];
            double cost, markup;
            int quantity;

            fin >> code >> supplier >> cost >> markup >> quantity >> expiryDate;

            product->setCode(code);
            product->setSupplier(supplier);
            product->setCost(cost);
            product->setMarkup(markup);
            product->setQuantity(quantity);
            product->setExpiryDate(expiryDate);

            this->products.push_back(product);
            setCount(getCount() + 1);
        }

        fin.close();
    }
}

void Supermarket::addProduct(Product *product) {
    this->products.push_back(product);
    setCount(getCount() + 1);
}

void Supermarket::removeExpiredProducts() {
    time_t currentTime = time(nullptr);
    const int bufferSize = 20;
    char currentDate[bufferSize];
    strftime(currentDate, bufferSize, "%Y-%m-%d", localtime(&currentTime));

    int indexToRemove = 0;
    for (Product *product: this->products) {
        if (strcmp(product->getExpiryDate(), currentDate) < 0) {
            products.erase(products.begin() + indexToRemove);
            delete product;
            setCount(getCount() - 1);
        }
        indexToRemove++;
    }
}

const vector<Product *> &Supermarket::getProducts() const {
    return products;
}

void Supermarket::searchProductsBySupplier(char *supplier) const {
    for (Product *p: this->getProducts()) {
        if (strcmp(p->getSupplier(), supplier) == 0) {
            p->displayProductInfo();
        }
    }
}

