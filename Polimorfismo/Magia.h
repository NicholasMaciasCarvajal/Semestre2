#ifndef PROGRA2SMES_MAGIA_H
#define PROGRA2SMES_MAGIA_H

#include <iostream>
#include <string>

class Magia {
public:
    Magia();
    Magia(const Magia &rhs);
    Magia(const std::string &tipomagia, int cantidaddemana, const std::string &cantidaddehechizos);

    Magia &operator= (const Magia &rhs);

    std::string getTipomagia() const;
    int getCantidaddemana() const;
    std::string getCantidaddehechizos() const;

    void setTipomagia(std::string tipomagia);
    void setCantidaddemana(int cantidaddemana);
    void setCantidaddehechizos(std::string cantidaddehechizos);

private:
    std::string tipomagia;
    int cantidaddemana;
    std::string cantidaddehechizos;
    std::string ntipomagia;
    int ncantidaddemana;
    std::string ncantidaddehechizos;
};


#endif //PROGRA2SMES_MAGIA_H
