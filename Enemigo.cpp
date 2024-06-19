#include "Enemigo.h"

Enemigo::Enemigo() {
}

Enemigo::Enemigo(float vida, float nivel) {
    this -> vida = vida;
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
float Enemigo::getVida() {
    return vida;
}

//---------------------------------------------------------

void Enemigo::setNivel(float nivel) {
    this -> nivel = nnivel;
}

void Enemigo::setVida(float vida) {
    this -> vida = nvida;
}