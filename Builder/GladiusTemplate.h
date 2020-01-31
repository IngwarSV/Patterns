#ifndef GLADIUSTEMPLATE_H
#define GLADIUSTEMPLATE_H

#include <iostream>
#include <string>

#include "SwordTemplate.h"
#include "Gladius.h"

class GladiusTemplate : public SwordTemplate {
    public:
        GladiusTemplate();
        virtual ~GladiusTemplate();
        virtual void setModel() override;
        virtual void setWeigt() override;
        virtual void setPrice() override;
        
        virtual void createNewTemplate();
};

#endif // GLADIUSTEMPLATE_H
