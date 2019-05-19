#include "EvilMinion.h"

#include <iostream>

EvilMinion::EvilMinion()
{
    std::cout << "Smurf: Created" << std::endl;
}

void EvilMinion::Jump()
{
    std::cout << "Smurf: Jumped" << std::endl;
}

void EvilMinion::Walk()
{
    std::cout << "Smurf: Walked" << std::endl;
}