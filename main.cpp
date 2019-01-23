#include <iostream>
#include "Manager.h"
#include "Radar.h"
using namespace std;
int main()
{
    Manager m;

    m.loadGuns();

    Radar R;

    R.Simulation(&m);

    m.writeGuns();
    return 0;

}