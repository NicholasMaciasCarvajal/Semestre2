#ifndef POLIMORFISMOZOO_GATO_H
#define POLIMORFISMOZOO_GATO_H

#include "Animal.h"

class Gato : public Animal {
public:
    Gato();
    Gato(const Gato &rhs);
    Gato(const std::string &nombrecientifico, const std::string &conducta);

    virtual ~Gato();

    void makeSound() override;

    std::string nombrecientifico;
    std::string conducta;
};


#endif //POLIMORFISMOZOO_GATO_H
