#include "Coyote.h"

Coyote::Coyote() : Animal() {
    caricatura = "";
    habitad = "";
}

Coyote::Coyote(const Coyote &rhs) : Animal() {
    caricatura = rhs.caricatura;
    habitad = rhs.habitad;
}

Coyote::Coyote(const std::string &caricatura, const std::string &habitad) {
    this -> caricatura = caricatura;
    this -> habitad = habitad;
}

Coyote::~Coyote() noexcept {
    std::cout << "Se baneo de la vida" << std::endl;
}

void Coyote::makeSound() {
    std::cout << "arw" << std::endl;
}