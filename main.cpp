#include <iostream>
#include "Jugador.h"
#include "Enemigo.h"
#include "BolaDeFuego.h"
#include "item.h"

int main() {
    auto* jugador = new Jugador("Jugador",100,10,100);
    auto* enemigo = new Enemigo("Enemigo",10,5,50);
    auto* habilidad = new BoladeFuego(10, 10);
    auto* objeto = new Item("Espada","Arma");
    jugador->agregarItem(*objeto);
    jugador->agregarHabilidad("Bola de fuego");
    jugador->usarHabilidad("Bola de fuego");
    jugador->mostrarInformacion();
    enemigo->mostrarInformacion();
    delete jugador;
    delete enemigo;
    delete habilidad;
    return 0;
}