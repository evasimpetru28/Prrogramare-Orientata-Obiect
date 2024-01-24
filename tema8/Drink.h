#include "Product.h"

// Produs de baut
class Drink : public Product {
public:
    Drink();

    ~Drink();

    double calculateSellingPrice() const override;

    char *getType() const override;
};