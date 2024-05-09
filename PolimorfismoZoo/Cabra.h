#ifndef POLIMORFISMOZOO_CABRA_H
#define POLIMORFISMOZOO_CABRA_H

#include "Animal.h"

class Cabra : public Animal {
public:
    Cabra();
    Cabra(const Cabra &rhs);
    Cabra(const std::string &habitad, const std::string &tipodeleche);

    virtual ~Cabra();

    void makeSound() override;

    std::string habitad;
    std::string tipodeleche;
};



#endif //POLIMORFISMOZOO_CABRA_H
