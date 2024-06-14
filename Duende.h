#ifndef POO_DUENDE_H
#define POO_DUENDE_H

#include "Enemigo.h"

class Duende: public Enemigo{
public:
    Duende(float tamano, const std::string &colorDePiel);

    ~Duende();

    void danorecibido() override;

    std::string getColorDePiel() const;
    float getTamano();

    void setColorDePiel(std::string colorDePiel);
    void setTamano(float Tamano);

    float tamano;
    std::string colorDePiel;
    float ntamano;
    std::string ncolorDePiel;
};


#endif //POO_DUENDE_H
