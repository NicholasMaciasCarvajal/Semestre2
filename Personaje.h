#ifndef PROYECTOPAR3_PERSONAJE_H
#define PROYECTOPAR3_PERSONAJE_H

#include "Entidad.h"

class Personaje : public Entidad{
public:
    Personaje();
    Personaje(int dano, int mana);
    ~Personaje();

    void mostrarInformacion() override;

    int getDano();
    int getMana();

    void setDano(int dano);
    void setMana(int mana);

    int dano;
    int mana;
    int nmana;
    int ndano;
};


#endif //PROYECTOPAR3_PERSONAJE_H
