#ifndef IPERSON_H
#define IPERSON_H

class IPerson{
public:
    IPerson() {}
    virtual ~IPerson() {}
    virtual void Jump() = 0;
    virtual void Walk() = 0;
};

#endif