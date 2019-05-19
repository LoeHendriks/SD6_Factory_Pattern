#include "SmurfHouse.h"

#include <iostream>

SmurfHouse::SmurfHouse()
{
    std::cout << "SmurfHouse: Created" << std::endl;
}

void SmurfHouse::OpenDoor()
{
    std::cout << "SmurfHouse: Opened Door" << std::endl;
}

void SmurfHouse::CloseDoor()
{
    std::cout << "SmurfHouse: Closed Door" << std::endl;
}