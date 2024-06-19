#include "Entidad.h"

Entidad::Entidad() {
    this -> nombre = "N/A";
    this -> salud = 0;
}

Entidad::Entidad(const std::string &nombre, int salud) {
    this -> nombre = nombre;
    this -> salud = salud;
}

Entidad::~Entidad() {
}

void Entidad::mostrarInformacion() {
}

//__________________________________________________//

std::string Entidad::getNombre() const {
    return nombre;
}
int Entidad::getSalud() {
    return salud;
}

//__________________________________________________//

void Entidad::setNombre(std::string nombre) {
    this -> nombre = nnombre;
}
void Entidad::setSalud(int salud) {
    this -> salud = salud;
}