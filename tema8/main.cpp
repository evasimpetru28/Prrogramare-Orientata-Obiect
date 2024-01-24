/*
 * Simpetru Eva-Maria
 * Grupa 208, ID
 * Tema 8
 *
 * Github repo: https://github.com/evasimpetru28/Prrogramare-Orientata-Obiect/tree/main/tema8
 * UML schema drive: https://drive.google.com/file/d/1Xs4yIHv6ZUM0SVEkajUlV0vXWba9tZhP/view?usp=sharing
 *
 * Locatie fisier intrare: ./cmake-build-debug/products.in
 *
 * */

#include <cstring>
#include "supermarket/Supermarket.h"
#include "grocery/Grocery.h"
#include "cosmetic/Cosmetic.h"
#include "drink/Drink.h"

using namespace std;

int main() {

    Supermarket supermarket;
    supermarket.loadProductsFromFile("products.in");

    while (true) {
        int input;

        cout<< "\n--------------------------------------------------------------------------------------------\n";
        cout << "| Selectaţi operaţia:                                                                      |" << endl;
        cout << "| 1.     Adăugare produs.                                                                  |" << endl;
        cout << "| 2.     Căutare produs(e) de la un anumit furnizor.                                       |" << endl;
        cout << "| 3.     Ştergere produse cu termen de valabilitate expirat.                               |" << endl;
        cout << "| 4.     Vânzare produs (cantitate = cantitate – 1)                                        |" << endl;
        cout << "| 5.     Calculare preţ de vânzare.                                                        |" << endl;
        cout << "| 6.     Afişarea produselor.                                                              |" << endl;
        cout << "| 7.     Număr produse pentru fiecare tip.                                                 |" << endl;
        cout << "| 8.     Ieşire                                                                            |" << endl;
        cout << "--------------------------------------------------------------------------------------------\n";

        cin >> input;
        int productOption = 1, countGroceries = 0, countCosmetics = 0, countDrinks = 0;

        switch (input) {
            case 1:
                Product *product;

                int type;
                cout << "Product Type {1,2,3}: ";
                cin >> type;
                if (type == 1) {
                    product = new Grocery();
                } else if (type == 2) {
                    product = new Cosmetic();
                } else if (type == 3) {
                    product = new Drink();
                } else {
                    cout << "Invalid product type: " << type << endl;
                    break;
                }

                char code[10], supplier[20], expiryDate[11];
                double cost, markup;
                int quantity;

                cout << "Code: ";
                cin >> code;
                cout << "Supplier: ";
                cin >> supplier;
                cout << "Cost: ";
                cin >> cost;
                cout << "Markup: ";
                cin >> markup;
                cout << "Quantity: ";
                cin >> quantity;
                cout << "Expiry Date: ";
                cin >> expiryDate;

                product->setCode(code);
                product->setSupplier(supplier);
                product->setCost(cost);
                product->setMarkup(markup);
                product->setQuantity(quantity);
                product->setExpiryDate(expiryDate);

                supermarket.addProduct(product);
                cout << supermarket.getCount() << endl;

                product->displayProductInfo();

                break;
            case 2:
                cout << "Alegeţi furnizorul din lista:\n[ ";
                for (Product *p: supermarket.getProducts()) {
                    cout << "\"" << p->getSupplier() << "\" ";
                }
                cout << "]\n";
                cout << "Furnizor: ";

                cin >> supplier;
                supermarket.searchProductsBySupplier(supplier);

                break;
            case 3:
                supermarket.removeExpiredProducts();

                break;
            case 4:
                productOption = 1;
                cout << "Alegeţi produsul:\n";
                for (Product *p: supermarket.getProducts()) {
                    cout << "Cod: " << p->getCode() << "; Stoc: " << p->getQuantity() << " | Opţiune: " << productOption << endl;
                    productOption++;
                }
                cout << "\n";

                cin >> productOption;
                product = supermarket.getProducts()[productOption - 1];
                cout << "Cantitate iniţială: " << product->getQuantity() << endl;
                product->sellProduct();
                cout << "Cantitate finală: " << product->getQuantity() << endl;

                break;
            case 5:
                for (Product *p: supermarket.getProducts()) {
                    cout << p->getCode();
                    cout << ": [preţ iniţial=" << p->getCost() << "] ";
                    cout << "[preţ vânzare=" << p->calculateSellingPrice() << "]";
                    cout << endl;
                }

                break;
            case 6:
                for (Product *p: supermarket.getProducts()) {
                    p->displayProductInfo();
                }
                break;
            case 7:

                for (Product *p: supermarket.getProducts()) {
                    if (strcmp(p->getType(), "Alimentar") == 0) {
                        countGroceries++;
                    } else if (strcmp(p->getType(), "Cosmetic") == 0) {
                        countCosmetics++;
                    } else if (strcmp(p->getType(), "Bautura") == 0) {
                        countDrinks++;
                    }
                }

                cout << "Alimentare: " << countGroceries << endl;
                cout << "Cosmetice: " << countCosmetics << endl;
                cout << "Băuturi: " << countDrinks << endl;

                break;
            default:
                exit(0);
        }
    }
}