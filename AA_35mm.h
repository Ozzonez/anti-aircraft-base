#ifndef ANIT_AIRCRAFT_BASE_AA_35MM_H
#define ANIT_AIRCRAFT_BASE_AA_35MM_H
#include "Gun.h"
#include <iostream>
using namespace std;

class AA_35mm: public Gun{
    char position; // N, E, W or S
    int overheating_lvl;
    int ammo_amount;
    bool functioning;
    int active_lock;
public:
    virtual void askToShoot();
    virtual void reload();
};


#endif //ANIT_AIRCRAFT_BASE_AA_35MM_H
