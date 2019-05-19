#ifndef BRILSMURF_H
#define BRILSMURF_H

#include "IPerson.h"

class BrilSmurf : public IPerson
{
public:
    BrilSmurf();
    void Jump() override;
    void Walk() override;
};

#endif