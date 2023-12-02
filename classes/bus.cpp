#include "headers/bus.h"

// setters
void BUS::setMaintananceDuration(int maintananceDuration)
{
    maintanace_duration = maintananceDuration;
}
void BUS::setBusCapacity(int busCapacity)
{
    bus_capacity = busCapacity;
}
void BUS::setSecondsToRide(int secondsToRide)
{
    seconds_to_ride = secondsToRide;
}
void BUS::setTripsBeforeMaintanance(int tripsBeforeMaintanance)
{
    trips_before_maintanance = tripsBeforeMaintanance;
}
// getters
int BUS::getMaintananceDuration()
{
    return maintanace_duration;
}
int BUS::getBusCapacity()
{
    return bus_capacity;
}
int BUS::getSecondsToRide()
{
    return seconds_to_ride;
}
int BUS::getTripsBeforeMaintanance()
{
    return trips_before_maintanance;
}

// MBus constructor
MBus::MBus(int bus_capacity, int seconds_to_ride,
           int trips_before_maintanance, int maintanance_duration)
{
    setBusCapacity(bus_capacity);
    setSecondsToRide(seconds_to_ride);
    setTripsBeforeMaintanance(trips_before_maintanance);
    setMaintananceDuration(maintanance_duration);
}

// WBus constructor
WBus::WBus(int bus_capacity, int seconds_to_ride,
           int trips_before_maintanance, int maintanance_duration)
{
    setBusCapacity(bus_capacity);
    setSecondsToRide(seconds_to_ride);
    setTripsBeforeMaintanance(trips_before_maintanance);
    setMaintananceDuration(maintanance_duration);
}