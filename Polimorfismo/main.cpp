#include "Ninja.h"
#include "Prota.h"

int main() {
    Persona p1{};

    Persona p2("Nicholas","Hombre",18,104,185);

    Persona p3(p2);

    Ninja n1{};

    Ninja n2("Edagar","Hombre",17,60,1.80,"Novicio","Viento","Espionaje");

    Ninja n3(n2);

    Prota pr1{};

    Prota pr2("Alex","Cuestionable", 1000, 60, 1.75, "A", 2000, 23, "Agua", 10000000, "Muchos");

    Prota pr3(pr2);

    return 0;
}
