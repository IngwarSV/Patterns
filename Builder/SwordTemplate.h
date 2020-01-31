#ifndef SWORDTEMPLATE_H
#define SWORDTEMPLATE_H

#include <iostream>
#include <string>

#include "Specifications.h"
#include "Sword.h"

class SwordTemplate {
    protected:
        Sword* sword;
        
    public:
        SwordTemplate();
        virtual ~SwordTemplate();
        virtual void setModel();
        virtual void setWeigt();
        virtual void setPrice();
        
        virtual void createNewTemplate();
        virtual Sword* getSword();
};



#endif // SWORDTEMPLATE_H
