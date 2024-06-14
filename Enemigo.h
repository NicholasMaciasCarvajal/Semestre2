#ifndef POO_ENEMIGO_H
#define POO_ENEMIGO_H

#include <iostream>
#include <string>

class Enemigo {
public:
    Enemigo();
    Enemigo(float vida, float nivel);

    virtual ~Enemigo();

    virtual void danorecibido();

    float getNivel();
    float getDano();

    void setNivel(float nivel);
    void setDano(float dano);

    float nivel;
    float dano;
    float nnivel;
    float ndano;
};


#endif //POO_ENEMIGO_H
