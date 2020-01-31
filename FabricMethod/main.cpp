#include <iostream>
#include "Forge.h"
#include "Armament.h"


int main() {
    
    Forge* blacksmith = new Forge();
    TYPES sword = SWORD;
    TYPES shield = SHIELD;
    Armament* arm1 = blacksmith->createArmament(sword);
    Armament* arm2 = blacksmith->createArmament(shield);

    std::cout << *arm1 << std::endl;
    std::cout << *arm2 << std::endl;
    
    std::cout << "----------------------" << std::endl;
    
    arm1->action();
    arm2->action();
    
    delete (blacksmith);
    delete (arm1);
    delete (arm2);
    
    return 0;
}
