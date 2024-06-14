#ifndef POO_ORCO_H
#define POO_ORCO_H

#include "Enemigo.h"

class Orco : public Enemigo{
public:
    Orco(float tamano, const std::string &colorDePiel);

    ~Orco();

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


#endif //POO_ORCO_H
