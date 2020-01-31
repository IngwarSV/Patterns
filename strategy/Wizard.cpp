#include "Wizard.h"

Wizard::Wizard(Spell* spell, int mana): spell(spell), mana(mana) {}
Wizard::~Wizard() {
    delete(this->spell);
}

void Wizard::cast() {
    if ( this->spell->getCost() > this->mana ) {
        std::cout << "Not enough mana!" << std::endl;
        return;
    }
    this->mana -= this->spell->getCost();
    this->spell->action();
}

void Wizard::changeSpell(Spell* newSpell) {
    delete(this->spell);
    this->spell = newSpell;
}

int Wizard::getMana() const {
    return this->mana;
}
