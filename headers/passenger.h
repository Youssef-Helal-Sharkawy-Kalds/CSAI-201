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
    Passenger(char *id, int start_station, int end_station, PassengerType type);
    Passenger();
    // setters
    void setCurrentWaitTime(int current_wait_time);

    // getters
    char *getId();
    int getStartStation();
    int getEndStation();
    int getCurrentWaitTime();
    PassengerType getType()const;

    // methods

private:
    char *id = new char[1000];
    int start_station;
    int end_station;
    int current_wait_time;
    PassengerType type;
};