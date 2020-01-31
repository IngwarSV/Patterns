#include "LongSwordTemplate.h"

LongSwordTemplate::LongSwordTemplate() {
            std::cout << "creating LongSwordTemplate" << std::endl;
}

LongSwordTemplate::~LongSwordTemplate() {
            std::cout << "deleting LongSwordTemplate" << std::endl;
}

void LongSwordTemplate::setModel() {
    this->sword->model = TYPE::LONGSWORD;
}

void LongSwordTemplate::setWeigt() {
    this->sword->weight = int(SWORDWEIGHT::LONGSWORD);
}

void LongSwordTemplate::setPrice() {
    this->sword->price = int(SWORDPRICE::LONGSWORD);
}

void LongSwordTemplate::createNewTemplate() {
    this->sword = new LongSword();
}
