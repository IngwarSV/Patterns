#include "State.h"

State::State(const char* title, int iq, int strenght, int armor)
     : title(title), iq(iq), strenght(strenght), armor(armor) {};

const char* State::getTitle() const {
    return this->title;
}

int State::getIQ() const {
    return this->iq;
}

int State::getStrenght() const {
    return this->strenght;
}

int State::getArmor() const {
    return this->armor;
}
