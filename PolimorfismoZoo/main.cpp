#include <iostream>
#include <string>
#include "Foca.h"
#include "Perro.h"
#include "Gato.h"
#include "Coyote.h"
#include "Oso.h"
#include "Cabra.h"
#include "Ardilla.h"


int main() {
    std::string correo;

    /*
    Animal *Firulais = new Perro();
    Firulais->makeSound();

    Animal *Eddie = new Gato();
    Eddie->makeSound();

    Animal *Woso = new Oso();
    Woso->makeSound();

    Animal *Moca = new Foca();
    Moca->makeSound();

    Animal *Pachilla = new Ardilla();
    Pachilla->makeSound();

    Animal *Manda = new Cabra();
    Manda->makeSound();

    Animal *Mole = new Coyote();
    Mole->makeSound();

    delete Woso;
    */
    std::cin >> correo;
    if (correo == "ejemplo@gmail.com"){
        std::cout << "Correcto";
    } else {
        std::cout << "Incorrecto";
    }

    return 0;
}
