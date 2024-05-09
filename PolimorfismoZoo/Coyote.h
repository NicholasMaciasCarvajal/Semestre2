#ifndef POLIMORFISMOZOO_COYOTE_H
#define POLIMORFISMOZOO_COYOTE_H

#include "Animal.h"

class Coyote : public Animal {
public:
    Coyote();
    Coyote(const Coyote &rhs);
    Coyote(const std::string &caricatura, const std::string &habitad);

    virtual ~Coyote();

    void makeSound() override;

    std::string caricatura;
    std::string habitad;
};


#endif //POLIMORFISMOZOO_COYOTE_H
