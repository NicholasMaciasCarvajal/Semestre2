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
void Mago::usar() {

}

void Mago::ataque() {
    BolaDeFuego::usar();
}
void Mago::agregaritem(const std::string &item) {
    Inventario::agregaritem(item);
}
void Mago::quitaritem(const std::string &item) {
    Inventario::quitaritem(item);
}
void Mago::mostraritem() {
    Inventario::mostraritem();
}
void Mago::anadirObjeto(std::unique_ptr<Item> item) {
    Inventario::anadirObjeto(std::unique_ptr<Item> item);
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