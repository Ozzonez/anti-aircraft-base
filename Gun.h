#ifndef ANIT_AIRCRAFT_BASE_GUN_H
#define ANIT_AIRCRAFT_BASE_GUN_H
class Gun
{
public:
    virtual void askToShoot()=0;
    virtual void reload()=0;
    virtual void takeDmg()=0;
};
#endif //ANIT_AIRCRAFT_BASE_GUN_H
