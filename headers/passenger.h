#pragma once
#include <string>
enum class PassengerType
{
    Aged,
    POD,
    Pregenant,
    WP,
    NP
};

class Passenger
{
public:
    // constructor
    Passenger(int id, int start_station, int end_station, PassengerType type);
    Passenger();
    // setters
    void setCurrentWaitTime(int current_wait_time);

    // getters
    int getId();
    int getStartStation();
    int getEndStation();
    int getCurrentWaitTime();
    PassengerType getType()const;

    // methods

private:
    int id;
    int start_station;
    int end_station;
    int current_wait_time;
    PassengerType type;
};