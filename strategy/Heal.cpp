#include "Heal.h"

Heal::Heal(int cost): Spell(cost) {}

void Heal::action() {
    std::cout << "Heal!" << std::endl;
}
