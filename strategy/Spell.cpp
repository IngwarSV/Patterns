#include "Spell.h"

Spell::Spell(int cost) : cost(cost) {}

Spell::~Spell() {}

int Spell::getCost() const {
    return this->cost;
}
