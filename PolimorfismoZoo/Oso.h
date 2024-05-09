#ifndef POLIMORFISMOZOO_OSO_H
#define POLIMORFISMOZOO_OSO_H

#include "Animal.h"

class Oso : public Animal{
public:
    Oso();
    Oso(const Oso &rhs);
    Oso(const std::string &temperamento, const std::string &habitad);

    virtual ~Oso();

    void makeSound() override;

    std::string temperamento;
    std::string habitad;
};


#endif //POLIMORFISMOZOO_OSO_H
