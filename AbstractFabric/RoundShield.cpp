#include "RoundShield.h"

RoundShield::RoundShield(const std::string& model, int price) : Shield(model, price) {
            std::cout << "creating RoundShield" << std::endl;
}

RoundShield::~RoundShield() {
            std::cout << "deleting RoundShield" << std::endl;
}

void RoundShield::action() {
    std::cout << "Halt!" << std::endl;
}
