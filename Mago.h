#ifndef POO_MAGO_H
#define POO_MAGO_H

#include "PersonajeVJ.h"
#include "Inventario.h"
#include "BolaDeFuego.h"

class Mago:public PersonajeVJ,public Inventario , public BolaDeFuego{
public:
    Mago();
    Mago(const std::string &cantidadMana, const std::string &tipoDeMagia);

    ~Mago();

    void ataque() override;
    void usar() override;
    void agregaritem(const std::string& item) override;
    void quitaritem(const std::string& item) override;
    void mostraritem() override;
    void anadirObjeto(std::unique_ptr<Item> item) override;

    std::string getCantidadMana() const;
    std::string getTipoDeMagia() const;

    void setCantidadMana(std::string cantidadMana);
    void setTipoDeMagia(std::string tipoDeMagia);

    std::string cantidadMana;
    std::string tipoDeMagia;
    std::string ncantidadMana;
    std::string ntipoDeMagia;
};


#endif //POO_MAGO_H
