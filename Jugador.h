#ifndef PROYECTOPAR3_JUGADOR_H
#define PROYECTOPAR3_JUGADOR_H

#include "BoladeFuego.h"
#include "Curar.h"
#include "Personaje.h"
#include "Inventario.h"

class Jugador : public BoladeFuego, public Curar, public Personaje, public Inventario{
public:
    Jugador();

    void mostrarInformacion() override;
    void agregarItem(const std::string& item) override;
    void quitarItem(const std::string& item) override;
    void mostrarItem();
};


#endif //PROYECTOPAR3_JUGADOR_H
