#ifndef PROGRA2SMES_PERSONA_H
#define PROGRA2SMES_PERSONA_H

#include <iostream>
#include <string>

class Persona {
public:
    Persona();
    Persona(const Persona &rhs);
    Persona(const std::string &nombre, const std::string &genero, int edad, float peso, float altura);

    Persona &operator= (const Persona &rhs);

    std::string getNombre() const;
    std::string getGenero() const;
    int getEdad() const;
    float getPeso() const;
    float getAltura() const;

    void setNombre(std::string nombre);
    void setGenero(std::string genero);
    void setEdad(int edad);
    void setPeso(float peso);
    void setAltura(float altura);

private:
    std::string nombre;
    std::string genero;
    int edad;
    float peso;
    float altura;
    std::string nnombre;
    std::string ngenero;
    int nedad;
    float npeso;
    float naltura;
};


#endif //PROGRA2SMES_PERSONA_H
