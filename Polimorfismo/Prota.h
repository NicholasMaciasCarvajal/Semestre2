#ifndef PROGRA2SMES_PROTA_H
#define PROGRA2SMES_PROTA_H

#include "Persona.h"
#include "Powerup.h"
#include "Magia.h"

class Prota : public Persona, public Powerup, public Magia{
public:
    Prota();
    Prota(const Prota &rhs);
    Prota(const std::string &nombre, const std::string &genero, int edad, float peso, float altura, const std::string &guinazo, double aumentodestats, int powerup, const std::string &tipomagia, int cantidaddemana, const std::string &cantidaddehechizos);
    virtual ~Prota();

    Prota &operator= (const Prota &rhs);

private:

};


#endif //PROGRA2SMES_PROTA_H
