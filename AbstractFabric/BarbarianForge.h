#ifndef BARBARIANFORGE_H
#define BARBARIANFORGE_H

#include <iostream>
#include <string>
#include "Forge.h"
#include "LongSword.h"
#include "RoundShield.h"

class BarbarianForge : public Forge {
    public:
        BarbarianForge();
        virtual ~BarbarianForge() override;
        virtual Armament* createArmament(TYPES type) override;
};

#endif // BARBARIANFORGE_H
