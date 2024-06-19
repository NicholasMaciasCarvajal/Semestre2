#include <iostream>
#include <string>
#include "Mago.h"
#include "Guerrero.h"
#include "Orco.h"
#include "Inventario.h"

int main() {
    Guerrero B;
    B.agregaritem("Comida");
    B.mostraritem();
    B.ataque();
    std::unique_ptr<Item> Arco = std::make_unique<Arma>("Legendario","A distancia");
    B.anadirObjeto(std::move(Arco));
}