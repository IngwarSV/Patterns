#ifndef SWORD_H
#define SWORD_H

#include <iostream>
#include "Armament.h"

class Sword : public Armament {
    public:
        Sword(const std::string& model, int price);
        virtual ~Sword() override;
        virtual void action() override;
};

#endif // SWORD_H
