#ifndef IFOOD_H
#define IFOOD_H

class IFood{
public:
    IFood() {}
    virtual ~IFood() {}
    virtual void Eat() = 0;
};

#endif