#ifndef POO_CONFIGURACIONJUEGO_H
#define POO_CONFIGURACIONJUEGO_H

#include <iostream>
#include <string>

class ConfiguracionJuego {
public:
    ConfiguracionJuego(float resolucion, float volumen, float dificultad);
    ~ConfiguracionJuego();

    virtual void verconfig();
    virtual void cambiarconfig();

    float getResolucion();
    float getVolumen();
    float getDificultad();

    void setResolucion(float resolucion);
    void setVolumen(float volumen);
    void setDificultad(float dificultad);

private:
    float resolucion;
    float volumen;
    float dificultad;
    float nresolucion;
    float nvolumen;
    float ndificultad;
};


#endif //POO_CONFIGURACIONJUEGO_H
