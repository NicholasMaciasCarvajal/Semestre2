#include "Duende.h"

Duende::Duende(float tamano, const std::string &colorDePiel) : Enemigo() {
    this -> tamano = tamano;
    this -> colorDePiel = colorDePiel;
}

Duende::~Duende() {
    std::cout << "Awsawaa" << std::endl;
}

void Duende::danorecibido() {
    std::cout << "" << std::endl;
}

//-----------------------------------------------------------------

std::string Duende::getColorDePiel() const {
    return colorDePiel;
}
float Duende::getTamano() {
    return tamano;
}

//-----------------------------------------------------------------

void Duende::setColorDePiel(std::string colorDePiel) {
    this -> colorDePiel = ncolorDePiel;
}
void Duende::setTamano(float Tamano) {
    this -> tamano = ntamano;
}