#pragma once
#include "Stations.h"
#include <iostream>
#include <queue>
using namespace std;

class Bus {
public:
    Bus(int busNumber, int capacity, string sequenceMovement){
         this->busNumber1 = busNumber;
         this->capacity1 = capacity;
         this->sequenceMovement1 = sequenceMovement;
    }
    void moveBus(string movement) {
        queue <string> move;

        move.push("apple");
        cout << move.front();

        return;
    }
private:
    int busNumber1, capacity1;
    string sequenceMovement1;
};
