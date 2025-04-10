#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() {
    int base = Vehicle::getParkingDuration();
    return (int)(base * 0.85);  
}
