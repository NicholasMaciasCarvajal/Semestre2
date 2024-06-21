#include "Curar.h"

Curar::Curar() {
    this -> sres = 0;
}
Curar::Curar(int sres) {
    this -> sres = sres;
}
Curar::~Curar() noexcept {
}

void Curar::usarHabilidad(const std::string aHabilidad) {
}

//__________________________________________________//

int Curar::getSres() {
    return sres;
}

//__________________________________________________//

void Curar::setSres(int sres) {
    this -> sres = nsres;
}
