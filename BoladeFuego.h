#ifndef PROYECTOPAR3_BOLADEFUEGO_H
#define PROYECTOPAR3_BOLADEFUEGO_H

#include "Habilidad.h"

class BoladeFuego : public Habilidad{
public:
    BoladeFuego();
    BoladeFuego(int costo, int dano);
    ~BoladeFuego();

    void usarHabilidad(const std::string aHabilidad) override;

    int getDano();

    void setDano(int dano);

    int dano;
    int ndano;
};


#endif //PROYECTOPAR3_BOLADEFUEGO_H
