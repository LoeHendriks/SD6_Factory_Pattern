#ifndef SMURF_H
#define SMURF_H

#include "IPerson.h"

class Smurf : public IPerson
{
public:
    Smurf();
    void Jump() override;
    void Walk() override;
};

#endif