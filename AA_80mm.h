#ifndef ANIT_AIRCRAFT_BASE_AA_80MM_H
#define ANIT_AIRCRAFT_BASE_AA_80MM_H
#include "Gun.h"


class AA_80mm: public Gun {
    char position; // N, E, W or S
    int overheating_lvl;
    int ammo_amount;
    bool functioning;
    int active_lock;
public:
    virtual void askToShoot();
    virtual void reload();
};


#endif //ANIT_AIRCRAFT_BASE_AA_80MM_H
