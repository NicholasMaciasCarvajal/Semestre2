#include "Cabra.h"

Cabra::Cabra() : Animal() {
    habitad = "";
    tipodeleche = "";
}

Cabra::Cabra(const Cabra &rhs) : Animal() {
    habitad = rhs.habitad;
    tipodeleche =rhs.tipodeleche;
}

Cabra::Cabra(const std::string &habitad, const std::string &tipodeleche) : Animal() {
    this -> habitad = habitad;
    this -> tipodeleche = tipodeleche;
}

Cabra::~Cabra() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Cabra::makeSound() {
    std::cout << "beee" << std::endl;
}