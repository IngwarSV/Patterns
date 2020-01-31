#include "Data.h"

Data::Data(std::string info, int value): info(info), value(value) {
    this->snapshot = nullptr;
}

void Data::setValue(int value) {
    this->value = value;
}

void Data::backup() {
    this->snapshot = new Snapshot(this->info, this->value);
}

void Data::revert() {
    this->info = this->snapshot->info;
    this->value = this->snapshot->value;
}

std::ostream& operator<<(std::ostream& out, const Data& data) {
    out << "Data(" << data.info << "): " << data.value;
    return out;
}
