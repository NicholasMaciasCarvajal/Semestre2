#ifndef PROYECTOPAR3_CURAR_H
#define PROYECTOPAR3_CURAR_H

#include "Habilidad.h"

class Curar : public Habilidad{
public:
    Curar();
    Curar(int sres);
    ~Curar();

    void usarHabilidad(const std::string aHabilidad) override;

    int getSres();

    void setSres(int sres);

    int sres;
    int nsres;
};


#endif //PROYECTOPAR3_CURAR_H
