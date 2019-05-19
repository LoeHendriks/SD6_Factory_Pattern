#ifndef MINIONFACTORY_H
#define MINIONFACTORY_H

#include "IFactory.h"
#include <string>

class MinionFactory : public IFactory
{
public:
    IPerson* CreatePerson() override;
    IHouse* CreateHouse() override;
    IFood* CreateFood() override;
    
    std::string ReturnFactoryName() override;
private:
    std::string mFactoryName = "MinionFactory";
};

#endif