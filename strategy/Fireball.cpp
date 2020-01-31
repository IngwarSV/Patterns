#include "Fireball.h"

Fireball::Fireball(int cost): Spell(cost) {}

void Fireball::action() {
    std::cout << "Fireball!" << std::endl;
}
