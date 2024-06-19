#ifndef POO_BOLADEFUEGO_H
#define POO_BOLADEFUEGO_H

#include "Ataques.h"

class BolaDeFuego : public Ataques{
public:
    BolaDeFuego();
    BolaDeFuego(float dano, bool danoarea);

    ~BolaDeFuego();

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


#endif //POO_BOLADEFUEGO_H
