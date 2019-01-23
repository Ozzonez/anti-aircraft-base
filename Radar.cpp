#include "Radar.h"
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <unistd.h>
#include "Recognition.h"

void Radar::Simulation(Manager *M) {

    char d;
    int weapon, size, manned, aggressive, direction, h=0;
    Recognition R;
    srand(static_cast<unsigned int>(time(nullptr)));

    weapon=rand()%2;
    size=rand()%2;
    manned=rand()%2;
    aggressive=rand()%2;
    direction=rand()%4;

    if(direction==0)
        d='N';
    if(direction==1)
        d='S';
    if(direction==2)
        d='W';
    if(direction==3)
        d='E';

    for(int i=0; i<20; i++)
    {
        h=R.DangerRecognition(weapon, size, d, manned, M, i);


        if(aggressive==0&&i==8&&manned==0&&weapon==0)
        {
            cout<<endl<<" Flying object has turned back"<<endl;
            break;
        }

        cout<<" Distance: "<<(20-i)*100<<" meters";
        cout<<endl;
        if(h==4)
        {
            cout<<endl<<"object destroyed"<<endl;
            break;
        }

        sleep(1);
    }




}
