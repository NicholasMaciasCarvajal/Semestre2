#include "Personaje.h"

Personaje::Personaje() : Entidad(){
    this -> dano = 0;
    this -> mana = 0;
}

Personaje::Personaje(int dano,int mana) : Entidad() {
    this -> dano = dano;
    this -> mana = mana;
}

Personaje::~Personaje() noexcept {
}

void Personaje::mostrarInformacion() {
}

//__________________________________________________//

int Personaje::getDano() {
    return dano;
}
int Personaje::getMana() {
    return mana;
}

//__________________________________________________//

void Personaje::setDano(int dano) {
    this -> dano = ndano;
}
void Personaje::setMana(int mana) {
    this -> mana = nmana;
}