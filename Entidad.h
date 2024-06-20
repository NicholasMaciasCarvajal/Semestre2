#ifndef PROYECTOPAR3_ENTIDAD_H
#define PROYECTOPAR3_ENTIDAD_H

#include <iostream>
#include <string>
#include <vector>

class Entidad {
public:
    Entidad();
    Entidad(const std::string &nombre, int salud);
    virtual ~Entidad();

    virtual void mostrarInformacion();

    std::string getNombre() const;
    int getSalud();

    void setNombre(std::string nombre);
    void setSalud(int salud);

    std::string nombre;
    int salud;
    std::string nnombre;
    int nsalud;
};


#endif //PROYECTOPAR3_ENTIDAD_H
