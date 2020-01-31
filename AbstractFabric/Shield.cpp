#include "Shield.h"

Shield::Shield(const std::string& model, int price) : Armament(model, price) {
            std::cout << "creating Shield" << std::endl;
}

Shield::~Shield() {
            std::cout << "deleting Shield" << std::endl;
}

void Shield::action() {
    std::cout << "Defend!" << std::endl;
}
