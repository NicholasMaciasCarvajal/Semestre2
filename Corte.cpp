#include "Corte.h"

Corte::Corte() {
}

Corte::Corte(float dano, bool danoarea) : Ataques(){
    this -> dano = dano;
    this -> danoarea = danoarea;
}

Corte::~Corte() noexcept {
    std::cout << "a" << std::endl;
}

void Corte::usar() {
    std::cout << "Slash" << std::endl;
}


bool Corte::getDanoarea() {
    return danoarea;
}
float Corte::getDano() {
    return dano;
}

void Corte::setDanoarea(bool danoarea) {
    this -> danoarea = ndanoarea;
}
void Corte::setDano(float dano) {
    this -> dano = ndano;
}