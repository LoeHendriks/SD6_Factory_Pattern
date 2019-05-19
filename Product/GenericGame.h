#ifndef GENERICGAME_H
#define GENERICGAME_H

#include "IFactory.h"
#include "IPerson.h"
#include "IFood.h"
#include "IHouse.h"

class GenericGame{
public:
    GenericGame();
    ~GenericGame();
    void Run(IFactory* factory);

private:
    IFactory* mFactory;
    IPerson* mPerson;
    IFood* mFood;
    IHouse* mHouse;
    
    bool mInProgress;
    uint32_t mSteps;
    uint32_t mStepsTreshold;

};

#endif