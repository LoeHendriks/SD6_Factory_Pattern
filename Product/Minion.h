#ifndef MINION_H
#define MINION_H

#include "IPerson.h"

class Minion : public IPerson
{
public:
    Minion();
    void Jump() override;
    void Walk() override;
};

#endif