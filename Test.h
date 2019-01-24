#ifndef ANIT_AIRCRAFT_BASE_TEST_H
#define ANIT_AIRCRAFT_BASE_TEST_H
#include "Manager.h"
#include "Recognition.h"

class Test {
public:
    bool TestEmergencyShutdown(Manager*);
    bool TestRebooting(Manager*);
    bool TestDangerRecognition(Manager*);



};


#endif //ANIT_AIRCRAFT_BASE_TEST_H
