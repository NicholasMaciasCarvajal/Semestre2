#include "Item.h"

Item::Item() {
}
Item::Item(const std::string &nombre, const std::string &tipo) {
    this -> nombre = nombre;
    this -> tipo = tipo;
}
Item::~Item() {
}
void Item::usarItem() {
}

//__________________________________________________//

std::string Item::getNombre() const {
    return nombre;
}
std::string Item::getTipo() const {
    return tipo;
}

//__________________________________________________//

void Item::setNombre(std::string nombre) {
    this -> nombre = nnombre;
}
void Item::setTipo(std::string tipo) {
    this -> tipo = ntipo;
}