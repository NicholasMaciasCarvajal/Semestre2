#ifndef PROGRA2SMES_NINJA_H
#define PROGRA2SMES_NINJA_H

#include "Persona.h"

class Ninja : public Persona{
public:
    Ninja();
    Ninja(const Ninja &rhs);
    Ninja(const std::string &nombre, const std::string &genero, int edad, float peso, float altura, const std::string &rango, const std::string &tipochakra, const std::string &especialidad);
    virtual ~Ninja();

    Ninja &operator= (const Ninja &rhs);

    std::string getRango() const;
    std::string getTipochakra() const;
    std::string getEspecialidad() const;

    void setRango(std::string rango);
    void setTipochakra(std::string tipochakra);
    void setEspecialidad(std::string especialidad);

private:
    std::string rango;
    std::string tipochakra;
    std::string especialidad;
    std::string nrango;
    std::string ntipochakra;
    std::string nespecialidad;
};


#endif //PROGRA2SMES_NINJA_H
