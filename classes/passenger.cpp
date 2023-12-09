#include "headers/passenger.h"

// setters
void Passenger::setCurrentWaitTime(int current_wait_time)
{
    this->current_wait_time = current_wait_time;
}
// getters
char *Passenger::getId()
{
    return id;
}
int Passenger::getStartStation()
{
    return start_station;
}
int Passenger::getEndStation()
{
    return end_station;
}
int Passenger::getCurrentWaitTime()
{
    return current_wait_time;
}
PassengerType Passenger::getType()const
{
    return type;
}
// constructors
Passenger::Passenger(char *id, int start_station, int end_station, PassengerType type)
{
    this->id = id;
    this->start_station = start_station;
    this->end_station = end_station;
    this->type = type;
}
Passenger::Passenger()
{
}
