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
    void agregarHabilidad(const std::string aHabilidad) override;
    void usarHabilidad(const std::string aHabilidad) override;
    void mostrarInformacion() override;
    void agregarItem(const Item& item) override;
    void eliminarItem(const Item& item) override;
    void mostrarItems() override;
};


#endif //PROYECTOPAR3_JUGADOR_H
