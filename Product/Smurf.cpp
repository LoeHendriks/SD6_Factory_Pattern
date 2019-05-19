#include "Smurf.h"

#include <iostream>

Smurf::Smurf()
{
    std::cout << "Smurf: Created" << std::endl;
}

void Smurf::Jump()
{
    std::cout << "Smurf: Jumped" << std::endl;
}

void Smurf::Walk()
{
    std::cout << "Smurf: Walked" << std::endl;
}