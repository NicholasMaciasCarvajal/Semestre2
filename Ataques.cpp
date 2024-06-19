#include "Ataques.h"

Ataques::Ataques() {
}

Ataques::Ataques(const std::string &nombrea) {
    this -> nombrea = nombrea;
}

Ataques::~Ataques() {
    std::cout << "No pudo atacar" << std::endl;
}

void Ataques::usar() {
    std::cout << "Usa a " << std::endl;
}