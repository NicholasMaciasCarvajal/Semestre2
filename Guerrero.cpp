#include "Guerrero.h"

Guerrero::Guerrero(const std::string &tipodeArma, const std::string &defensaAumentada) : PersonajeVJ() {
    this -> tipodeArma = tipodeArma;
    this -> defensaAumentada = defensaAumentada;
}

Guerrero::~Guerrero() {
    std::cout << "MurioAa" << std::endl;
}

void Guerrero::ataque() {

    std::cout << "Slash" << std::endl;
}
void Guerrero::agregaritem(const std::string &item) {
    std::cout << "El mago recogio " << item << std::endl;
    setItt(itt);
}
void Guerrero::quitaritem(const std::string &item) {
    std::cout << "El mago tiro " << item << std::endl;
}
void Guerrero::mostraritem() {
    Inventario::mostraritem();
}

//-----------------------------------------------------------------

std::string Guerrero::getTipodeArma() const {
    return tipodeArma;
}
std::string Guerrero::getDefensaAumentada() const {
    return defensaAumentada;
}

//-----------------------------------------------------------------

void Guerrero::setTipodeArma(std::string tipodeArma) {
    this -> tipodeArma = ntipodeArma;
}
void Guerrero::setDefensaAumentada(std::string DefensaAumentada) {
    this -> defensaAumentada = ndefensaAumentada;
}