#include "SmurfFactory.h"
#include "Smurf.h"
#include "SmurfHouse.h"
#include "SmurfPie.h"

IPerson* SmurfFactory::CreatePerson()
{
    return (new Smurf());
}

IHouse* SmurfFactory::CreateHouse()
{
    return (new SmurfHouse());
}

IFood* SmurfFactory::CreateFood()
{
    return (new SmurfPie());
}

std::string SmurfFactory::ReturnFactoryName()
{
    return this->mFactoryName;
}