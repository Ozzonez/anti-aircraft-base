#include "AA_80mm.h"

AA_80mm::AA_80mm(int ammo, int t, int h, char p) : Gun(ammo, t, h, p){};

void AA_80mm::askToShoot() {
    if(overheating_lvl<100&&ammo_amount>0) {
        ammo_amount = ammo_amount - 10;
        overheating_lvl = overheating_lvl + 18;
    }

    if(overheating_lvl>=100||ammo_amount==0)
        functioning=0;

}

void AA_80mm::reload() {
    ammo_amount=100;
    if(ammo_amount>0&&overheating_lvl<100)
        functioning=1;
};
