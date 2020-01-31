#ifndef WIZARD
#define WIZARD

#include "Fireball.h"

class Wizard {
    private:
        Spell* spell;
        int mana;

    public:
        Wizard(Spell* spell = new Fireball(), int mana = 100);
        ~Wizard();

        void cast();
        void changeSpell(Spell* newSpell);
        int getMana() const;
};

#endif // WIZARD
