#pragma once

class Product {
private:
    char *code;         //cod_produs
    char *supplier;     //furnizor
    char *unit;         //unitate_masura
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

    char *getUnit() const;

    void setUnit(char *unit);

    double getCost() const;

    void setCost(double cost);

    double getMarkup() const;

    void setMarkup(double markup);

    int getQuantity() const;

    void setQuantity(int quantity);

    char *getExpiryDate() const;

    void setExpiryDate(char *expiryDate);

    //Adăugare produs
    void addProduct();

    // Căutare produs de la un anumit furnizor
    char *getProductBySupplier(char *supplier);

    // Vânzare produs
    void sellProduct();

    // Calculare preţ de vânzare
    virtual double calculateSellingPrice() const = 0;

    virtual char *getType() const = 0;
};
