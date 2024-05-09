#include "Oso.h"

Oso::Oso() {
    temperamento = "";
    habitad = "";
}

Oso::Oso(const Oso &rhs) {
    temperamento = rhs.temperamento;
    habitad = rhs.habitad;
}

Oso::Oso(const std::string &temperamento, const std::string &habitad) {
    this -> temperamento = temperamento;
    this -> habitad = habitad;
}

Oso::~Oso() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Oso::makeSound() {
    std::cout << "wroo" << std::endl;
}