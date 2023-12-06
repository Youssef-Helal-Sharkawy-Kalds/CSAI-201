#pragma once
#include <iostream>
#include "bus.h"
#include "passenger.h" 
#include <queue>
#include <string.h>
using namespace std;
class station
{

private:

    queue<WBus> WheelChairQueue;
    queue<MBus> MixedBusQueue;
    queue<Passenger> PassengerQueue;
    
public:

    void EnterPassengerQueue(const Passenger& passenger);
    void AddWheelChairQueue(const WBus& bus);
    void AddMixedChairQueue(const MBus& bus);
    void AssignPassengerToBus();





};

    



