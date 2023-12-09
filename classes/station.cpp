#include "headers/station.h"

station::station():MixedPassengerQueue(1000),WheelBusQueue(1000),MixedBusQueue(1000),WheelPassengerQueue(1000),SpecialPassengerQueue(1000){};

void station::EnterNormalBusQueue(const Passenger& passenger)
{
    if(passenger.getType()==PassengerType::NP)
    {
        MixedPassengerQueue.enqueue(passenger);
    }
};

void station::AddWheelBusQueue(const WBus& bus)
{
    WheelBusQueue.enqueue(bus);
};

void station::AddMixedBusQueue(const MBus& bus)
{
    MixedBusQueue.enqueue(bus);
};
void station::EnterSpecialPassengerQueue(const Passenger& passenger)
{
    if (passenger.getType()==PassengerType::Aged  || passenger.getType()==PassengerType::POD || passenger.getType()==PassengerType::Pregenant)
    {
        SpecialPassengerQueue.enqueue(passenger);
    }
}
void station::EnterWheelPassengerQueue(const Passenger& passenger)
{
    if (passenger.getType()==PassengerType::WP)
    {
        WheelPassengerQueue.enqueue(passenger);
    }
}
