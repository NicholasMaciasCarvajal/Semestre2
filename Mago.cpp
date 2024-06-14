#include "Mago.h"
Mago::Mago() {
}

Mago::Mago(const std::string &cantidadMana, const std::string &tipoDeMagia) : PersonajeVJ() {
    this -> cantidadMana = cantidadMana;
    this -> tipoDeMagia = tipoDeMagia;
}

Mago::~Mago() {
    std::cout << "MurioA" << std::endl;
}

void Mago::ataque() {

    std::cout << "Fireball" << std::endl;
}
void Mago::agregaritem(const std::string &item) {
    std::cout << "El mago recogio " << item << std::endl;
    setItt(itt);
}
void Mago::quitaritem(const std::string &item) {
    std::cout << "El mago tiro " << item << std::endl;
}
void Mago::mostraritem() {
    Inventario::mostraritem();
}

//-----------------------------------------------------------------

std::string Mago::getCantidadMana() const {
    return cantidadMana;
}
std::string Mago::getTipoDeMagia() const {
    return tipoDeMagia;
}

//-----------------------------------------------------------------

void Mago::setCantidadMana(std::string cantidadMana) {
    this -> cantidadMana = ncantidadMana;
}
void Mago::setTipoDeMagia(std::string tipoDeMagia) {
    this -> tipoDeMagia = ntipoDeMagia;
}