#include <vector>
#include "Product.h"
#include <iostream>

using namespace std;

class Supermarket {
private:
    vector<Product *> products;

public:
    void loadProductsFromFile(const string& filename);

    // Ştergere produse cu termen de valabilitate expirat
    void removeExpiredProducts();

    ~Supermarket();
};