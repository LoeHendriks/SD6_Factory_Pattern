#include "GenericGame.h"

#include <iostream>

GenericGame::GenericGame()
{
    this->mInProgress = false;
    this->mSteps = 0;
    this->mStepsTreshold = 5;
}

GenericGame::~GenericGame()
{
    delete mPerson;
    mPerson = NULL;
    delete mFactory;
    mFactory = NULL;
    delete mHouse;
    mHouse = NULL;
    delete mFood;
    mFood = NULL;
}

void GenericGame::Run(IFactory* factory)
{
    this->mInProgress = true;
    this->mFactory = factory;

    std::cout << "|-------------------------------------|" << std::endl;
    std::cout << "|           Starting Game             |" << std::endl;
    std::cout << "|-------------------------------------|" << std::endl;

    std::cout << std::endl;
    mPerson = factory->CreatePerson();
    mFood = factory->CreateFood();
    mHouse = factory->CreateHouse();

    while(mInProgress)
    {
        std::cout << std::endl;
        if(mSteps < mStepsTreshold)
        {
            mPerson->Walk();
            mSteps++;
            std::cout << "Steps Taken: " << mSteps << std::endl;
        }
        else{
            std::cout << "Game Finished" << std::endl;
            mPerson->Jump();
            mInProgress = false;
        }


        switch(mSteps)
        {
            case 2:
                mHouse->OpenDoor();
                mHouse->CloseDoor();
                break;
            case 3:
                mFood->Eat();
                break;
            case 4:
                mHouse->OpenDoor();
                mHouse->CloseDoor();
                break;
        }

    }
}