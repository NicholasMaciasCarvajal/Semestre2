#ifndef PROGRA2SMES_HOKAGE_H
#define PROGRA2SMES_HOKAGE_H

#include "Sanin.h"

class Hokage : public Sanin{
public:
    Hokage();
    Hokage(const Hokage &rhs);
    Hokage(const std::string &nombre, const std::string &genero, int edad,
           float peso, float altura, const std::string &rango, const std::string &tipochakra,
           const std::string &especialidad, const std::string &tipoinvocacion, const std::string &tecnicaunica,
           const std::string &alumnos, const std::string &aldea, const std::string &cantidadchakra, const std::string &chakraespecial);
    virtual ~Hokage();

    Hokage &operator= (const Hokage &rhs);

    std::string getAldea() const;
    std::string getCantidadchakra() const;
    std::string getChakraespecial() const;

    void setAldea(std::string aldea);
    void setCantidadChakra(std::string cantidadchakra);
    void setChakraespecial(std::string chakraespecial);

private:
    std::string aldea;
    std::string cantidadchakra;
    std::string chakraespecial;
    std::string naldea;
    std::string ncantidadchakra;
    std::string nchakraespecial;
};


#endif //PROGRA2SMES_HOKAGE_H
