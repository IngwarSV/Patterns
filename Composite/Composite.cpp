#include <iostream>
#include <vector>

enum class SALLARY {
    LEGIONNAIRE = 100,
    AUXILIARY = 50,
    EQUITES = 150
};

class Unit {
    protected:
        int sallary;
    public:
        Unit(int sallary = 0) {
            this->sallary = sallary;
        }
        virtual ~Unit() {}

        virtual void addUnit(Unit* unit) = 0;

        virtual void removeUnit(Unit* unit) = 0;

        virtual int getSallary() {
            return this->sallary;
        }
};

class Legionnaire : public Unit {
    public:
        Legionnaire(int sallary = static_cast<int>(SALLARY::LEGIONNAIRE)) : Unit (sallary) {}
        virtual ~Legionnaire() {}

        virtual void addUnit(Unit* unit) override {}

        virtual void removeUnit(Unit* unit) override {}
};

class Auxiliary : public Unit {
    public:
        Auxiliary(int sallary = static_cast<int>(SALLARY::AUXILIARY)) : Unit (sallary) {}
        virtual ~Auxiliary() {
        }

        virtual void addUnit(Unit* unit) override {}

        virtual void removeUnit(Unit* unit) override {}
};

class Equites : public Unit {
    public:
        Equites(int sallary = static_cast<int>(SALLARY::EQUITES)) : Unit (sallary) {}
        virtual ~Equites() {
        }

        virtual void addUnit(Unit* unit) override {}

        virtual void removeUnit(Unit* unit) override {}
};

class CompositeUnit : public Unit {
    protected:
        std::vector<Unit*>* box;
    
    public:
        CompositeUnit() {
            this->box = new std::vector<Unit*>();
        }
        virtual ~CompositeUnit() {
            for (int i = 0, size = box->size(); i < size; ++i ) {
                delete (*box)[i];
            }
            delete this->box;
        }

        virtual void addUnit(Unit* unit) override {
            this->box->push_back(unit);
        }

        virtual void removeUnit(Unit* unit) override {}
        
        int getSallary() override {
            int totalPayment = 0;
            
            for (int i = 0, size = box->size(); i < size; ++i ) {
                totalPayment += (*box)[i]->getSallary();
            }
            
            return totalPayment;
        }
};

CompositeUnit* createLegion() {
    CompositeUnit* legion = new CompositeUnit();
    
    for (int i = 0; i < 3000; ++i ) {
        legion->addUnit(new Legionnaire());
    }
    
    for (int i = 0; i < 1200; ++i ) {
        legion->addUnit(new Auxiliary());
    }
    
    for (int i = 0; i < 300; ++i ) {
        legion->addUnit(new Equites());
    }
    
    return legion;
}

int main() {
    Unit* legio1 = createLegion();
    
    std::cout << legio1->getSallary() << std::endl;
    
    Unit* army = new CompositeUnit();
    
    for ( int i = 0; i < 4; ++i ) {
        army->addUnit(createLegion());
    }
    
    std::cout << army->getSallary() << std::endl;
    
    delete(legio1);
    delete(army);
    
    return 0;
}

