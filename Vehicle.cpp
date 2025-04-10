#include "Vehicle.h"

Vehicle::Vehicle(int id){
    ID = id;
    timeOfEntry = time(0);
}

int Vehicle::getID() {
    return ID;
}

int Vehicle::getParkingDuration() {
    return (int)(time(0) - timeOfEntry);
}