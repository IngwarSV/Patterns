#ifndef LONGSWORD_H
#define LONGSWORD_H

#include <iostream>
#include <string>

#include "Sword.h"

class LongSword : public Sword {
    public:
        LongSword();
        virtual ~LongSword() override;
        virtual void info() override;
};

#endif // LONGSWORD_H
