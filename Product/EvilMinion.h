#ifndef EVILMINION_H
#define EVILMINION_H

#include "IPerson.h"

class EvilMinion : public IPerson
{
public:
    EvilMinion();
    void Jump() override;
    void Walk() override;
};

#endif