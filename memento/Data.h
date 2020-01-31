#ifndef DATA
#define DATA

#include <iostream>
#include "Snapshot.h"

class Data {
    private:
        std::string info;
        int value;
        Snapshot* snapshot;

    public:
        Data(std::string info, int value);
        void setValue(int value);
        void backup();
        void revert();
        friend std::ostream& operator<<(std::ostream& out, const Data& data);
};

std::ostream& operator<<(std::ostream& out, const Data& data);

#endif // DATA
