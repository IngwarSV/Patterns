#ifndef LONGSWORD_H
#define LONGSWORD_H

#include <iostream>
#include "Sword.h"

class LongSword : public Sword {
    public:
        LongSword(const std::string& model = "LongSword", int price = 15);
        virtual ~LongSword() override;
        virtual void action() override;
};

#endif // LONGSWORD_H
