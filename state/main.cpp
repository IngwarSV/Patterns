#include <iostream>
#include "Hero.h"

int main() {
    Hero* hero = new Hero();

    std::cout << *hero << std::endl;
    hero->transform();
    std::cout << *hero << std::endl;
    hero->transform();
    std::cout << *hero << std::endl;
    
    return 0;
}
