#ifndef ANIT_AIRCRAFT_BASE_GUN_H
#define ANIT_AIRCRAFT_BASE_GUN_H
class Gun
{
    char position; // N, E, W or S
    int overheating_lvl;
    int ammo_amount;
    bool functioning;
    int type;
    int health;
public:
    virtual int askToShoot(int)=0;
    virtual void reload()=0;
    //virtual void coolDown()=0;
    char getPosition(); // returns position of a gun
    int getOverheating_lvl(); // returns level of overheating in percents
    double getAmmo_amount(); // returns amount of ammo left in a gun
    int getType(); // returns the type of the gun

    void setHealth(int); // sets health of the gun
    void setStatus(status); // sets the status of the reactor
    Reactor(int, double, int); // constructor

};
#endif //ANIT_AIRCRAFT_BASE_GUN_H
