#include "archer.h"
#include <iostream>

Archer::Archer()
{
    setQuantity(100);
    std::cout << "Create archer squad" << std::endl;
}

int Archer::attack() {
    return 0.1*quantity;
}

void Archer::setQuantity(int q) {
    quantity = q;
}

int Archer::getQuantity() {
    return quantity;
}
