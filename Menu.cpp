#include <iostream>
#include "Menu.h"
#include "Manager.h"
#include "Radar.h"
#include "Recognition.h"
#include "Test.h"

using namespace std;

void Menu::menu()
{
    int a;
    Manager M;
    Radar R;
    Test T;
while(1)
{
    cout<<"   Anti-aircraft system menu   "<<endl<<endl;
    cout << " 1 - load guns from txt file" << endl;
    cout << " 2 - show current state of arms" << endl;
    cout << " 3 - reload all guns" << endl;
    cout << " 4 - initiate cooldown" << endl;
    cout << " 5 - start simulation" << endl;
    cout << " 6 - check if base is well protected " << endl;
    cout << " 7 - Test emergency shutdown " << endl;
    cout << " 8 - Test rebooting" << endl;
    cout << " 9 - Test Danger recognition system" << endl;
    cout << " 10 - exit " << endl;
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
        case 6: {
            M.checkIfWellProtected();
            break;
        }
        case 7: {
            T.TestEmergencyShutdown(&M);
            break;
        }
        case 8: {
            T.TestRebooting(&M);
            break;
        }
        case 9: {
            T.TestDangerRecognition(&M);
            break;
        }
        case 10: {
            exit(0);
            break;
        }
        default: {
            cout << "Incorrect number" << endl;
            break;
        }
    }
}

}