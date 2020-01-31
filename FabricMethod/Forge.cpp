#include "Forge.h"

Forge::Forge() {
    std::cout << "creating Forge" << std::endl;
}
Forge::~Forge() {
    std::cout << "deleting Forge" << std::endl;
}

Armament* Forge::createArmament(TYPES type) {
    switch (type) {
        case SWORD:
            return new Sword();
            break;
        case SHIELD:
            return new Shield();
            break;
        default:
            std::cout << "no such type" << std::endl;
            return nullptr;
            break;
    }
}

