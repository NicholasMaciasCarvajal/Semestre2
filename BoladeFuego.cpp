#include "BoladeFuego.h"

BoladeFuego::BoladeFuego() {
    this -> dano = 0;
}
BoladeFuego::BoladeFuego(int dano) {
    this -> dano = dano;
}
BoladeFuego::~BoladeFuego() noexcept {
}

void BoladeFuego::usar() {
}

//__________________________________________________//

int BoladeFuego::getDano() {
    return dano;
}

//__________________________________________________//

void BoladeFuego::setDano(int dano) {
    this -> dano = ndano;
}