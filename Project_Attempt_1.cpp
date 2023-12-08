using namespace std;
#include <iostream>
#include "Bus.h"
#include "Stations.h"
#include "Events.h"
#include "Company.h"


int main() {
	Stations stationsTest1;

	stationsTest1.addStation("station 1");
	stationsTest1.addStation("station 2");
	stationsTest1.addStation("station 3");
	stationsTest1.addStation("station 4");

	stationsTest1.printStation();


	Bus test1;

	test1.moveBus();
}


