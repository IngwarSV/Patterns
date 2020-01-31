#ifndef FORGE_H
#define FORGE_H

#include <iostream>
#include <string>
#include "Armament.h"
// #include "Sword.h"
// #include "Shield.h"

enum TYPES {
    SWORD,
    SHIELD
};

class Forge {
    public:
        Forge();
        virtual ~Forge();
        virtual Armament* createArmament(TYPES type) = 0;
};

#endif // FORGE_H
