#include "Sanin.h"

Sanin::Sanin() : Ninja() {
    tipoinvocacion = "";
    tecnicaunica = "";
    alumnos = "";
}

Sanin::Sanin(const Sanin &rhs) : Ninja() {
    tipoinvocacion = rhs.tipoinvocacion;
    tecnicaunica = rhs.tecnicaunica;
    alumnos = rhs.tecnicaunica;
}

Sanin::Sanin(const std::string &nombre, const std::string &genero, int edad, float peso, float altura,
             const std::string &rango, const std::string &tipochakra, const std::string &especialidad,
             const std::string &tipoinvocacion, const std::string &tecnicaunica, const std::string &alumnos)
             : Ninja(nombre, genero, edad, peso, altura, rango, tipochakra, especialidad) {
    this -> tipoinvocacion = tipoinvocacion;
    this -> tecnicaunica = tecnicaunica;
    this -> alumnos = alumnos;
}

Sanin::~Sanin(){
}

Sanin &Sanin::operator=(const Sanin &rhs) {
    this -> tipoinvocacion = rhs.tipoinvocacion;
    this -> tecnicaunica = rhs.tecnicaunica;
    this -> alumnos = rhs.alumnos;
}

std::string Sanin::getTipoinvocacion() const {
    return tipoinvocacion;}
std::string Sanin::getTecnicaunica() const {
    return tecnicaunica;}
std::string Sanin::getAlumnos() const {
    return alumnos;}

void Sanin::setTipoinvocacion(std::string tipoinvocacion) {
    this -> tipoinvocacion = ntipoinvocacion;
}
void Sanin::setTecnicaunica(std::string tecnicaunica) {
    this -> tecnicaunica = ntecnicaunica;
}
void Sanin::setAlumnos(std::string alumnos) {
    this -> alumnos = nalumnos;
}