#include "Perro.h"

Perro::Perro() : Animal() {
    raza = "";
    colordepelaje = "";
}

Perro::Perro(const Perro &rhs) : Animal() {
    raza = rhs.raza;
    colordepelaje =rhs.colordepelaje;
}

Perro::Perro(const std::string &raza, const std::string &colordepelaje) : Animal() {
    this -> raza = raza;
    this -> colordepelaje = colordepelaje;
}

Perro::~Perro() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Perro::makeSound() {
    std::cout << "woof" << std::endl;
}