#include "Powerup.h"

Powerup::Powerup() {
    guionazo = "";
    tiempodepowerup = 0;
    aumentodestats = 0;
}

Powerup::Powerup(const Powerup &rhs) {
    guionazo = rhs.guionazo;
    tiempodepowerup = rhs.tiempodepowerup;
    aumentodestats = rhs.aumentodestats;
}

Powerup::Powerup(const std::string &guionazo, double aumentodestats, int powerup) {
    this -> guionazo = guionazo;
    this -> tiempodepowerup = tiempodepowerup;
    this -> aumentodestats = aumentodestats;
}

Powerup &Powerup::operator=(const Powerup &rhs) {
    this -> guionazo = rhs.guionazo;
    this -> tiempodepowerup = rhs.tiempodepowerup;
    this -> aumentodestats = rhs.aumentodestats;
}

std::string Powerup::getGuionazo() const {
    return guionazo;
}
double Powerup::getAumentodestats() const {
    return aumentodestats;
}
int Powerup::getTiempodepowerup() const {
    return tiempodepowerup;
}

void Powerup::setGuionazo(std::string guionazo) {
    this -> guionazo = nguionazo;
}
void Powerup::setTiempodepowerup(int powerup) {
    this -> tiempodepowerup = ntiempodepowerup;
}
void Powerup::setAumentodestats(double aumentodestats) {
    this -> aumentodestats = naumentodestats;
}