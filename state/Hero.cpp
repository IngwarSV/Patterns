#include "Hero.h"

Hero::Hero() {
    this->currentState = new State("Professor", 150, 10, 0);
    this->alterEgo = new State("Hulk", 12, 100, 100);
}

Hero::~Hero() {
    delete(this->currentState);
    delete(this->alterEgo);
}

const char* Hero::getTitle() const {
    return this->currentState->getTitle();
}

int Hero::getIQ() const {
    return this->currentState->getIQ();
}

int Hero::getStrenght() const {
    return this->currentState->getStrenght();
}

int Hero::getArmor() const {
    return this->currentState->getArmor();
}

void Hero::transform() {
    State* tmp = this->currentState;
    this->currentState = this->alterEgo;
    this->alterEgo = tmp;
}

std::ostream& operator<<(std::ostream& out, const Hero& hero) {
    out << "Name: " << hero.getTitle() << std::endl;
    out << "IQ: " << hero.getIQ() << std::endl;
    out << "Strength: " << hero.getStrenght() << std::endl;
    out << "Armor: " << hero.getArmor() << std::endl << std::endl;
    return out;
}
