#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <string>
#include <iostream>

using namespace std;

class Vehicle {
protected:
   // attributes
    time_t timeOfEntry;
    int ID;

public:
//methods
    Vehicle(int id);
    int getID();
    virtual int getParkingDuration();
    // destructors
    virtual ~Vehicle() {} 
};

#endif
