#pragma once

class Product {
private:
    char *code;         //cod_produs
    char *supplier;     //furnizor
    double cost;        //pret_furnizor
    double markup;      //adaos
    int quantity;       //cantitate
    char *expiryDate;   // termen_valabilitate
public:
    Product();

    virtual ~Product();

    char *getCode() const;

    void setCode(char *code);

    char *getSupplier() const;

    void setSupplier(char *supplier);

    double getCost() const;

    void setCost(double cost);

    double getMarkup() const;

    void setMarkup(double markup);

    int getQuantity() const;

    void setQuantity(int quantity);

    char *getExpiryDate() const;

    void setExpiryDate(char *expiryDate);

    void sellProduct();

    double calculateSellingPrice() const;

    virtual char *getType() const = 0;

    virtual char *getUnit() const = 0;

    void displayProductInfo();

};
