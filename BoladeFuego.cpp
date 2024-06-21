#include "BoladeFuego.h"

BoladeFuego::BoladeFuego() {
    this -> dano = 0;
}
BoladeFuego::BoladeFuego(int costo, int dano) {
    this -> costo = costo;
    this -> dano = dano;
}
BoladeFuego::~BoladeFuego() noexcept {
}

void BoladeFuego::usarHabilidad(const std::string aHabilidad) {
}

//__________________________________________________//

int BoladeFuego::getDano() {
    return dano;
}

//__________________________________________________//

void BoladeFuego::setDano(int dano) {
    this -> dano = ndano;
}