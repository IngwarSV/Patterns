#ifndef ROUNDSHIELD_H
#define ROUNDSHIELD_H

#include <iostream>
#include "Armament.h"
#include "Shield.h"

class RoundShield : public Shield {
    public:
        RoundShield(const std::string& model = "RoundShield", int price = 10);
        virtual ~RoundShield() override;
        virtual void action() override;
};

#endif // ROUNDSHIELD_H
