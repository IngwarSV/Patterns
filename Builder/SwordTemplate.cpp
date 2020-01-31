#include "SwordTemplate.h"

SwordTemplate::SwordTemplate() {
            std::cout << "creating SwordTemplate" << std::endl;
}

SwordTemplate::~SwordTemplate() {
            std::cout << "deleting SwordTemplate" << std::endl;
}

void SwordTemplate::setModel() {
    this->sword->model = TYPE::DEFAULT;
}

void SwordTemplate::setWeigt() {
    this->sword->weight = int(SWORDWEIGHT::DEFAULT);
}

void SwordTemplate::setPrice() {
    this->sword->price = int(SWORDPRICE::DEFAULT);
}

void SwordTemplate::createNewTemplate() {
    this->sword = new Sword();
}

Sword* SwordTemplate::getSword() {
    return this->sword;
}
