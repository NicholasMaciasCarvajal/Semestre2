#ifndef POO_ATAQUES_H
#define POO_ATAQUES_H

#include <iostream>
#include <string>
#include <vector>

class Ataques {
public:
    Ataques();
    Ataques(const std::string &nombrea);

    virtual ~Ataques();

    virtual void usar();

    std::string nombrea;
};


#endif //POO_ATAQUES_H
