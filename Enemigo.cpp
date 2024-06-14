#include "Enemigo.h"

Enemigo::Enemigo() {
}

Enemigo::Enemigo(float dano, float nivel) {
    this -> dano = dano;
    this -> nivel = nivel;
}

Enemigo::~Enemigo() {
    std::cout << " + xp" << std::endl;
}

void Enemigo::danorecibido() {
    std::cout << "" << std::endl;
}

//---------------------------------------------------------

float Enemigo::getNivel() {
    return nivel;
}
float Enemigo::getDano() {
    return dano;
}

//---------------------------------------------------------

void Enemigo::setNivel(float nivel) {
    this -> nivel = nnivel;
}

void Enemigo::setDano(float dano) {
    this -> dano = ndano;
}