#ifndef GLADIUS_H
#define GLADIUS_H

#include <iostream>
#include "Sword.h"

class Gladius : public Sword {
    public:
        Gladius(const std::string& model = "Gladius", int price = 10);
        virtual ~Gladius() override;
        virtual void action() override;
};

#endif // GLADIUS_H
