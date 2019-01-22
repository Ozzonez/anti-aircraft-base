#ifndef ANIT_AIRCRAFT_BASE_AA_80MM_H
#define ANIT_AIRCRAFT_BASE_AA_80MM_H
#include <iostream>
#include "Gun.h"

using namespace std;

class AA_80mm: public Gun {

public:

    virtual int askToShoot(int); //returns alert about overheating
    virtual void reload();

    //getter ammo amount is alerting about taken damage
};


#endif //ANIT_AIRCRAFT_BASE_AA_80MM_H
