#include "Recognition.h"


int Recognition::DangerRecognition(int weapon, int size, char direction, int manned, Manager* M, int distance)
{
    int threat_lvl=0, type, temp=0;



    if(size==0)
    {
        if(weapon==0)
        {
            if(manned==0)
            {
                cout << "Detected small, unarmed drone";
                threat_lvl = 0;
            }
            else
            {
                cout<<"Detected small, unarmed airplane";
                threat_lvl=1;
            }

        }
        else if(weapon==1)
        {
            if(manned==0)
            {
                cout << "Detected small, armed drone";
                threat_lvl = 3;
            }
            else
            {
                cout<<"Detected small, armed aircraft";
                threat_lvl=4;
            }
        }
    }
    else if(size==1)
    {
        if(weapon==0)
        {
            if(manned==0)
            {
                cout << "Detected missile";
                threat_lvl = 10;
            }
            else
            {
                cout<<"Detected big, commercial airplane";
                threat_lvl=5;
            }

        }
        else if(weapon==1)
        {
            if(manned==0)
            {
                cout << "Detected missile";
                threat_lvl = 10;
            }
            else
            {
                cout<<"Detected heavy bomber";
                threat_lvl=6;
            }
        }
    }

    if(threat_lvl==0||threat_lvl==3)
        type=1;
    else if(threat_lvl==1||threat_lvl==4||threat_lvl==5)
        type=2;
    else if(threat_lvl==10||threat_lvl==6)
        type=3;



    if((threat_lvl==10&&distance>1)||(threat_lvl==6&&distance>5)||((threat_lvl==3||threat_lvl==4)&&distance>9)||((threat_lvl==0||threat_lvl==5||threat_lvl==1)&&distance>16))
    {
        for (int i = 0; i < M->getSize(); i++) {
            if (direction == M->getGun(i)->getPosition() && M->getGun(i)->getFunctioning() == 1 && M->getGun(i)->getType() == type) {
                M->getGun(i)->askToShoot();
                if(M->getGun(i)->getType()==1)
                    cout<<endl<<"Firing AA 35mm gun";
                if(M->getGun(i)->getType()==2)
                    cout<<endl<<"Firing AA 80mm gun";
                if(M->getGun(i)->getType()==3)
                    cout<<endl<<"Launching missile from AM Shield";
                temp = 1;
            }


        }

        if (temp == 0) {
            cout<<"CRITICAL ERROR - NO ACTIVE GUNS DETECTED IN THIS AREA - EVACUATE THE BASE";
            return 0;
        }
    }



    if(temp==1)
        return 4;
}
