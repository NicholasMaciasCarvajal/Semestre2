#include "Orco.h"

Orco::Orco(float tamano, const std::string &colorDePiel) : Enemigo() {
    this -> tamano = tamano;
    this -> colorDePiel = colorDePiel;
}

Orco::~Orco() {
    std::cout << "Awsawaa" << std::endl;
}

void Orco::danorecibido() {
    std::cout << "" << std::endl;
}

//-----------------------------------------------------------------

std::string Orco::getColorDePiel() const {
    return colorDePiel;
}
float Orco::getTamano() {
    return tamano;
}

//-----------------------------------------------------------------

void Orco::setColorDePiel(std::string colorDePiel) {
    this -> colorDePiel = ncolorDePiel;
}
void Orco::setTamano(float Tamano) {
    this -> tamano = ntamano;
}