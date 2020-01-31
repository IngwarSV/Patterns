#ifndef ROMANFORGE_H
#define ROMANFORGE_H

#include <iostream>
#include <string>
#include "Forge.h"
#include "Gladius.h"
#include "Scutum.h"

class RomanForge : public Forge {
    public:
        RomanForge();
        virtual ~RomanForge();
        virtual Armament* createArmament(TYPES type) override;
};

#endif // ROMANFORGE_H
