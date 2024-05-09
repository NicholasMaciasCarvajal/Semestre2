#include "Gato.h"

Gato::Gato() : Animal() {
    nombrecientifico = "";
    conducta = "";
}

Gato::Gato(const Gato &rhs) : Animal() {
    nombrecientifico = rhs.nombrecientifico;
    conducta = rhs.conducta;
}

Gato::Gato(const std::string &nombrecientifico, const std::string &conducta) {
    this -> nombrecientifico = nombrecientifico;
    this -> conducta = conducta;
}

Gato::~Gato() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Gato::makeSound() {
    std::cout << "meow" << std::endl;
}