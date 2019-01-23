#include "Manager.h"
#include "AM_Shield.h"
#include "AA_35mm.h"
#include "AA_80mm.h"
#include "Gun.h"
#include <fstream>

void Manager::loadGuns() {
    int type;
    char position;
    fstream file;
    file.open("C:/Users/recon/OneDrive/Pulpit/anti-aircraft-base/anit-aircraft-base/guns.txt", ios::in);

    if(!file.good())
    {
        cout<<"Couldn't open the file!";
        exit(0);
    }

        while (!file.eof())
        {
            file>>type>>position;

            if(type==1)
            {
                Gun *g=new AA_35mm(1000, 1, 100, position);
                guns.push_back(g);
            }
            else if(type==2)
            {
                Gun *g=new AA_80mm(100, 2, 150, position);
                guns.push_back(g);
            }
            else if(type==3)
            {
                Gun *g=new AM_Shield(5, 3, 300, position);
                guns.push_back(g);
            }
        }
        file.close();


}

void Manager::writeGuns()  {
    cout << "Current anti-aircraft base status:"<<endl;
    for(int i=0;i<guns.size();i++)
    {
        cout <<i+1<<" ";
        if(guns[i]->getFunctioning() == 1)
            cout<<"Status: active  ";
        else
            cout<<"Status: disabled  ";

        if(guns[i]->getType()==1)
        {
            cout <<"AA 35mm gun";
            cout<<endl<<"Condition: "<<(guns[i]->getHealth()/100)*100<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()/1000)*100<<"%"<<endl;
        }
        else if(guns[i]->getType()==2)
        {
            cout<<"AA 80mm gun";
            cout<<endl<<"Condition: "<<(guns[i]->getHealth()/150)*100<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()/100)*100<<"%"<<endl;
        }
        else if(guns[i]->getType()==3)
        {
            cout <<"Anti-missile shield";
            cout<<endl<<"Condition: "<<(guns[i]->getHealth()/300)*100<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()/5)*100<<"%"<<endl;
        }

        cout<<"Facing direction: "<<guns[i]->getPosition()<<endl;
    }
}

int Manager::getSize()
{
    return guns.size();
}

Gun* Manager::getGun(int a)
{
    return guns[a];
}

Manager::~Manager()
{
    for (int i=0;i<guns.size();i++)
        delete guns[i];
}