#include "Product.h"

// Produs alimentar
class Grocery : public Product {
public:
    Grocery();

    ~Grocery();

    double calculateSellingPrice() const override;

    char *getType() const override;
};