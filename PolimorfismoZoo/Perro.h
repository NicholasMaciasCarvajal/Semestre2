#ifndef POLIMORFISMOZOO_PERRO_H
#define POLIMORFISMOZOO_PERRO_H

#include <string>
#include <iostream>
#include "Animal.h"

class Perro : public Animal {
public:
    Perro();
    Perro(const Perro &rhs);
    Perro(const std::string &raza, const std::string &colordepelaje);

    virtual ~Perro();

    void makeSound() override;

    std::string raza;
    std::string colordepelaje;
};


#endif //POLIMORFISMOZOO_PERRO_H
