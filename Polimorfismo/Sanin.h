#ifndef PROGRA2SMES_SANIN_H
#define PROGRA2SMES_SANIN_H

#include "Ninja.h"

class Sanin : public Ninja{
public:
    Sanin();
    Sanin(const Sanin &rhs);
    Sanin(const std::string &nombre, const std::string &genero, int edad, float peso, float altura, const std::string &rango, const std::string &tipochakra, const std::string &especialidad, const std::string &tipoinvocacion, const std::string &tecnicaunica, const std::string &alumnos);
    virtual ~Sanin();

    Sanin &operator= (const Sanin &rhs);

    std::string getTipoinvocacion() const;
    std::string getTecnicaunica() const;
    std::string getAlumnos() const;

    void setTipoinvocacion(std::string tipoinvocacion);
    void setTecnicaunica(std::string tecnicaunica);
    void setAlumnos(std::string alumnos);

private:
    std::string tipoinvocacion;
    std::string tecnicaunica;
    std::string alumnos;
    std::string ntipoinvocacion;
    std::string ntecnicaunica;
    std::string nalumnos;
};


#endif //PROGRA2SMES_SANIN_H
