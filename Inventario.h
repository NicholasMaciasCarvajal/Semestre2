#ifndef POO_INVENTARIO_H
#define POO_INVENTARIO_H

#include <iostream>
#include <string>
#include <vector>

class Inventario {
private:
    std::vector<std::string> inventario;

public:
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
