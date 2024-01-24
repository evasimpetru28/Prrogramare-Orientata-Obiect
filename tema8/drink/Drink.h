#include "../product/Product.h"

// Produs de baut
class Drink : public Product {
public:
    Drink();

    ~Drink();

    char *getUnit() const override;

    char *getType() const override;
};