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
    float getVida();

    void setNivel(float nivel);
    void setVida(float vida);

    float nivel;
    float vida;
    float nnivel;
    float nvida;
};


#endif //POO_ENEMIGO_H
