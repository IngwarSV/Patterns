#include "Gladius.h"

Gladius::Gladius(const std::string& model, int price) : Sword(model, price) {
            std::cout << "creating Gladius" << std::endl;
}

Gladius::~Gladius() {
            std::cout << "deleting Gladius" << std::endl;
}

void Gladius::action() {
    std::cout << "Barra!" << std::endl;
}
