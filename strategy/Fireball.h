#ifndef FIREBALL
#define FIREBALL

#include <iostream>
#include "Spell.h"

class Fireball : public Spell {
    public:
        Fireball(int cost=10);
        virtual void action();
};

#endif // FIREBALL
