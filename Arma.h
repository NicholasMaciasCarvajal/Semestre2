#ifndef POO_ARMA_H
#define POO_ARMA_H

#include "Item.h"

class Arma : public Item{
public:
    Arma();
    Arma(const std::string &grado, const std::string &funcion);
    ~Arma();

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



#endif //POO_ARMA_H
