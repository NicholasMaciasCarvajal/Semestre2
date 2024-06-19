#include "Pocion.h"

Pocion::Pocion() {
}
Pocion::Pocion(const std::string &grado, const std::string &funcion) : Item() {
    this -> grado = grado;
    this -> funcion = funcion;
}

Pocion::~Pocion() {
}

void Pocion::usar() {
}

std::string Pocion::getFuncion() {
    return funcion;
}
std::string Pocion::getGrado() {
    return grado;
}

void Pocion::setFuncion(std::string funcion) {
    this -> funcion = nfuncion;
}
void Pocion::setGrado(std::string grado) {
    this -> grado = ngrado;
}