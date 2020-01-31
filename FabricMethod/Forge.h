#ifndef FORGE_H
#define FORGE_H

#include <iostream>
#include <string>
#include "Armament.h"
#include "Sword.h"
#include "Shield.h"

enum TYPES {
    SWORD,
    SHIELD
};

class Forge {
    public:
        Forge();
        ~Forge();
        Armament* createArmament(TYPES type);
};

#endif // FORGE_H
