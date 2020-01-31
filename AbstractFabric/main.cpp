#include <iostream>
#include "Forge.h"
#include "RomanForge.h"
#include "BarbarianForge.h"
#include "Armament.h"


int main() {
    
    Forge* blacksmith = new RomanForge();
    Forge* smith = new BarbarianForge();
    TYPES sword = SWORD;
    TYPES shield = SHIELD;
    Armament* arm1 = blacksmith->createArmament(sword);
    Armament* arm2 = blacksmith->createArmament(shield);
    
    Armament* arm3 = smith->createArmament(sword);
    Armament* arm4 = smith->createArmament(shield);

    std::cout << *arm1 << std::endl;
    std::cout << *arm2 << std::endl;
    std::cout << *arm3 << std::endl;
    std::cout << *arm4 << std::endl;
    
    std::cout << "----------------------" << std::endl;
    
    arm1->action();
    arm2->action();
    arm3->action();
    arm4->action();
    
    delete (blacksmith);
    delete (arm1);
    delete (arm2);
    delete (arm3);
    delete (arm4);
    
    return 0;
}
