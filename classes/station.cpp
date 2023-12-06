#include "headers/station.h"

void station::EnterPassengerQueue(const Passenger& passenger)
{
    PassengerQueue.push(passenger);

};

void station::AddWheelChairQueue(const WBus& bus)
{
    WheelChairBusQueue.push(bus);
    
};

void station::AddMixedChairQueue(const MBus& bus)
{
    MixedBusQueue.push(bus);
};




