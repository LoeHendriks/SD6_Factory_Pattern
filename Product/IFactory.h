#ifndef IFACTORY_H
#define IFACTORY_H

#include "IPerson.h"
#include "IHouse.h"
#include "IFood.h"

#include <string>

class IFactory{
public:
    virtual IPerson* CreatePerson() = 0;
    virtual IHouse* CreateHouse() = 0;
    virtual IFood* CreateFood() = 0;
    virtual std::string ReturnFactoryName() = 0;
};

#endif