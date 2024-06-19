#ifndef POO_INVENTARIO_H
#define POO_INVENTARIO_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
#include "Pocion.h"
#include "Arma.h"

class Inventario {
private:
    std::vector<std::string> inventario;
    std::vector<std::unique_ptr<Item>> objetos;

public:
    virtual void anadirObjeto(std::unique_ptr<Item> item);

    std::string itt;

    Inventario();

    virtual ~Inventario();

    virtual void agregaritem(const std::string& item);
    virtual void quitaritem(const std::string& item);
    virtual void mostraritem();

    std::string getItt() const;
    void setItt(std::string itt);

};

#endif //POO_INVENTARIO_H
