#include "LongSword.h"

LongSword::LongSword(const std::string& model, int price) : Sword(model, price) {
            std::cout << "creating LongSword" << std::endl;
}

LongSword::~LongSword() {
            std::cout << "deleting LongSword" << std::endl;
}

void LongSword::action() {
    std::cout << "WOTAN!" << std::endl;
}
