#ifndef ANIT_AIRCRAFT_BASE_AM_SHIELD_H
#define ANIT_AIRCRAFT_BASE_AM_SHIELD_H
#include "Gun.h"

class AM_Shield: public Gun{

public:
    virtual void askToShoot();
    virtual void reload();
    AM_Shield(int, int, int, char);

};


#endif //ANIT_AIRCRAFT_BASE_AM_SHIELD_H
