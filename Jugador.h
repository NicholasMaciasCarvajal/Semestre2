#ifndef PROYECTOPAR3_JUGADOR_H
#define PROYECTOPAR3_JUGADOR_H

#include "BoladeFuego.h"
#include "Curar.h"
#include "Personaje.h"
#include "Inventario.h"

class Jugador : public BoladeFuego, public Curar, public Personaje, public Inventario{
public:
    Jugador();
    Jugador(const std::string &nombre, int salud,int dano, int mana);
    ~Jugador();

    void usarItem(const std::string item);
    void mostrarInformacion() override;
    void agregarItem(const std::string& item) override;
    void eliminarItem(const std::string& item) override;
    void mostrarItems() override;
};


#endif //PROYECTOPAR3_JUGADOR_H
