#include "Ataques.h"

Ataques::Ataques() {
}

std::string Ataques::getNombrea() const {
    return nombrea;
}

void Ataques::setNombrea(std::string nombrea) {
    this -> nombrea = nnombrea;
}

Ataques::~Ataques() {
    std::cout << "No pudo atacar" << std::endl;
}

void Ataques::usar() {
    std::cout << "Usa a " << std::endl;
}