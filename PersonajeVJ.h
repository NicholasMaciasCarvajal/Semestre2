#ifndef POO_PERSONAJEVJ_H
#define POO_PERSONAJEVJ_H

#include <string>
#include <iostream>

class PersonajeVJ {
public:
    PersonajeVJ();
    PersonajeVJ(const std::string &nombre, int nivel, float vida, float defensa);

    virtual ~PersonajeVJ();

    virtual void ataque();

    std::string getNombre() const;
    int getNivel() const;
    float getVida() const;
    float getDefensa() const;

    void setNombre(std::string nombre);
    void setNivel(int nivel);
    void setVida(float vida);
    void setDefensa(float defensa);

    std::string nombre;
    int nivel;
    float vida;
    float defensa;
    std::string nnombre;
    int nnivel;
    float nvida;
    float ndefensa;
};


#endif //POO_PERSONAJEVJ_H
