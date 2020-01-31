#ifndef HERO
#define HERO

#include <iostream>
#include "State.h"

class Hero {
    private:
       State* currentState;
       State* alterEgo; 

    public:
        Hero();
        ~Hero();

        const char* getTitle() const;
        int getIQ() const;
        int getStrenght() const;
        int getArmor() const;

        void transform();
};

std::ostream& operator<<(std::ostream& out, const Hero& hero);

#endif // HERO
