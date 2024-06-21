#include "Jugador.h"

Jugador::Jugador() {
}

Jugador::Jugador(const std::string &nombre, int salud, int dano, int mana) {
    this -> nombre = nombre;
    this -> salud = salud;
    this -> Personaje::dano = dano;
    this -> mana = mana;
}

Jugador::~Jugador() noexcept {
}

void Jugador::agregarItem(const Item& item) {
    Inventario::agregarItem(item);
}
void Jugador::eliminarItem(const Item& item) {
    Inventario::eliminarItem(item);
}
void Jugador::mostrarItems() {
    Inventario::mostrarItems();
}
void Jugador::mostrarInformacion() {
    std::cout << "El nombre del Jugador es: " << nombre << std::endl;
    std::cout << "La salud del Jugador es: " << salud << std::endl;
    std::cout << "El dano del Jugador es: " << Personaje::dano << std::endl;
    std::cout << "El mana del Jugador es: " << mana << std::endl;
    std::cout << "Los Items son: " << std::endl;
    Jugador::mostrarItems();
}
void Jugador::usarItem(const std::string item) {
    Inventario::usarItem(item);
}

void Jugador::agregarHabilidad(const std::string aHabilidad) {
    std::cout << "Se agrego la Habilidad: " << aHabilidad << std::endl;
}

void Jugador::usarHabilidad(const std::string aHabilidad) {
    std::cout << "Se uso la Habilidad: " << aHabilidad << std::endl;
}