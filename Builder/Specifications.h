#ifndef SPECIFICATIONS_H
#define SPECIFICATIONS_H

#include <string>

enum class SWORDWEIGHT {
    DEFAULT = 0,
    GLADIUS = 1,
    LONGSWORD = 2,
};

enum class SWORDPRICE {
    DEFAULT = 0,
    GLADIUS = 20,
    LONGSWORD = 30,
};

namespace TYPE {
    const std::string DEFAULT = "Default";
    const std::string GLADIUS = "Gladius";
    const std::string LONGSWORD = "LongSword";
}

#endif // SPECIFICATIONS_H
