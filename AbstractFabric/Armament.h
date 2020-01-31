#ifndef ARMAMENT_H
#define ARMAMENT_H

#include <iostream>
#include <string>

class Armament {
    private:
        std::string model;
        int price;
        
    public:
        Armament(const std::string& model, int price);
        virtual ~Armament();
        const std::string& getModel() const;
        int getPrice() const;
        virtual void action();
};

std::ostream& operator<<(std::ostream& out, const Armament& item);

#endif // ARMAMENT_H
