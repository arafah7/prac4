#include "ParkingLot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int size) {
    capacity = size;
    count = 0;
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

bool ParkingLot::parkVehicle(Vehicle* v) {
    if (count >= capacity) {
        cout << "The lot is full" << endl; // ← fixed here
        return false;
    }
    vehicles[count++] = v;
    return true;
}

bool ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < count - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            count--;
            return true;
        }
    }
    cout << "Vehicle not in the lot" << endl;
    return false;
}

void ParkingLot::printVehicleDurations() const {
    for (int i = 0; i < count; i++) {
        cout << "Vehicle ID: " << vehicles[i]->getID()
             << ", Adjusted Duration: " << vehicles[i]->getParkingDuration()
             << " seconds." << endl;
    }
}

int ParkingLot::getCount() const {
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxDuration) const {
    int total = 0;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getParkingDuration() > maxDuration) {
            total++;
        }
    }
    return total;
}
