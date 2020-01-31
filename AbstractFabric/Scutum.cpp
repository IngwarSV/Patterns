#include "Scutum.h"

Scutum::Scutum(const std::string& model, int price) : Shield(model, price) {
            std::cout << "creating Scutum" << std::endl;
}

Scutum::~Scutum() {
            std::cout << "deleting Scutum" << std::endl;
}

void Scutum::action() {
    std::cout << "Stay still!" << std::endl;
}
