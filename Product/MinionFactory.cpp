#include "MinionFactory.h"
#include "Minion.h"
#include "MinionHouse.h"
#include "Banana.h"

IPerson* MinionFactory::CreatePerson()
{
    return (new Minion());
}

IHouse* MinionFactory::CreateHouse()
{
    return (new MinionHouse());
}

IFood* MinionFactory::CreateFood()
{
    return (new Banana());
}

std::string MinionFactory::ReturnFactoryName()
{
    return this->mFactoryName;
}