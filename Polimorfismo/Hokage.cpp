#include "Hokage.h"

Hokage::Hokage() : Sanin() {
    aldea = "";
    cantidadchakra = "";
    chakraespecial = "";
}

Hokage::Hokage(const Hokage &rhs) : Sanin() {
    aldea = rhs.aldea;
    cantidadchakra = rhs.cantidadchakra;
    chakraespecial = rhs.chakraespecial;
}

Hokage::Hokage(const std::string &nombre, const std::string &genero, int edad, float peso, float altura,
               const std::string &rango, const std::string &tipochakra, const std::string &especialidad,
               const std::string &tipoinvocacion, const std::string &tecnicaunica, const std::string &alumnos,
               const std::string &aldea, const std::string &cantidadchakra, const std::string &chakraespecial)
               : Sanin(nombre, genero, edad, peso, altura, rango, tipochakra, especialidad, tipoinvocacion, tecnicaunica, alumnos) {
    this -> aldea = aldea;
    this -> cantidadchakra = cantidadchakra;
    this -> chakraespecial = chakraespecial;
}

Hokage::~Hokage() {
}

Hokage &Hokage::operator=(const Hokage &rhs) {
    this -> aldea = rhs.aldea;
    this -> cantidadchakra = rhs.cantidadchakra;
    this -> chakraespecial = rhs.chakraespecial;
}

std::string Hokage::getAldea() const {
    return aldea;}
std::string Hokage::getCantidadchakra() const {
    return cantidadchakra;}
std::string Hokage::getChakraespecial() const {
    return chakraespecial;}

void Hokage::setAldea(std::string aldea) {
    this -> aldea = naldea;
}
void Hokage::setCantidadChakra(std::string cantidadchakra) {
    this -> cantidadchakra = ncantidadchakra;
}
void Hokage::setChakraespecial(std::string chakraespecial) {
    this -> chakraespecial = nchakraespecial;
}