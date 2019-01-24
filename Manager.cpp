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
            cout<<endl<<"Overheating: "<<guns[i]->getOverheating_lvl()<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()*100/1000)<<"%"<<endl;
        }
        else if(guns[i]->getType()==2)
        {
            cout<<"AA 80mm gun";
            cout<<endl<<"Overheating: "<<guns[i]->getOverheating_lvl()<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()*100/100)<<"%"<<endl;
        }
        else if(guns[i]->getType()==3)
        {
            cout <<"Anti-missile shield";
            cout<<endl<<"Overheating: "<<guns[i]->getOverheating_lvl()<<"%"<<endl;
            cout<<"Ammunition: "<<(guns[i]->getAmmo()*100/5)<<"%"<<endl;
        }

        cout<<"Facing direction: "<<guns[i]->getPosition()<<endl;
    }
}

int Manager::checkIfWellProtected()
{
    int n1=0, n2=0, n3=0, s1=0, s2=0, s3=0, w1=0, w2=0, w3=0, e1=0, e2=0, e3=0;
    for(int i=0;i<guns.size();i++)
    {
        if(guns[i]->getType()==1)
        {
            if(guns[i]->getPosition()=='N')
                n1=1;
            if(guns[i]->getPosition()=='S')
                s1=1;
            if(guns[i]->getPosition()=='W')
                w1=1;
            if(guns[i]->getPosition()=='E')
                e1=1;

        }
        if(guns[i]->getType()==2)
        {
            if(guns[i]->getPosition()=='N')
                n2=1;
            if(guns[i]->getPosition()=='S')
                s2=1;
            if(guns[i]->getPosition()=='W')
                w2=1;
            if(guns[i]->getPosition()=='E')
                e2=1;

        }
        if(guns[i]->getType()==3)
        {
            if(guns[i]->getPosition()=='N')
                n3=1;
            if(guns[i]->getPosition()=='S')
                s3=1;
            if(guns[i]->getPosition()=='W')
                w3=1;
            if(guns[i]->getPosition()=='E')
                e3=1;

        }
    }
    if(n1==0)
        cout<<"Base lacks AA 35 mm gun on the northern side of the base"<<endl;
    if(n2==0)
        cout<<"Base lacks AA 80 mm gun on the northern side of the base"<<endl;
    if(n3==0)
        cout<<"Base lacks AM Shield on the northern side of the base"<<endl;
    if(s1==0)
        cout<<"Base lacks AA 35 mm gun on the southern side of the base"<<endl;
    if(s2==0)
        cout<<"Base lacks AA 80 mm gun on the southern side of the base"<<endl;
    if(s3==0)
        cout<<"Base lacks AM Shield on the southern side of the base"<<endl;
    if(e1==0)
        cout<<"Base lacks AA 35 mm gun on the eastern side of the base"<<endl;
    if(e2==0)
        cout<<"Base lacks AA 80 mm gun on the eastern side of the base"<<endl;
    if(e3==0)
        cout<<"Base lacks AM Shield on the eastern side of the base"<<endl;
    if(w1==0)
        cout<<"Base lacks AA 35 mm gun on the western side of the base"<<endl;
    if(w2==0)
        cout<<"Base lacks AA 80 mm gun on the western side of the base"<<endl;
    if(w3==0)
        cout<<"Base lacks AM Shield on the western side of the base"<<endl;

    if(n1+n2+n3+s1+s2+s3+e1+e2+e3+w1+w2+w3==12)
    {
        cout<<"Base is well protected"<<endl;
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

