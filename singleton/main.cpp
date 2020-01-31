#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* singleton1 = Singleton::getInstance();
    Singleton* singleton2 = Singleton::getInstance();

    std::cout << singleton1 << std::endl;
    std::cout << singleton2 << std::endl;

// Меєрс:

    // Singleton& singleton1 = Singleton::getInstance();
    // Singleton& singleton2 = Singleton::getInstance();

    // std::cout << &singleton1 << std::endl;
    // std::cout << &singleton2 << std::endl;
    
    return 0;
}
