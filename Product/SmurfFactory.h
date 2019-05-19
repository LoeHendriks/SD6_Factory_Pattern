#ifndef SMURFFACTORY_H
#define SMURFFACTORY_H

#include "IFactory.h"
#include <string>

class SmurfFactory : public IFactory
{
public:
    IPerson* CreatePerson();
    IHouse* CreateHouse();
    IFood* CreateFood();

    std::string ReturnFactoryName() override;
private:
    std::string mFactoryName = "SmurfFactory";
};

#endif
