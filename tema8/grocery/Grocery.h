#include "../product/Product.h"

// Produs alimentar
class Grocery : public Product {
public:
    Grocery();

    ~Grocery();

    char *getUnit() const override;

    char *getType() const override;
};