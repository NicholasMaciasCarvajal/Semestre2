#include "Ninja.h"

Ninja::Ninja() : Persona() {
    rango = "";
    tipochakra = "";
    especialidad = "";
}

Ninja::Ninja(const Ninja &rhs) : Persona() {
    rango = rhs.rango;
    tipochakra = rhs.tipochakra;
    especialidad = rhs.especialidad;
}

Ninja::Ninja(const std::string &nombre, const std::string &genero, int edad, float peso, float altura,
             const std::string &rango, const std::string &tipochakra, const std::string &especialidad)
             :Persona(nombre, genero, edad, peso, altura){
    this -> rango = rango;
    this -> tipochakra = tipochakra;
    this -> especialidad = especialidad;
}

Ninja::~Ninja(){
}

Ninja &Ninja::operator=(const Ninja &rhs) {
    this -> rango = rhs.rango;
    this -> tipochakra = rhs.tipochakra;
    this -> especialidad = rhs.especialidad;
}

std::string Ninja::getRango() const {
    return rango;}
std::string Ninja::getEspecialidad() const {
    return especialidad;}
std::string Ninja::getTipochakra() const {
    return tipochakra;}

void Ninja::setRango(std::string rango) {
    this -> rango = nrango;
}
void Ninja::setTipochakra(std::string tipochakra) {
    this -> tipochakra = ntipochakra;
}
void Ninja::setEspecialidad(std::string especialidad) {
    this -> especialidad = nespecialidad;
}