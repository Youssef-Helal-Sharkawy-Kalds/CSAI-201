#pragma once
#include <iostream>
#include <list>
#include <string>
using namespace std;

class Stations {
public:
	void addStation(const string& stationName) {
		stationsNum.push_back(stationName);
	}

	int printStation() const {
		for (auto &station : stationsNum) {
			cout << station << endl;  /////////// Wrong statement (Shouldn't include cout) \\\\\\\\\\\\;
		}
		return 0;
	}

private:
	list <string> stationsNum;
};

