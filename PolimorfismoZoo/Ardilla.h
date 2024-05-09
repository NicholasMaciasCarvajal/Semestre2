#ifndef POLIMORFISMOZOO_ARDILLA_H
#define POLIMORFISMOZOO_ARDILLA_H

#include "Animal.h"

class Ardilla : public Animal {
public:
    Ardilla();
    Ardilla(const Ardilla &rhs);
    Ardilla(const std::string &habitad, const std::string &formadeheces);

    virtual ~Ardilla();

    void makeSound() override;

    std::string habitad;
    std::string formadeheces;
};


#endif //POLIMORFISMOZOO_ARDILLA_H
