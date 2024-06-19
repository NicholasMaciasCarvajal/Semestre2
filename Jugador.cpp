#include "Jugador.h"

Jugador::Jugador() {
}

void Jugador::agregarItem(const std::string &item) {
    Inventario::agregarItem(item);
}
void Jugador::quitarItem(const std::string &item) {
    Inventario::quitarItem(item);
}
void Jugador::mostrarItem() {
    Inventario::mostrarItem();
}
void Jugador::mostrarInformacion() {
    std::cout << "El nombre del Jugador es: " << nombre << std::endl;
    std::cout << "La salud del Jugador es: " << salud << std::endl;
    std::cout << "El daño del Jugador es: " << " " << std::endl;
    std::cout << "El mana del Jugador es: " << mana << std::endl;
}