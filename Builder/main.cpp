#include <iostream>
#include "Smith.h"
#include "Sword.h"
// #include "SwordTemplate.h"
#include "GladiusTemplate.h"
#include "LongSwordTemplate.h"
#include "LongSword.h"



int main() {
    
    Smith* blacksmith = new Smith();
    GladiusTemplate* gTemplate = new GladiusTemplate();
    LongSwordTemplate* lsTemplate = new LongSwordTemplate();
    
    blacksmith->setSwordTemplate(gTemplate);
    Sword* arm1 = blacksmith->createSword();
    std::cout << *arm1 << std::endl;
    std::cout << "----------------------" << std::endl;
    blacksmith->setSwordTemplate(lsTemplate);
    Sword* arm2 = blacksmith->createSword();
    std::cout << *arm2 << std::endl;
    std::cout << "----------------------" << std::endl;
    arm1->info();
    arm2->info();
    std::cout << "----------------------" << std::endl;
    
    delete (blacksmith);
    delete(gTemplate);
    delete(lsTemplate);
    delete (arm1);
    delete (arm2);
    
    return 0;
}
