#include <iostream>

#include "Inventory.h"
using namespace std;
int main()
{
    Inventory inventory;

    string name = "audifonos";

    inventory.addProduct(name, 3);
    inventory.getProduct(name);
    return 0;
}
