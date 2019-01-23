#include "AA_35mm.h"


AA_35mm::AA_35mm(int ammo, int t, int h, char p) : Gun(ammo, t, h, p){};

void AA_35mm::askToShoot() {
    Gun::ammo_amount=Gun::ammo_amount-50;
    overheating_lvl=overheating_lvl+10;
}

void AA_35mm::reload() {
    Gun::ammo_amount=1000;
};
