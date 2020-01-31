#ifndef STATE
#define STATE

#include <iostream>

class State {
    private:
        const char* title;
        int iq;
        int strenght;
        int armor;

    public:
        State(const char* title, int iq, int strenght, int armor);

        const char* getTitle() const;
        int getIQ() const;
        int getStrenght() const;
        int getArmor() const;
};

#endif // STATE
