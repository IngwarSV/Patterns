#ifndef SMITH_H
#define SMITH_H

#include <iostream>
#include <string>

#include "SwordTemplate.h"
#include "Sword.h"


class Smith {
    private:
        SwordTemplate* _template;
    public:
        Smith();
        ~Smith();
        void setSwordTemplate(SwordTemplate* __template);
        Sword* createSword();
};

#endif // SMITH_H
