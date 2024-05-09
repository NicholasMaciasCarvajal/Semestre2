#ifndef POLIMORFISMOZOO_ANIMAL_H
#define POLIMORFISMOZOO_ANIMAL_H

#include <string>
#include <iostream>

class Animal {
public:
    Animal();
    Animal(const Animal &rhs);
    Animal(const std::string &nombre, const std::string &sonido, float peso, float tamano);

    virtual ~Animal();

    virtual void makeSound();

    std::string nombre;
    std::string sonido;
    float peso;
    float tamano;
};


#endif //POLIMORFISMOZOO_ANIMAL_H