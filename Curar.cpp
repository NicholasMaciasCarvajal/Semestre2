#include "Curar.h"

Curar::Curar() {
}

Curar::Curar(float saludres, bool saludarea) : Ataques() {
    this -> saludarea = saludarea;
    this -> saludres = saludres;
}

Curar::~Curar() noexcept {
    std::cout << "a" << std::endl;
}

void Curar::usar() {
    std::cout << "Curar" << std::endl;
}

bool Curar::getSaludarea() {
    return saludarea;
}
float Curar::getSaludres() {
    return saludres;
}

void Curar::setSaludarea(bool saludarea) {
    this -> saludarea = nsaludarea;
}
void Curar::setSaludres(float saludres) {
    this -> saludres = nsaludres;
}