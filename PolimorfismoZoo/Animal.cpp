#include "Animal.h"

Animal::Animal() {
    nombre = "";
    sonido = "";
    peso = 0.0f;
    tamano = 0.0f;
}

Animal::Animal(const Animal &rhs) {
    nombre = rhs.nombre;
    sonido = rhs.sonido;
    peso = rhs.peso;
    tamano = rhs.tamano;
}

Animal::Animal(const std::string &nombre, const std::string &sonido, float peso, float tamano) {
    this -> nombre = nombre;
    this -> sonido = sonido;
    this -> peso = peso;
    this -> tamano = tamano;
}

Animal::~Animal() {
    std::cout << "Se baneo de la vida" << std::endl;
}
void Animal::makeSound() {
    std::cout << "Animal sound" << std::endl;
}