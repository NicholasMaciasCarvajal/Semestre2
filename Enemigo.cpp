#include "Enemigo.h"

Enemigo::Enemigo() : Entidad(){
    this -> dano = 0;
    this -> armadura = 0;
}

Enemigo::Enemigo(int dano, int armadura) {
    this -> dano = dano;
    this -> armadura = armadura;
}

Enemigo::~Enemigo() noexcept {
}

void Enemigo::mostrarInformacion() {
    std::cout << "El nombre del enemigo es: " << nombre << std::endl;
    std::cout << "La salud del enemigo es: " << salud << std::endl;
    std::cout << "El dano del enemigo es: " << dano << std::endl;
    std::cout << "La armadura del enemigo es: " << armadura << std::endl;
}

//__________________________________________________//

int Enemigo::getDano() {
    return dano;
}
int Enemigo::getArmadura() {
    return armadura;
}

//__________________________________________________//

void Enemigo::setDano(int dano) {
    this -> dano = ndano;
}
void Enemigo::setAtmadura(int armadura) {
    this -> armadura = narmadura;
}