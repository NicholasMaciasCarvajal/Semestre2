#include "Ardilla.h"

Ardilla::Ardilla() : Animal() {
    habitad = "";
    formadeheces = "";
}

Ardilla::Ardilla(const Ardilla &rhs) : Animal() {
    habitad = rhs.habitad;
    formadeheces =rhs.formadeheces;
}

Ardilla::Ardilla(const std::string &habitad, const std::string &formadeheces) : Animal() {
    this -> habitad = habitad;
    this -> formadeheces = formadeheces;
}

Ardilla::~Ardilla() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Ardilla::makeSound() {
    std::cout << "wrii" << std::endl;
}