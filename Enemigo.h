#ifndef PROYECTOPAR3_ENEMIGO_H
#define PROYECTOPAR3_ENEMIGO_H

#include "Entidad.h"

class Enemigo : public Entidad{
public:
    Enemigo();
    Enemigo(const std::string &nombre, int salud, int dano, int armadura);
    ~Enemigo();

    void mostrarInformacion() override;

    int getDano();
    int getArmadura();

    void setDano(int dano);
    void setAtmadura(int armadura);

    int dano;
    int armadura;
    int ndano;
    int narmadura;
};


#endif //PROYECTOPAR3_ENEMIGO_H
