#include "RomanForge.h"

RomanForge::RomanForge() {
    std::cout << "creating RomanForge" << std::endl;
}
RomanForge::~RomanForge() {
    std::cout << "deleting RomanForge" << std::endl;
}

Armament* RomanForge::createArmament(TYPES type) {
    switch (type) {
        case SWORD:
            return new Gladius();
            break;
        case SHIELD:
            return new Scutum();
            break;
        default:
            std::cout << "no such type" << std::endl;
            return nullptr;
            break;
    }
}

