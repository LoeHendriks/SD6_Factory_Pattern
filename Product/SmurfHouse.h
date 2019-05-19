#ifndef SMURFHOUSE_H
#define SMURFHOUSE_H

#include "IHouse.h"

class SmurfHouse : public IHouse
{
public:
    SmurfHouse();
    void OpenDoor() override;
    void CloseDoor() override;
};

#endif