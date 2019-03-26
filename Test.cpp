#include "Test.h"


bool Test::TestEmergencyShutdown(Manager *M) {
    M->getGun(1)->setAmmo(50);
    M->getGun(1)->askToShoot();

    if(M->getGun(1)->getFunctioning()==0)
    {
        cout<<"Test is correct"<<endl;
        return true;
    }
        cout<<"Test is incorrect"<<endl;
       return false;
}

bool Test::TestRebooting(Manager *M) {
    M->getGun(1)->setAmmo(50);
    M->getGun(1)->askToShoot();

        M->getGun(1)->reload();


    if(M->getGun(1)->getFunctioning()==1)
    {
        cout<<"Test is correct"<<endl;
        return true;
    }

    cout<<"Test is incorrect"<<endl;
    return false;
}

bool Test::TestDangerRecognition(Manager *M) {
    Recognition R;
    M->getGun(1)->reload();
    M->getGun(1)->setOverheating_lvl(0);
    R.DangerRecognition(0, 0, 'N', 0, M, 19);

    if(M->getGun(1)->getAmmo()==950)
    {
        cout<<endl<<"Test is correct"<<endl;
        return true;
    }

    cout<<endl<<"Test is incorrect"<<endl;
    return false;
}
