#ifndef ANIT_AIRCRAFT_BASE_MANAGER_H
#define ANIT_AIRCRAFT_BASE_MANAGER_H
#include "Gun.h"
#include <vector>
#include <iostream>

using namespace std;

//class responsible for holding all anti-aircraft guns in vector
class Manager {
    vector<Gun*> guns;
public:
    Gun* getGun(int);
    void loadGuns();
    void writeGuns();
    int checkIfWellProtected();

    int getSize();


    ~Manager();
};


#endif //ANIT_AIRCRAFT_BASE_MANAGER_H
