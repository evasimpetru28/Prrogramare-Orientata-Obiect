#include "Supermarket.h"
#include "../product/Product.h"
#include "../grocery/Grocery.h"
#include "../cosmetic/Cosmetic.h"
#include "../drink/Drink.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <ctime>

Supermarket::~Supermarket() {
    for (Product *product: this->products) {
        delete product;
    }
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
        }

        fin.close();
    }
}

void Supermarket::removeExpiredProducts() {
    for (Product *product: this->products) {

        time_t currentTime = time(nullptr);

        // Format the current time as a string
        const int bufferSize = 20;
        char currentDate[bufferSize];

        strftime(currentDate, bufferSize, "%Y-%m-%d", localtime(&currentTime));

        if (strcmp(product->getExpiryDate(), currentDate) > 0) {
            delete product;
        }
    }
}
