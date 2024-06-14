#ifndef POO_ATAQUES_H
#define POO_ATAQUES_H

#include <iostream>
#include <string>
#include <vector>

class Ataques {
public:
    Ataques();
    Ataques(const std::string& nombre, float dano);

    virtual ~Ataques();

    virtual void formadeataque();

    std::string getNombre() const;
    float getDano();

    void setNombre(std::string nombre);
    void setDano(float dano);

    std::string nombre;
    float dano;
    std::string nnombre;
    float ndano;
};


#endif //POO_ATAQUES_H
