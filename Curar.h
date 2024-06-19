#ifndef POO_CURAR_H
#define POO_CURAR_H

#include "Ataques.h"

class Curar : public Ataques{
public:
    Curar();
    Curar(float saludres, bool saludarea);

    ~Curar();

    void usar() override;

    bool getSaludarea();
    float getSaludres();

    void setSaludarea(bool saludarea);
    void setSaludres(float saludres);

    bool saludarea;
    bool nsaludarea;
    float saludres;
    float nsaludres;
};


#endif //POO_CURAR_H
