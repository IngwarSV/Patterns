#ifndef HEAL
#define HEAL

#include <iostream>
#include "Spell.h"

class Heal : public Spell {
    public:
        Heal(int cost=10);
        virtual void action();
};

#endif // HEAL
