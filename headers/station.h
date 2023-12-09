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
    void EnterNormalBusQueue(const Passenger& passenger);
    void EnterWheelPassengerQueue(const Passenger& passenger);
    void EnterSpecialPassengerQueue(const Passenger& passenger);
    void AddWheelBusQueue(const WBus& bus);
    void AddMixedBusQueue(const MBus& bus);
    void AssignPassengerToBus();
    
};