#include <iostream>
#include <string>
//#include "Inventario.h"
#include "Mago.h"
#include "Guerrero.h"

int main() {
    Mago A;
    A.agregaritem("Comida");
    A.quitaritem("aña");
    A.quitaritem("Comida");
    A.mostraritem();
}

