#include <iostream>
#include "Menu.h"
#include "Manager.h"

using namespace std;

void Menu::menu()
{
    {
        int c, n, p, a;
        Manager m;


        do {
            cout << "";
            cout << endl << "Options: " << endl;
            cout << " 1- add reactors" << endl;
            cout << " 2- write out all the reactors" << endl;
            cout << " 3- turn on the reactor" << endl;
            cout << " 4- test the temperature of the reactor" << endl;
            cout << " 5- check the total power of the power station" << endl;
            cout << " 6- check how long it will take to produce some amount of energy" << endl;
            cout << " 7- check the number of reactors" << endl;
            cout << " 8- test reading reactors' data from file" << endl;
            cout << " 9- test calculating the total power of the power station" << endl;
            cout << " 10- test calculating how long it will take to produce 1000 GJ of energy" << endl;
            cout << " 11- test checking the number of the reactors" << endl;
            cout << " 12- exit" << endl;
            cout << "Your choice: ";
            cin >> c;
            switch (c) {
                case 1: {
                    string file;
                    cout << "Type the name of the file containing the reactors' data: ";
                    cin >> file;
                    man.addReactors(file);
                    break;
                }
                case 2: {
                    man.writeReactors();
                    break;
                }
                case 3: {
                    do {
                        a = 0;
                        cout << "Type the ordinal number of the reactor you want to turn on: ";
                        cin >> n;
                        if (n >= 1 && n <= man.getSize())
                            break;
                        cout << "There is no such a reactor." << endl;
                    } while (a == 0);
                    gear.turnOnReactor(&man, n-1);
                    break;
                }
                case 4: {
                    do {
                        a = 0;
                        cout << "Type the ordinal number of the reactor you want to test: ";
                        cin >> n;
                        if (n >= 1 && n <= man.getSize())
                            break;
                        cout << "There is no such a reactor." << endl;
                    } while (a == 0);
                    sens.measureTemp(&man, n-1);
                    break;
                }
                case 5: {
                    man.calculatePower();
                    cout << "Total power of the power station amounts to: " << man.getTotalPower() << " MW" << endl;
                    break;
                }
                case 6: {
                    do {
                        a = 0;
                        cout << "Amount of energy [GJ]: ";
                        cin >> p;
                        if (p > 0)
                            break;
                        cout << "Incorrect data." << endl;
                    } while (a == 0);
                    cout << "It will take " << man.calculateTime(p) << " days." << endl;
                    break;
                }
                case 7: {
                    cout << "Number of reactors: " << man.getSize() << endl;
                    break;
                }
                case 8: {
                    Test tester;
                    tester.testAddingReactors(&man);
                    break;
                }
                case 9: {
                    Test tester;
                    tester.testPower(&man);
                    break;
                }
                case 10: {
                    Test tester;
                    tester.testTime(&man);
                    break;
                }
                case 11: {
                    Test tester;
                    tester.testSize(&man);
                    break;
                }
                case 12: {
                    exit(0);
                }
                default: {
                    cout << "There is no such a choice. ";
                    break;
                }
            }
        }
        while(c != 12);
}