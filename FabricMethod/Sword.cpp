#include "Sword.h"

Sword::Sword(const std::string& model, int price) : Armament(model, price) {
            std::cout << "creating Sword" << std::endl;
}

Sword::~Sword() {
            std::cout << "deleting Sword" << std::endl;
}

void Sword::action() {
    std::cout << "Attack!" << std::endl;
}
