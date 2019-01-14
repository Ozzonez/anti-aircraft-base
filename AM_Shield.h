#ifndef ANIT_AIRCRAFT_BASE_AM_SHIELD_H
#define ANIT_AIRCRAFT_BASE_AM_SHIELD_H
#include "Gun.h"

class AM_Shield: public Gun{
    int overheating_lvl;
    int ammo_amount;
    bool functioning;
    char position; // N, E, W or S
public:
    virtual void askToShoot();
    virtual void reload();
    virtual void takeDmg();

};


#endif //ANIT_AIRCRAFT_BASE_AM_SHIELD_H
