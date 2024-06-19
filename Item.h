#ifndef PROYECTOPAR3_ITEM_H
#define PROYECTOPAR3_ITEM_H

#include <iostream>
#include <string>
#include <vector>

class Item {
public:
    Item();
    Item(const std::string &nombre, const std::string &tipo);
    ~Item();

    virtual void usar();

    std::string getNombre() const;
    std::string getTipo() const;

    void setNombre(std::string nombre);
    void setTipo(std::string tipo);

private:
    std::string nombre;
    std::string tipo;
    std::string nnombre;
    std::string ntipo;
};


#endif //PROYECTOPAR3_ITEM_H
