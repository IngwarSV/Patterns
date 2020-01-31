#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    std::cout << "creating Singleton" << std::endl;
}

Singleton* Singleton::getInstance() {
    if ( !instance ) {
        instance = new Singleton();
    }
    return instance;
}

// Меєрс:

// Singleton::Singleton() {
//     std::cout << "creating Singleton" << std::endl;
// }

// Singleton::~Singleton() {}

// Singleton& Singleton::getInstance() {
//     static Singleton instance;
//     return instance;
// }
