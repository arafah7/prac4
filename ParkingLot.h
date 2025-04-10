#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int capacity;
    int count;
public:
    ParkingLot(int size);
    ~ParkingLot();
    bool parkVehicle(Vehicle* v);
    bool unparkVehicle(int id);
    void printVehicleDurations() const;
    int getCount() const;
    int countOverstayingVehicles(int maxDuration) const;
};

#endif

