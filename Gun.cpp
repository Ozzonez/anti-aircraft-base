#include "Gun.h"

void Gun::setHealth(int a)
{
    health=a;
}

void Gun::setAmmo_amount(int a)
{
    ammo_amount=a;
}

void Gun::setFunctioning(int a)
{
    functioning=a;
}

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
}

int Gun::getType()
{
    return type;
}

int Gun::getFunctioning()
{
    return functioning;
}

int Gun::getHealth() {
    return health;
}
