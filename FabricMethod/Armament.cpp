#include "Armament.h"

Armament::Armament(const std::string& model, int price) {
    this->model = model;
    this->price = price;
            std::cout << "creating Armament" << std::endl;
}

Armament::~Armament() {
            std::cout << "deleting Armament" << std::endl;
}

const std::string& Armament::getModel() const {
    return this->model;
}
int Armament::getPrice() const {
    return this->price;
}

void Armament::action() {}

std::ostream& operator<<(std::ostream& out, const Armament& item) {
    out << "Model: " << item.getModel() << ", price: " << item.getPrice();
    
    return out;
}
