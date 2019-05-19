#ifndef BANANA_H
#define BANANA_H

#include "IFood.h"

class Banana : public IFood{
public:
    Banana();
    void Eat() override;
};

#endif