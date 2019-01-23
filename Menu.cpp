#include <iostream>
#include "Menu.h"
#include "Manager.h"
#include "Radar.h"
#include "Recognition.h"

using namespace std;

void Menu::menu()
{
    int a;
    Manager M;
    Radar R;
while(a!=9)
{
    cout<<"   Anti-aircraft system menu   "<<endl<<endl;
    cout << " 1 - load guns from txt file" << endl;
    cout << " 2 - show current state of arms" << endl;
    cout << " 3 - reload all guns" << endl;
    cout << " 4 - initiate cooldown" << endl;
    cout << " 5 - start simulation" << endl;
    cin >> a;
    switch (a) {
        case 1: {
            M.loadGuns();
            break;
        }
        case 2: {
            M.writeGuns();
            break;
        }
        case 3: {
            for(int i=0;i<M.getSize();i++)
            {
                M.getGun(i)->reload();
            }
            break;
        }
        case 4: {
            for(int i=0;i<M.getSize();i++)
            {
                M.getGun(i)->setOverheating_lvl(0);
            }
            break;
        }
        case 5: {
            R.Simulation(&M);
            break;
        }
        default: {
            cout << "";
            break;
        }
    }
}

}