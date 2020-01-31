#include "Smith.h"

Smith::Smith() {
    std::cout << "creating Smith" << std::endl;
}
Smith::~Smith() {
    std::cout << "deleting Smith" << std::endl;
}

void Smith::setSwordTemplate(SwordTemplate* __template) {
    this->_template = __template;
}

Sword* Smith::createSword() {
    this->_template->createNewTemplate();
    this->_template->setModel();
    this->_template->setWeigt();
    this->_template->setPrice();
    return this->_template->getSword();
}


