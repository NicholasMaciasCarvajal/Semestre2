#include "Item.h"

Item::Item() {
}

Item::Item(const std::string &nombre, const std::string &tipo) {
    this->nombre = nombre;
    this->tipo = tipo;
}

Item::~Item() {
}

void Item::usarItem() {
}

std::string Item::getNombre() const {
    return nombre;
}

std::string Item::getTipo() const {
    return tipo;
}

void Item::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Item::setTipo(std::string tipo) {
    this->tipo = tipo;
}

bool Item::operator==(const Item& other) const {
    return nombre == other.nombre && tipo == other.tipo;
}

std::ostream& operator<<(std::ostream& os, const Item& item) {
    os << "Nombre: " << item.nombre << ", Tipo: " << item.tipo;
    return os;
}
