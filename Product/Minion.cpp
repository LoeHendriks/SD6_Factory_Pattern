#include <iostream>

#include "Minion.h"

Minion::Minion()
{
    std::cout << "Minion: Created" << std::endl;
}

void Minion::Jump()
{
    std::cout << "Minion: Jumped" << std::endl;
}

void Minion::Walk()
{
    std::cout << "Minion: Walked" << std::endl;
}