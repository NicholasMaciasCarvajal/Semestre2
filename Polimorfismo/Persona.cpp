#include "Persona.h"

Persona::Persona() {
    nombre = "";
    genero = "";
    edad = 0;
    peso = 0;
    altura = 0;
}

Persona::Persona(const Persona &rhs) {
    nombre = rhs.nombre;
    genero = rhs.genero;
    edad = rhs.edad;
    peso = rhs.peso;
    altura = rhs.altura;
}

Persona::Persona(const std::string &nombre, const std::string &genero, int edad, float peso, float altura) {
    this -> nombre = nombre;
    this -> genero = genero;
    this -> edad = edad;
    this -> peso = peso;
    this -> altura = altura;
}

Persona &Persona::operator=(const Persona &rhs) {
    this -> nombre = rhs.nombre;
    this -> genero = rhs.genero;
    this -> edad = rhs.edad;
    this -> peso = rhs.peso;
    this -> altura = rhs.altura;
}

std::string Persona::getNombre() const {
    return nombre;}
std::string Persona::getGenero() const {
    return genero;}
int Persona::getEdad() const {
    return edad;}
float Persona::getPeso() const {
    return peso;}
float Persona::getAltura() const {
    return altura;}

    void Persona::setNombre(std::string nombre) {
    this -> nombre = nnombre;
}
void Persona::setGenero(std::string genero) {
    this -> genero = ngenero;
}
void Persona::setEdad(int edad) {
    this -> edad = nedad;
}
void Persona::setPeso(float peso) {
    this -> peso = npeso;
}
void Persona::setAltura(float altura) {
    this -> altura = naltura;
}
