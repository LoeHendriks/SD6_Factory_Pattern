#ifndef MINIONHOUSE_H
#define MINIONHOUSE_H

#include "IHouse.h"

class MinionHouse : public IHouse
{
public:
    MinionHouse();
    void OpenDoor() override;
    void CloseDoor() override;
};

#endif