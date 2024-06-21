#ifndef PROYECTOPAR3_INVENTARIO_H
#define PROYECTOPAR3_INVENTARIO_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
#include "Item.h"

class Inventario {
private:
    std::vector<Item> inventario;
    Item item1;
    std::vector<std::unique_ptr<Item>> objetos;

public:
    virtual void anadirObjeto(std::unique_ptr<Item> item);

    std::string itt;

    Inventario();

    virtual ~Inventario();

    void usarItem(const std::string item);
    virtual void agregarItem(const Item& item);
    virtual void eliminarItem(const Item& item);
    virtual void mostrarItems();

    std::string getItt() const;
    void setItt(std::string itt);

};


#endif //PROYECTOPAR3_INVENTARIO_H
