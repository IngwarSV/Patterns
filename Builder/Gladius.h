#ifndef GLADIUS_H
#define GLADIUS_H

#include <iostream>
#include <string>

#include "Sword.h"

class Gladius : public Sword {
    public:
        Gladius();
        virtual ~Gladius() override;
        virtual void info() override;
};

#endif // GLADIUS_H
