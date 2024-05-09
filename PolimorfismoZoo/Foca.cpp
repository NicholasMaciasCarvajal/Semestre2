#include "Foca.h"

Foca::Foca() : Animal() {
    habitad = "";
    velocidaddemovimiento = "";
}

Foca::Foca(const Foca &rhs) : Animal() {
    habitad = rhs.habitad;
    velocidaddemovimiento =rhs.velocidaddemovimiento;
}

Foca::Foca(const std::string &habitad, const std::string &velocidaddemovimiento) : Animal() {
    this -> velocidaddemovimiento = velocidaddemovimiento;
    this -> habitad = habitad;
}

Foca::~Foca() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Foca::makeSound() {
    std::cout << "womp" << std::endl;
}