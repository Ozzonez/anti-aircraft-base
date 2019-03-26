#ifndef ANIT_AIRCRAFT_BASE_AA_80MM_H
#define ANIT_AIRCRAFT_BASE_AA_80MM_H
#include <iostream>
#include "Gun.h"

using namespace std;

class AA_80mm: public Gun {

public:

    virtual void askToShoot();
    virtual void reload();
    AA_80mm(int, int, int, char);
};


#endif //ANIT_AIRCRAFT_BASE_AA_80MM_H
