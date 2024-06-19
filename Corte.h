#ifndef POO_CORTE_H
#define POO_CORTE_H

#include "Ataques.h"

class Corte : public Ataques{
public:
    Corte();
    Corte(float dano, bool danoarea);

    ~Corte();

    void usar() override;

    bool getDanoarea();
    float getDano();

    void setDanoarea(bool danoarea);
    void setDano(float dano);

    bool danoarea;
    bool ndanoarea;
    float dano;
    float ndano;
};

#endif //POO_CORTE_H
