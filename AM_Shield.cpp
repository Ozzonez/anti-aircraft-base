#include "AM_Shield.h"

AM_Shield::AM_Shield(int ammo, int t, int h, char p) : Gun(ammo, t, h, p){};

AM_Shield::askToShoot() {
    Gun::ammo_amount=Gun::ammo_amount-1;
    overheating_lvl=overheating_lvl+50;
}

AM_Shield::reload() {
    Gun::ammo_amount=5;
};
