#include "PersonajeVJ.h"

PersonajeVJ::PersonajeVJ() {
}

PersonajeVJ::PersonajeVJ(const std::string &nombre, int nivel, float vida, float defensa){
    this -> nombre = nombre;
    this -> nivel = nivel;
    this -> vida = vida;
    this -> defensa = defensa;
}

PersonajeVJ::~PersonajeVJ() {
    std::cout << "Murio" << std::endl;
}

//---------------------------------------------------------

std::string PersonajeVJ::getNombre() const {
    return nombre;
}
int PersonajeVJ::getNivel() const {
    return nivel;
}
float PersonajeVJ::getVida() const {
    return vida;
}
float PersonajeVJ::getDefensa() const {
    return defensa;
}

//--------------------------------------------------------

void PersonajeVJ::setNombre(std::string nombre) {
    this -> nombre = nnombre;
}
void PersonajeVJ::setNivel(int nivel) {
    this -> nivel = nnivel;
}
void PersonajeVJ::setDefensa(float defensa) {
    this -> defensa = ndefensa;
}
void PersonajeVJ::setVida(float vida) {
    this -> vida = nvida;
}

//--------------------------------------------------------

void PersonajeVJ::ataque(){
    std::cout << "Ataque" << std::endl;
}

void PersonajeVJ::agregarAtaques(const Ataques &ataques) {
    listaDeAtaques.push_back(ataques);
}

void PersonajeVJ::mostrarAtaques() {
    for (const auto& ataque : listaDeAtaques) {
        std::cout << "Ataque: " << ataque.getNombrea() << std::endl;
    }
}