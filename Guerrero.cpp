#include "Guerrero.h"
Guerrero::Guerrero() {
}

Guerrero::Guerrero(const std::string &tipodeArma, const std::string &defensaAumentada) : PersonajeVJ() {
    this -> tipodeArma = tipodeArma;
    this -> defensaAumentada = defensaAumentada;
}

Guerrero::~Guerrero() {
    std::cout << "MurioAa" << std::endl;
}

void Guerrero::ataque() {
    Corte::usar();
}
void Guerrero::agregaritem(const std::string &item) {
    Inventario::agregaritem(item);
}
void Guerrero::quitaritem(const std::string &item) {
    Inventario::quitaritem(item);
}
void Guerrero::mostraritem() {
    Inventario::mostraritem();
}
void Guerrero::usar() {
}
void Guerrero::anadirObjeto(std::unique_ptr<Item> item) {
    Inventario::anadirObjeto(std::move(item));
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

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

void Guerrero::agregarAtaques(const Ataques &ataques) {
    PersonajeVJ::agregarAtaques(ataques);
}
void Guerrero::mostrarAtaques() {
    PersonajeVJ::mostrarAtaques();
}