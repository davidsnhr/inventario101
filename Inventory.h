//
// Created by David Sánchez on 22/11/24.
//

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>;
using namespace std;


class Inventory {
private:
    unordered_map<string, int> products;
public:
    void addProduct(string& name, int quatity);
    int getProduct(string& name);
    bool removeProduct(string& name);

};



#endif //INVENTORY_H
