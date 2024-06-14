#ifndef POO_GUERRERO_H
#define POO_GUERRERO_H

#include "PersonajeVJ.h"
#include "Inventario.h"

class Guerrero:public PersonajeVJ,public Inventario{
public:
    Guerrero(const std::string &tipodeArma, const std::string &defensaAumentada);

    ~Guerrero();

    void ataque() override;
    void agregaritem(const std::string& item) override;
    void quitaritem(const std::string& item) override;
    void mostraritem() override;


    std::string getTipodeArma() const;
    std::string getDefensaAumentada() const;

    void setTipodeArma(std::string tipodeArma);
    void setDefensaAumentada(std::string DefensaAumentada);

    std::string tipodeArma;
    std::string defensaAumentada;
    std::string ntipodeArma;
    std::string ndefensaAumentada;
};


#endif //POO_GUERRERO_H
