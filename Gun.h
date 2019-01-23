#ifndef ANIT_AIRCRAFT_BASE_GUN_H
#define ANIT_AIRCRAFT_BASE_GUN_H
class Gun
{
protected:
    char position; // N, E, W or S
    int overheating_lvl;
    int ammo_amount;
    int functioning;
    int type;
    int health;
public:
    virtual void askToShoot()=0;
    virtual void reload()=0;
    //virtual void coolDown()=0;
    char getPosition(); // returns position of a gun
    int getOverheating_lvl(); // returns level of overheating in percents
    int getAmmo_amount(); // returns amount of ammo left in a gun
    int getType(); // returns the type of the gun

    void setHealth(int);
    void setAmmo_amount(int);
    void setFunctioning(int);
    Gun(int, int, int, char);
};
#endif //ANIT_AIRCRAFT_BASE_GUN_H
