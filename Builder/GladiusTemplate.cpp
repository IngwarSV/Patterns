#include "GladiusTemplate.h"

GladiusTemplate::GladiusTemplate() {
            std::cout << "creating GladiusTemplate" << std::endl;
}

GladiusTemplate::~GladiusTemplate() {
            std::cout << "deleting GladiusTemplate" << std::endl;
}

void GladiusTemplate::setModel() {
    this->sword->model = TYPE::GLADIUS;
}

void GladiusTemplate::setWeigt() {
    this->sword->weight = int(SWORDWEIGHT::GLADIUS);
}

void GladiusTemplate::setPrice() {
    this->sword->price = int(SWORDPRICE::GLADIUS);
}

void GladiusTemplate::createNewTemplate() {
    this->sword = new Gladius();
}
