#include "BolaDeFuego.h"

BolaDeFuego::BolaDeFuego() {
}

BolaDeFuego::BolaDeFuego(float dano, bool danoarea) : Ataques(){
    this -> dano = dano;
    this -> danoarea = danoarea;
}

BolaDeFuego::~BolaDeFuego() noexcept {
    std::cout << "a" << std::endl;
}

void BolaDeFuego::usar() {
    std::cout << "FireBall" << std::endl;
}


bool BolaDeFuego::getDanoarea() {
    return danoarea;
}
float BolaDeFuego::getDano() {
    return dano;
}

void BolaDeFuego::setDanoarea(bool danoarea) {
    this -> danoarea = ndanoarea;
}
void BolaDeFuego::setDano(float dano) {
    this -> dano = ndano;
}