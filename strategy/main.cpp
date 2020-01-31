#include <iostream>
#include "Wizard.h"
#include "Fireball.h"
#include "Heal.h"

int main() {
    Wizard* wizard = new Wizard();

    std::cout << wizard->getMana() << std::endl;
    wizard->cast();
    std::cout << wizard->getMana() << std::endl;
    wizard->changeSpell(new Heal());
    wizard->cast();
    std::cout << wizard->getMana() << std::endl;
    wizard->changeSpell(new Fireball(100));
    wizard->cast();

    return 0;
}
