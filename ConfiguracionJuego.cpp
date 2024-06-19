#include "ConfiguracionJuego.h"

ConfiguracionJuego::ConfiguracionJuego(float resolucion, float volumen, float dificultad) {
    this -> resolucion = resolucion;
    this -> volumen = volumen;
    this -> dificultad = dificultad;
}

ConfiguracionJuego::~ConfiguracionJuego() {
    std::cout << "aa" << std::endl;
}

void ConfiguracionJuego::verconfig() {
}

void ConfiguracionJuego::cambiarconfig() {
}

float ConfiguracionJuego::getDificultad() {
    return dificultad;
}
float ConfiguracionJuego::getResolucion() {
    return resolucion;
}
float ConfiguracionJuego::getVolumen() {
    return volumen;
}

void ConfiguracionJuego::setDificultad(float dificultad) {
    this -> dificultad = ndificultad;
}
void ConfiguracionJuego::setResolucion(float resolucion) {
    this -> resolucion = nresolucion;
}
void ConfiguracionJuego::setVolumen(float volumen) {
    this -> volumen = nvolumen;
}