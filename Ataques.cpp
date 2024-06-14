#include "Ataques.h"

Ataques::Ataques() {
}

Ataques::Ataques(const std::string &nombre, float dano) {
    this -> nombre = nombre;
    this -> dano = dano;
}

Ataques::~Ataques() {
    std::cout << "No pudo atacar" << std::endl;
}

void Ataques::formadeataque() {
    std::cout << "Ataque" << std::endl;
}

//-----------------------------------------------------------------

std::string Ataques::getNombre() const {
    return nombre;
}
float Ataques::getDano() {
    return dano;
}

//-----------------------------------------------------------------

void Ataques::setNombre(std::string nombre) {
    this -> nombre = nnombre;
}
void Ataques::setDano(float dano) {
    this -> dano = ndano;
}