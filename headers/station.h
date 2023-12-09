#pragma once
#include <iostream>
#include "bus.h"
#include "passenger.h" 
#include <string.h>
#include "queues.h"
class station
{

private:
    Queue<Passenger> MixedPassengerQueue;
    Queue<BUS> WheelBusQueue;
    Queue<BUS> MixedBusQueue;
    Queue<Passenger> WheelPassengerQueue;
    Queue<Passenger> SpecialPassengerQueue;
    
public:
    station();
    void EnterPassengerQueue(const Passenger& passenger);
    void AddWheelChairQueue(const WBus& bus);
    void AddMixedChairQueue(const MBus& bus);
    void AssignPassengerToBus();

};

    



