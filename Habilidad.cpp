#include "Habilidad.h"

Habilidad::Habilidad() {
    this -> costo = 0;
}
Habilidad::Habilidad(int costo) {
    this -> costo = costo;
}
Habilidad::~Habilidad() {
}

void Habilidad::usar() {
}

//__________________________________________________//

int Habilidad::getCosto() {
    return costo;
}

//__________________________________________________//

void Habilidad::setCosto(int costo) {
    this -> costo = ncosto;
}