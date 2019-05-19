#ifndef IHOUSE_H
#define IHOUSE_H

class IHouse{
public:
    IHouse() {}
    virtual ~IHouse() {}
    virtual void OpenDoor() = 0;
    virtual void CloseDoor() = 0;
};

#endif