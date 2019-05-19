#ifndef SMURFPIE_H
#define SMURFPIE_H

#include "IFood.h"

class SmurfPie : public IFood
{
public:
    SmurfPie();
    void Eat() override;
};

#endif