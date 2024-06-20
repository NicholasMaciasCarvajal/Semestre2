#ifndef PROYECTOPAR3_HABILIDAD_H
#define PROYECTOPAR3_HABILIDAD_H

#include <iostream>
#include <string>
#include <vector>

class Habilidad {
public:
    Habilidad();
    Habilidad(int costo);
    virtual ~Habilidad();

    virtual void usar();

    int getCosto();

    void setCosto(int costo);

    int costo;
    int ncosto;
};


#endif //PROYECTOPAR3_HABILIDAD_H
