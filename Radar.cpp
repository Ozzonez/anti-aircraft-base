#include "Radar.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

Radar::Radar(Manager *M) {

    int weapon, size, manned, aggressive, direction;

    srand(static_cast<unsigned int>(time(nullptr)));

    weapon=rand()%2;
    size=rand()%2;
    manned=rand()%2;
    aggressive=rand()%2;
    direction=rand()%4;

    for(int i=0; i<20; i++)
    {
        
    }




}
