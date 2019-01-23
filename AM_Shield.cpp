#include "AM_Shield.h"

AM_Shield::AM_Shield(int ammo, int t, int h, char p) : Gun(ammo, t, h, p){};

void AM_Shield::askToShoot() {
    if(overheating_lvl<100) {
        ammo_amount = ammo_amount - 1;
        overheating_lvl = overheating_lvl + 50;
    }

    if(overheating_lvl>=100||ammo_amount==0)
        functioning=0;
}

void AM_Shield::reload() {
    Gun::ammo_amount=5;
};
