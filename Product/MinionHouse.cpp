#include "MinionHouse.h"

#include <iostream>

MinionHouse::MinionHouse()
{
    std::cout << "MinionHouse: Created" << std::endl;
}

void MinionHouse::OpenDoor()
{
    std::cout << "MinionHouse: Opened Door" << std::endl;
}

void MinionHouse::CloseDoor()
{
    std::cout << "MinionHouse: Closed Door" << std::endl;
}