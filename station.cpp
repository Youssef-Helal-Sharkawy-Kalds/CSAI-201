#include <iostream>

#include <queue>

#include<string>

using namespace std;

class Passenger {
public:
    Passenger() {}  

    Passenger(const string& name) : name(name) {}

    std::string getName() const {
        return name;
    }

    virtual string getType() const {
        return " passenger ";
    }

private:
    string name;
};

class specialpassenger : public Passenger {

public:

    specialpassenger(const string& name) : Passenger(name) {}

    string getType() const override {

        return " special passenger ";
    }
};

class NormalPassenger : public Passenger {

public:

    NormalPassenger(const string& name) : Passenger(name) {}

    string getType() const override {

        return "normal passenger";
    }
};

class WheelchairPassenger : public Passenger {
public:
    WheelchairPassenger(const string& name) : Passenger(name) {}

    string getType() const override {

        return " wheel chair passenger ";
    }
};

class Bus {
public:

    Bus(int busNumber, int capacity)

    {
        this->busNumber = busNumber;

        this->capacity = capacity;
    }

    void addPassenger(const Passenger& passenger) {

        if (numPassengers < capacity)
        {
            passengers[numPassengers++] = passenger;

            cout << passenger.getType() << " " << passenger.getName() << " joined bus " << busNumber << endl;
        }
        else {
            cout << " bus " << busNumber << " is full. " << passenger.getType() << " " << passenger.getName()
                << " cannot join." << endl;
        }
    }

    int getBusNumber() const {
        return busNumber;
    }

    int getAvailableSeats() const {
        return capacity - numPassengers;
    }

private:
    int busNumber;

    int capacity;

    Passenger passengers[10];

    int numPassengers = 0;
};

class WheelchairBus : public Bus {

public:

    WheelchairBus(int busNumber, int capacity) : Bus(busNumber, capacity) {}

};

class MixedBus : public Bus
{

public:

    MixedBus(int busNumber, int capacity) : Bus(busNumber, capacity) {}

};

class Station {

private:

    queue<MixedBus> mixedbusses;

    queue<WheelchairBus> wheelchairbusses;

    queue<NormalPassenger> normalqueue;

    queue<specialpassenger> specialcategoryqueue;

    queue<WheelchairPassenger> wheelchairqueue;



public:

    void enterwheelchairqueue(const WheelchairPassenger& passenger) {

        wheelchairqueue.push(passenger);

        cout << " wheel chair passenger " << passenger.getName() << " entered wheel chair queue " << endl;
    }

    void enterspecialcategoryqueue(const specialpassenger& passenger) {

        specialcategoryqueue.push(passenger);

        cout << " special category passenger " << passenger.getName() << " entered special category queue " << endl;

    }

    void enternormalqueue(const NormalPassenger& passenger)
    {

        normalqueue.push(passenger);

        cout << " normal passenger " << passenger.getName() << " entered normal queue " << endl;

    }

    void assignPassengersToBuses() {
        while (!wheelchairqueue.empty() && !wheelchairbusses.empty()) {
            WheelchairPassenger currentPassenger = wheelchairqueue.front();
            WheelchairBus& currentBus = wheelchairbusses.front();

            if (currentBus.getAvailableSeats() > 0) {
                currentBus.addPassenger(currentPassenger);
                wheelchairqueue.pop();
            }
            else {
                wheelchairbusses.pop();
            }
        }

        while (!specialcategoryqueue.empty() && !mixedbusses.empty()) {
            specialpassenger currentPassenger = specialcategoryqueue.front();
            MixedBus& currentBus = mixedbusses.front();

            if (currentBus.getAvailableSeats() > 0) {
                currentBus.addPassenger(currentPassenger);
                specialcategoryqueue.pop();
            }
            else {
                mixedbusses.pop();
            }
        }

        while (!normalqueue.empty() && !mixedbusses.empty()) {
            NormalPassenger currentPassenger = normalqueue.front();
            MixedBus& currentBus = mixedbusses.front();

            if (currentBus.getAvailableSeats() > 0) {
                currentBus.addPassenger(currentPassenger);
                normalqueue.pop();
            }
            else {
                mixedbusses.pop();
            }
        }
    }
    void addWheelchairBus(const WheelchairBus& bus)
    {

        wheelchairbusses.push(bus);

        cout << "wheel chair bus " << bus.getBusNumber() << " entered station." << endl;
    }

    void addMixedBus(const MixedBus& bus)
    {

        mixedbusses.push(bus);

        cout << "mixed bus " << bus.getBusNumber() << " entered station." << endl;

    }

};

int main() {


    Station station;

    WheelchairBus wheelchairbus1(751, 2);

    WheelchairBus wheelchairbus2(274, 3);

    MixedBus mixedbus1(231, 3);

    station.addWheelchairBus(wheelchairbus1);

    station.addWheelchairBus(wheelchairbus2);

    station.addMixedBus(mixedbus1);

    WheelchairPassenger wheelchairpass1("of");

    WheelchairPassenger wheelchairpass2("a7");

    specialpassenger specialpass1("h5h");

    specialpassenger specialpass2("hehe");

    NormalPassenger normalpass1("suiii");

    NormalPassenger normalpass2("shit");

    station.enterwheelchairqueue(wheelchairpass1);

    station.enterwheelchairqueue(wheelchairpass2);

    station.enterspecialcategoryqueue(specialpass1);

    station.enterspecialcategoryqueue(specialpass2);

    station.enternormalqueue(normalpass1);

    station.enternormalqueue(normalpass2);

    station.assignPassengersToBuses();
}




