#include "Gun.h"



Gun::Gun(int ammo, int t, int h, char p)
{
    overheating_lvl=0;
    functioning=1;
    ammo_amount=ammo;
    type=t;
    health=h;
    position=p;
}

char Gun::getPosition()
{
    return position;
}

int Gun::getOverheating_lvl()
{
    return overheating_lvl;
}

int Gun::getAmmo()
{
    return ammo_amount;
}1
{
    return type;
}

int Gun::getFunctioning()
{
    return functioning;
}


void Gun::setOverheating_lvl(int a) {
    overheating_lvl=a;
    if(ammo_amount>0&&overheating_lvl<100)
        functioning=1;
}

void Gun::setAmmo(int a) {
    ammo_amount=a;
}
