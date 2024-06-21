#ifndef PROYECTOPAR3_ITEM_H
#define PROYECTOPAR3_ITEM_H

#include <iostream>
#include <string>

class Item {
public:
    Item();
    Item(const std::string &nombre, const std::string &tipo);
    ~Item();

    virtual void usarItem();

    std::string getNombre() const;
    std::string getTipo() const;

    void setNombre(std::string nombre);
    void setTipo(std::string tipo);

    bool operator==(const Item& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Item& item);

private:
    std::string nombre;
    std::string tipo;
};

#endif //PROYECTOPAR3_ITEM_H
