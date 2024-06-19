#ifndef POO_POCION_H
#define POO_POCION_H

#include "Item.h"

class Pocion : public Item{
public:
    Pocion();
    Pocion(const std::string &grado, const std::string &funcion);
    ~Pocion();

    void usar() override;

    std::string getGrado();
    std::string getFuncion();

    void setGrado(std::string grado);
    void setFuncion(std::string funcion);

    std::string grado;
    std::string funcion;
    std::string ngrado;
    std::string nfuncion;
};


#endif //POO_POCION_H
