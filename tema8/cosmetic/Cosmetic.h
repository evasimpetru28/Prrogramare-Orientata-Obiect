#include "../product/Product.h"

// Produs cosmetic
class Cosmetic : public Product {
public:
    Cosmetic();

    ~Cosmetic();

    double calculateSellingPrice() const override;

    char *getType() const override;
};
