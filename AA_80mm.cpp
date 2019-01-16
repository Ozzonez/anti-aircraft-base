#include "AA_80mm.h"

int AA_80mm::askToShoot(int t) {
    ammo_amount=ammo_amount-t*10;
    overheating_lvl=overheating_lvl+t*2;
}
