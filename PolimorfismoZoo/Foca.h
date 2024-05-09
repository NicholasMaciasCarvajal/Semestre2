#ifndef POLIMORFISMOZOO_FOCA_H
#define POLIMORFISMOZOO_FOCA_H

#include "Animal.h"

class Foca : public Animal {
public:
    Foca();
    Foca(const Foca &rhs);
    Foca(const std::string &habitad, const std::string &velocidaddemovimiento);

    virtual ~Foca();

    void makeSound() override;

    std::string habitad;
    std::string velocidaddemovimiento;
};

#endif //POLIMORFISMOZOO_FOCA_H
