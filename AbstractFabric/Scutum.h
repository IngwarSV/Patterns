#ifndef SCUTUM_H
#define SCUTUM_H

#include <iostream>
#include "Armament.h"
#include "Shield.h"

class Scutum : public Shield {
    public:
        Scutum(const std::string& model = "Scutum", int price = 10);
        virtual ~Scutum() override;
        virtual void action() override;
};

#endif // SCUTUM_H
