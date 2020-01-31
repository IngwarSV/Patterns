#ifndef SHIELD_H
#define SHIELD_H

#include <iostream>
#include "Armament.h"

class Shield : public Armament {
    public:
        Shield(const std::string& model = "small_shield", int price = 10);
        virtual ~Shield() override;
        virtual void action() override;
};

#endif // SHIELD_H
