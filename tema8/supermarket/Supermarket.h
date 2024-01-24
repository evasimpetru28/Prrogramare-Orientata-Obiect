#include <vector>
#include "../product/Product.h"
#include <iostream>

using namespace std;

class Supermarket {
private:
    int count;
    vector<Product *> products;

public:
    Supermarket();

    ~Supermarket();

    int getCount() const;

    void setCount(int count);

    const vector<Product *> &getProducts() const;

    void loadProductsFromFile(const string &filename);

    void addProduct(Product *product);

    void searchProductsBySupplier(char *supplier) const;

    void removeExpiredProducts();

};