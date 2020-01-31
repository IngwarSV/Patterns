#include <iostream>
#include "Data.h"

void handle(Data* data, int value) {
    data->setValue(value);
}

int main() {
    Data* data = new Data("Important stuff", 42);

    std::cout << *data << std::endl;

    data->backup();
    handle(data, -100);
    std::cout << *data << std::endl;

    data->revert();
    std::cout << *data << std::endl;


    return 0;
}
