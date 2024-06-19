#ifndef POO_ATAQUES_H
#define POO_ATAQUES_H

#include <iostream>
#include <string>
#include <vector>

class Ataques {
public:
    Ataques();
    Ataques(const std::string &nombrea): nombrea(nombrea){}

    virtual ~Ataques();

    virtual void usar();

    std::string getNombrea() const;

    void setNombrea(std::string nombrea);

    std::string nombrea;
    std::string nnombrea;
};


#endif //POO_ATAQUES_H
