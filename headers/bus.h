#pragma once
#include "passenger.h"
#include "station.h"

class BUS
{
public:
    // setters
    void setMaintananceDuration(int maintananceDuration);
    void setBusCapacity(int busCapacity);
    void setSecondsToRide(int secondsToRide);
    void setTripsBeforeMaintanance(int tripsBeforeMaintanance);
    // getters
    int getMaintananceDuration();
    int getBusCapacity();
    int getSecondsToRide();
    int getTripsBeforeMaintanance();
    // methods
    virtual bool isFull() = 0;
    virtual void addPassenger(const Passenger &passenger) = 0;
    virtual void removePassenger(const Passenger &passenger) = 0;
    virtual void makeTrip() = 0;

private:
    static int maintanace_duration;
    static int bus_capacity;
    static int seconds_to_ride;
    int trips_before_maintanance;
    Passenger *passengers = new Passenger[bus_capacity];
};

class MBus : public BUS
{
public:
    // constructor
    MBus(int bus_capacity, int seconds_to_ride,
         int trips_before_maintanance, int maintanance_duration);
    // methods
    void addPassenger(Passenger passenger);
    void removePassenger(Passenger passenger);
    void makeTrip();
};
class WBus : public BUS
{
public:
    // constructor
    WBus(int bus_capacity, int seconds_to_ride,
         int trips_before_maintanance, int maintanance_duration);
    // methods
    void addPassenger(Passenger passenger);
    void removePassenger(Passenger passenger);
    void makeTrip();
};
