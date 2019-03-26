#ifndef ANIT_AIRCRAFT_BASE_RADAR_H
#define ANIT_AIRCRAFT_BASE_RADAR_H

#include "Manager.h"

class Radar {

public:
    void Simulation(Manager*);

    /*
     *
     * bool isEnemyInRange();
     * Position getEnemyPosition();
     * float getEnemyDistance();
     *
     * if(enemy.isEnemyInRange())
     *  manager.shootMissile(enemy);
     *
     *
     */
};


#endif //ANIT_AIRCRAFT_BASE_RADAR_H
