#include "AA_80mm.h"

AA_80mm::AA_80mm(int ammo, int t, int h, char p) : Gun(ammo, t, h, p){};

void AA_80mm::askToShoot() {
    Gun::ammo_amount=Gun::ammo_amount-10;
    overheating_lvl=overheating_lvl+18;
}

void AA_80mm::reload() {
    Gun::ammo_amount=100;
};
