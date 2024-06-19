#include "Arma.h"

Arma::Arma() {
}
Arma::Arma(const std::string &grado, const std::string &funcion) : Item() {
    this -> grado = grado;
    this -> funcion = funcion;
}

Arma::~Arma() {
}

void Arma::usar() {
}

std::string Arma::getFuncion() {
    return funcion;
}
std::string Arma::getGrado() {
    return grado;
}

void Arma::setFuncion(std::string funcion) {
    this -> funcion = nfuncion;
}
void Arma::setGrado(std::string grado) {
    this -> grado = ngrado;
}
