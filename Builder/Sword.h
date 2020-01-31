#ifndef SWORD_H
#define SWORD_H

#include <iostream>

class Sword {
    public:
        std::string model;
        int weight;
        int price;
    public:
        Sword();
        virtual ~Sword();
        virtual void info();
        
    friend std::ostream& operator<<(std::ostream& out, const Sword& sword);
};

std::ostream& operator<<(std::ostream& out, const Sword& sword);

#endif // SWORD_H
