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
    std::vector<std::string> inventario;
    Item item1;
    std::vector<std::unique_ptr<Item>> objetos;

public:
    virtual void anadirObjeto(std::unique_ptr<Item> item);

    std::string itt;

    Inventario();

    virtual ~Inventario();

    virtual void agregarItem(const std::string& item);
    virtual void quitarItem(const std::string& item);
    virtual void mostrarItem();

    std::string getItt() const;
    void setItt(std::string itt);

};


#endif //PROYECTOPAR3_INVENTARIO_H
