#include "../product/Product.h"

// Produs cosmetic
class Cosmetic : public Product {
public:
    Cosmetic();

    ~Cosmetic();

    char *getUnit() const override;

    char *getType() const override;
};
