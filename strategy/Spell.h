#ifndef SPELL
#define SPELL

#include <iostream>

class Spell {
    protected:
        int cost;
    
    public:
        Spell(int cost=10);
        virtual ~Spell();
        virtual void action() = 0;
        int getCost() const;
};

#endif // SPELL
