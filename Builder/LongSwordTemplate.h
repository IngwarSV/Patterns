#ifndef LONGSWORDTEMPLATE_H
#define LONGSWORDTEMPLATE_H

#include <iostream>
#include <string>

#include "SwordTemplate.h"
#include "LongSword.h"

class LongSwordTemplate : public SwordTemplate {
    public:
        LongSwordTemplate();
        virtual ~LongSwordTemplate();
        virtual void setModel() override;
        virtual void setWeigt() override;
        virtual void setPrice() override;
        
        virtual void createNewTemplate();
};

#endif // LONGSWORDTEMPLATE_H
