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
    char getPosition();
    int getOverheating_lvl();
    int getAmmo();
    int getType();
    int getFunctioning();
    int getHealth();

    void setHealth(int);
    void setAmmo_amount(int);
    void setFunctioning(int);
    Gun(int, int, int, char);
};
#endif //ANIT_AIRCRAFT_BASE_GUN_H
