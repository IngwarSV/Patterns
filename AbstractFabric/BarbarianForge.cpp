#include "BarbarianForge.h"

BarbarianForge::BarbarianForge() {
    std::cout << "creating BarbarianForge" << std::endl;
}
BarbarianForge::~BarbarianForge() {
    std::cout << "deleting BarbarianForge" << std::endl;
}

Armament* BarbarianForge::createArmament(TYPES type) {
    switch (type) {
        case SWORD:
            return new LongSword();
            break;
        case SHIELD:
            return new RoundShield();
            break;
        default:
            std::cout << "no such type" << std::endl;
            return nullptr;
            break;
    }
}

