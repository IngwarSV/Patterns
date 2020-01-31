#ifndef SWORD_H
#define SWORD_H

#include <iostream>
#include "Armament.h"

class Sword : public Armament {
    public:
        Sword(const std::string& model = "small_sword", int price = 10);
        virtual ~Sword() override;
        virtual void action() override;
};

#endif // SWORD_H
