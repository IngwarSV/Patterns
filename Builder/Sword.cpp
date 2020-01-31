#include "Sword.h"

Sword::Sword() {
            std::cout << "creating Sword" << std::endl;
}

Sword::~Sword() {
            std::cout << "deleting Sword" << std::endl;
}

void Sword::info() {}

std::ostream& operator<<(std::ostream& out, const Sword& sword) {
    out << "Model: " << sword.model << ", weight: " << sword.weight << ", price: " << sword.price;
    
    return out;
}
