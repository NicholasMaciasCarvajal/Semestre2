#include "Prota.h"

Prota::Prota() : Persona(), Magia(), Powerup() {}

Prota::Prota(const Prota &rhs) : Persona(), Magia(), Powerup() {}

Prota::Prota(const std::string &nombre, const std::string &genero, int edad, float peso, float altura,
             const std::string &guinazo, double aumentodestats, int powerup, const std::string &tipomagia,
             int cantidaddemana, const std::string &cantidaddehechizos)
             : Persona(nombre, genero, edad, peso, altura), Magia(tipomagia, cantidaddemana, cantidaddehechizos),
             Powerup(guinazo, aumentodestats, powerup){}
Prota::~Prota() {}

Prota &Prota::operator=(const Prota &rhs) {}
