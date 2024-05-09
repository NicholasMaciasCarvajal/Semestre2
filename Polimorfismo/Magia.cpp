#include "Magia.h"

Magia::Magia() {
    tipomagia = "";
    cantidaddehechizos = "";
    cantidaddemana = 0;
}

Magia::Magia(const Magia &rhs) {
    tipomagia = rhs.tipomagia;
    cantidaddemana = rhs.cantidaddemana;
    cantidaddehechizos = rhs.cantidaddehechizos;
}

Magia::Magia(const std::string &tipomagia, int cantidaddemana, const std::string &cantidaddehechizos) {
    this -> tipomagia = tipomagia;
    this -> cantidaddehechizos = cantidaddehechizos;
    this -> cantidaddemana = cantidaddemana;
}

Magia &Magia::operator=(const Magia &rhs) {
    this -> tipomagia = rhs.tipomagia;
    this -> cantidaddemana = rhs.cantidaddemana;
    this -> cantidaddehechizos = rhs.cantidaddehechizos;
}

std::string Magia::getTipomagia() const {
    return tipomagia;
}
std::string Magia::getCantidaddehechizos() const {
    return cantidaddehechizos;
}
int Magia::getCantidaddemana() const {
    return cantidaddemana;
}

void Magia::setTipomagia(std::string tipomagia) {
    this -> tipomagia = ntipomagia;
}
void Magia::setCantidaddemana(int cantidaddemana) {
    this -> cantidaddemana = ncantidaddemana;
}
void Magia::setCantidaddehechizos(std::string cantidaddehechizos) {
    this -> cantidaddehechizos = ncantidaddehechizos;
}