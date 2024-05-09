#ifndef PROGRA2SMES_POWERUP_H
#define PROGRA2SMES_POWERUP_H

#include <iostream>
#include <string>

class Powerup {
public:
    Powerup();
    Powerup(const Powerup &rhs);
    Powerup(const std::string &guionazo, double aumentodestats, int powerup);

    Powerup &operator= (const Powerup &rhs);

    std::string getGuionazo() const;
    double getAumentodestats() const;
    int getTiempodepowerup() const;

    void setGuionazo(std::string guionazo);
    void setAumentodestats(double aumentodestats);
    void setTiempodepowerup(int powerup);

private:
    std::string guionazo;
    double aumentodestats;
    int tiempodepowerup;
    std::string nguionazo;
    double naumentodestats;
    int ntiempodepowerup;
};


#endif //PROGRA2SMES_POWERUP_H
